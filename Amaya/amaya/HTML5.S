		{ Yuka Ezura 	 Nonember 2012-2013  }

STRUCTURE HTML5;

DEFPRES HTML5P;

ATTR
			{ coreattrs }
   ID = Text;			{ id }
   Class = Text;		{ class }
   PseudoClass = Text;
   Style\240 = Text;		{ style }
   Title = Text;		{ title }
		 	{ i18n }
   dir = ltr_, rtl_;		{ dir }
		 	{ RDFa }
   about = Text;		{ about }
   property = Text;		{ property }
   resource = Text;		{ resource }
   datatype = Text;		{ datatype }
   typeof = Text;		{ typeof }
   REL = Text;			{ rel }
   REV = Text;			{ rev }
			{ events }
   onclick = Text;		{ onclick }
   ondblclick = Text;		{ ondblclick }
   onmousedown = Text;		{ onmousedown }
   onmouseup = Text;		{ onmouseup }
   onmouseover = Text;		{ onmouseover }
   onmousemove = Text;		{ onmousemove }
   onmouseout = Text;		{ onmouseout }
   onkeypress = Text;		{ onkeypress }
   onkeydown = Text;		{ onkeydown }
   onkeyup = Text;		{ onkeyup }

   Invalid_attribute = Text;
   Unknown_attribute = Text;
   Ghost_restruct = Text;
   Highlight = Yes_;    { to show the HTML element corresponding to the
			  current selection in the source view }
   IntEntity = Yes_;	{ do not translate & into &amp; in output file }
   EntityName = Text;                                            { the content of the element is the name of an entity }
   xmlid = Text;		{ xml:id }
   xml_space = xml_space_default, xml_space_preserve;            { xml:space }
   NoImages = Yes_;
   NoObjects = Yes_;

CONST

   C_Empty = ' ';
   C_Head = ' ';
   C_BR   = '\12';

STRUCT

  HTML5								{ HTML }
     (ATTR ShowAreas = Yes_;
	   PrintURL = Yes_; PI = Text;
	   Namespaces = Text; RealLang = Yes_; Charset = Text) =
        BEGIN
        HEAD;
      ? BODY;                                                    { only one of BODY, document type }
      ? FRAMESET;  { obsolete }
        END + (Invalid_element, ASP_element, Unknown_namespace, XHTML_Unknown_namespace, Comment\240, XMLPI, CDATA);
        
  DOCTYPE = LIST OF (DOCTYPE_line = TEXT);

  Invalid_element = TEXT;
  ASP_element = LIST OF (ASP_line = TEXT);
  Unknown_namespace = TEXT;

  XHTML_Unknown_namespace = TEXT;

  Comment\240 = LIST OF (Comment_line = TEXT) - (Comment\240);

  XMLPI (ATTR is_css = Text) = LIST OF (PI_line = TEXT);
        
  CDATA = LIST OF (CDATA_line = TEXT);

  HEAD                                                                { HEAD }
     (ATTR profile = Text) =
        AGGREGATE
        Document_URL = TEXT - (STYLE_, SCRIPT_, META, LINK);
                    { prompt }
      ? TITLE = TEXT - (STYLE_, SCRIPT_, META, LINK);            { TITLE }
      ? MetadataContentList;                                      { LIST OF Metadata Content }
        END + (Object, STYLE_, SCRIPT_, META, LINK);

  ISINDEX (ATTR Prompt = Text) = ANY;         { ISINDEX obsolete }

  STYLE_                                                        { STYLE }
     (ATTR !Notation = Text; media = Text) =
         {  type             media }
         CASE OF
		TEXT;
		FlowContent;
		MetadataContent;
	 END
	 - (STYLE_, SCRIPT_, META, LINK);

  SCRIPT_                                                        { SCRIPT }
     (ATTR charset = Text; !content_type = Text;
         { charset          type }
           script_language = Text; script_src = Text;
         { language                src }
           defer = Yes_; event = Text; for_ = Text) =
         { defer         event         for }
        CASE OF
		TEXT;
		FlowContent;
		MetadataContent;
		PhrasingContent;
	END
	- (STYLE_, SCRIPT_, META, LINK) with content_type ?= 'text/javascript';

  META                                                                { META }
     (ATTR http_equiv = Text;
         { http-equiv }
           meta_name = Text; meta_content = Text;
         { name               content }
           scheme = Text) = CONSTANT C_Empty;
         { scheme }

  LINK                                                                { LINK }
     (ATTR charset; HREF_ = Text; hreflang = Text;
         { charset  href          hreflang }
           Link_type = Text;
         { type }
           media; target_ = Text) = CONSTANT C_Empty;
         { media  target }

  BASE                                                                { BASE }
     (ATTR !HREF_; target_) = LIST OF (MetadataContent);
          { href   target }
        {CONSTANT C_Empty;}

        IMG                                                        { IMG }
            (ATTR !SRC = Text; !ALT = Text; longdesc = Text;
                {  src          alt         longdesc }
                  Height_ = Text; Width__ = Text;
                { height          width }
                  IntWidthPercent = Integer; IntWidthPxl = Integer;
                  IntHeightPercent = Integer; IntHeightPxl = Integer;
                  USEMAP = Text; ISAMAP = Yes_;
                { usemap         ismap }
                  Alignment = Top_, Middle_, Bottom_, Left_, Right_;
                { align       top   middle   bottom   left   right }
                  Img_border = Integer;
                { border }
                  hspace = Integer; vspace = Integer) =
                { hspace            vspace }
    BEGIN
            PICTURE (ATTR SRC);
    END;

  BODY                                                                { BODY }
     (ATTR onload = Text; onunload = Text;
         { onload         onunload }
           background_ = Text; BackgroundColor = Text;
         { background          bgcolor }
           TextColor = Text; LinkColor = Text;
         { text              link }
           VisitedLinkColor = Text; ActiveLinkColor = Text) =
         { vlink                    alink }
        LIST OF (FlowContent);

  Element = CASE OF                                                { block }
        Paragraph;                                               { P }
        Pseudo_paragraph;
        Heading;                                                 { heading }
        List_;                                                   { list + DL }
        Preformatted;                                            { PRE preformatted }
        Division;                                                { DIV }

        SCRIPT_;                                                 { SCRIPT }
        NOSCRIPT;                                                { NOSCRIPT }
        Block_Quote;                                             { BLOCKQUOTE }
        Form;                                                    { FORM }

        Horizontal_Rule;                                         { HR }
        Table_;                                                  { TABLE }
        FIELDSET;                                                { FIELDSET }
        Address;                                                 { ADDRESS }
        IMG;                                                     { IMG }
        INS;
        DEL;
        Object;                                                  { OBJECT }
                                                                 { APPLET obsolete }
        MathML;                                                  { MATH }
        SVG;                                                     { SVG }
        XLink;                                                   { Annotations }
        External_Object;                  { IMG type=svg}
        Embed_;                                                  { EMBED }
        Template;                                                { XTiger }
	
	FlowContent;                                                   { Flow content }
        END;
	
	NOSCRIPT = LIST OF (Element) - (SCRIPT_);                       { NOSCRIPT }
	
	External_Object                  { IMG type=svg}
            (ATTR SRC;
                { src }
                  Height_; Width__;
                { height   width }
                  IntWidthPercent; IntWidthPxl;
                  IntHeightPercent; IntHeightPxl;
                  USEMAP; ISAMAP;
                { usemap  ismap }
                  NAME = Text;
                { name }
                  Alignment;
                { align   top   middle   bottom   left   right }
                  Img_border;
                { border }
                  hspace; vspace) =
                { hspace  vspace }
                 BEGIN
                 External_Object_Content;
                 END;
		 
        Embed_                                                { EMBED }
            (ATTR SRC;
                  Alignment;
                { align   top   bottom   left   right }
                  Height_; Width__;
                { height   width }
                  EmbedHidden = Yes_, No_;
                { hidden        yes   no }
                  EmbedName = Text;
                { name }
                  hspace; vspace;
                { hspace  vspace }
                  Embed_type = Text;
                { type }
                  pluginspage = Text;
                  pluginurl = Text; 
                ) =        
                BEGIN
                Embed_Content;
                END;

        HTMLfragment = LIST OF (Element);
        External_Object_Content = NATURE;
        Embed_Content = NATURE;

  Block_Quote                                                        { BLOCKQUOTE }
     (ATTR cite = Text;
         { cite }
           InternalLink = Reference(Any); ExternalLink = Yes_) =
        LIST OF (FlowContent);

  Horizontal_Rule                                                { HR }
     (ATTR Align = left_, center_, right_;
         { align   left   center   right }
           NoShade = NoShade_; Size_ = Integer; Width__;
         { noshade             size             width }
           IntWidthPercent; IntWidthPxl) =
        CONSTANT C_Empty;

  Basic_Set = LIST OF (Basic_Elem);

  { Paragraph must be the first element defined as a Basic_Set, to make
    sure that the editor will create a Paragraph when the user wants to
    create a Basic_Elem }
  Paragraph                                                        { P }
     (ATTR TextAlign = left_, center_, right_, justify_) =
         { align       left   center   right   justify }
        LIST OF (PhrasingContent);

  Address = FlowContent - (H1, H2, H3, H4, H5, H6, hgroup, header, footer, Address);

  Pseudo_paragraph =  LIST OF (PhrasingContent);

  Heading = CASE OF                                                { heading }
        H1;                                                      { H1 }
               { align }
        H2;                                                      { H2 }
        H3;                                                      { H3 }
        H4;                                                      { H4 }
        H5;                                                      { H5 }
        H6;                                                      { H6 }
        END;
	
  H1 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H1 }
       { align }
  H2 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H2 }
  H3 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H3 }
  H4 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H4 }
  H5 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H5 }
  H6 (ATTR TextAlign) = LIST OF (PhrasingContent);                               { H6 }

  Preformatted                                                        { PRE }
     (ATTR Width__; IntWidthPercent; IntWidthPxl) =
         { width }
        LIST OF (PhrasingContent)
             - (IMG, Object, Applet,
                Big_text, Small_text, Subscript, Superscript,
                Font_, BaseFont, External_Object);

  Anchor                                                        { A }
     (ATTR charset; Link_type; NAME;
         { charset  type       name }
           HREF_; hreflang; target_;
         { href   hreflang  target}
           accesskey = Text;
         { accesskey }
           shape = rectangle, circle, polygon, default_;
         { shape   rect       cirecle poly     default }
           coords = Text; tabindex = Integer;
         { coords         tabindex }
           onfocus = Text; onblur = Text;
         { onfocus         onblur }
           InternalLink; ExternalLink;
         { InternalLink  ExternalLink }) =
        LIST OF (Transparent);

  Basic_Elem = CASE OF                                                { special }
        TEXT;
        Font;                                                    { fontstyle }
        Phrase;                                                  { phrase }
        Form_Element;                                            { formctrl }
        Anchor;                                                  { A }
        IMG;                                                     { IMG }
                                                           { APPLET absolete }


        BR;                                                      { BR }
        SCRIPT_;                                                 { SCRIPT }
        Quotation;                                               { Q }
        Subscript;                                               { SUB }
        Superscript;                                             { SUP }
        Span;                                                    { SPAN }
        map; MAP;                                                { MAP }
        BDO;                                                     { BDO }
        Object;                                                  { OBJECT }
        Embed_;                                                  { EMBED }
        IFRAME;                                                  { IFRAME }
        ruby;                                                    { ruby }
        MathML;                                                  { MATH }
        XLink;                                                   { Annotations }
        Template;                                                { XTiger }
        External_Object;                                         { External Object }
        END;
	
  Subscript = LIST OF (PhrasingContent);                                         { SUB }
  Superscript = LIST OF (PhrasingContent);                                       { SUP }
  Span = LIST OF (PhrasingContent);                                              { SPAN }
  BDO (ATTR !dir) = LIST OF (PhrasingContent);                                   { BDO }

  BaseFont                                                        { BASEFONT }
     (ATTR !BaseFontSize = Integer; BaseFontColor = Text;
         {  size                    color }
           BaseFontFace = Text) =
         { face }
        ANY;

  BR                                                                { BR }
     (ATTR Clear_ = Left_, Right_, All_, None_) =
         { clear    left   right   all   none }
        CONSTANT C_BR;

  Quotation                                                        { Q }
     (ATTR cite; InternalLink; ExternalLink) =
         { cite }
        LIST OF (PhrasingContent);

  Font = CASE OF                { fontstyle }

        Italic_text;                                             { I }
        Bold_text;                                               { B }
        Underlined_text;                                         { U }
        Struck_text;                                             { S }

        Small_text;                                              { SMALL }
        END;
  
  Teletype_text = ANY;                                     { TT obsolete }
  Italic_text = LIST OF (PhrasingContent);                                       { I }
  Bold_text = LIST OF (PhrasingContent);                                         { B }
  Underlined_text = LIST OF (PhrasingContent);                                   { U }
  Struck_text = LIST OF (PhrasingContent);                                       { S }
  Big_text = ANY;                                          { BIG obsolete }
  Small_text = LIST OF (PhrasingContent);                                        { SMALL }

  Phrase = CASE OF                { phrase }
        Emphasis;                                                { EM }
        Strong;                                                  { STRONG }
        Def;                                                     { DFN }
        Code;                                                    { CODE }
        Sample;                                                  { SAMP }
        Keyboard;                                                { KBD }
        Variable_;                                               { VAR }
        Cite;                                                    { CITE }
        ABBR;                                                    { ABBR }
                                                       { ACRONYM obsolete }
        ins;                                                     { INS }
        del;                                                     { DEL }
        END;

  Emphasis = LIST OF (PhrasingContent);                                          { EM }
  Strong = LIST OF (PhrasingContent);                                            { STRONG }
  Def = LIST OF (PhrasingContent) - (Def);                                               { DFN }
  Code = LIST OF (PhrasingContent);                                              { CODE }
  Sample = LIST OF (PhrasingContent);                                            { SAMP }
  Keyboard = LIST OF (PhrasingContent);                                          { KBD }
  Variable_ = LIST OF (PhrasingContent);                                         { VAR }
  Cite = LIST OF (PhrasingContent);                                              { CITE }
  ABBR = LIST OF (PhrasingContent);                                              { ABBR }
  ACRONYM = ANY;                                           { ACRONYM obsolete }

  Font_                                                                { FONT obsolete }
     (ATTR Font_size = Text; color = Text; face = Text;
         { size              color              face }
           IntSizeIncr = Integer; IntSizeDecr = Integer;
           IntSizeRel = Integer) =
        ANY;

  Applet                                                        { APPLET Dummy }
     (ATTR codebase = Text; archive = Text; code = Text;
         { codebase         archive         code }
           object = Text; alt = Text; applet_name = Text;
         { object         alt         name }
           !Width__; IntWidthPercent; IntWidthPxl;
         {  width }
           !Height_; IntHeightPercent; IntHeightPxl;
         {  height }
           Alignment; hspace; vspace) =
         { align      hspace  vspace }
        ANY;
	
  Applet_Content = ANY;  { Dummy }

  Parameter                                                        { PARAM }
     (ATTR !Param_name = Text; Param_value = Text;
         { name               value }
           valuetype = data_, ref, object_;
         { valuetype   data   ref  object }
           Param_type = Text) =
         { type }
        CONSTANT C_Empty;

  Object                                                        { OBJECT }
     (ATTR declare = declare_; classid = Text; codebase;
         { declare            classid         codebase }
           data = Text; Object_type = Text;
         { data         type }
           codetype = Text; archive; standby = Text;
         { codetype         archive  standby }
           Height_; Width__;
           IntWidthPercent; IntWidthPxl; 
           IntHeightPercent; IntHeightPxl;
         {  height    width }
           USEMAP; NAME; tabindex; Alignment; Img_border;
         { usemap  name  tabindex  align      border }
           hspace; vspace) =
         { hspace  vspace }
	 Object_Content;
        { BEGIN
        PICTURE;
        Object_Content;
        END; }
	
  Object_Content = LIST OF (FlowOrIntOrParam);

  ElemOrParam = CASE OF { Dummy }
                  Element;
		  Parameter;
		  END;

  FlowOrIntOrParam = CASE OF
                  FlowContent;
		  InteractiveContent;
		  Parameter;
		  END;

  INS                                                                { INS }
     (ATTR cite; datetime = Text; InternalLink; ExternalLink) =
         { cite  datetime }
        LIST OF (Transparent);

  DEL                                                                { DEL }
     (ATTR cite; datetime; InternalLink; ExternalLink) =
         { cite  datetime }
        LIST OF (Transparent);

  ins                                                                { INS }
     (ATTR cite; datetime; InternalLink; ExternalLink) =
         { cite  datetime }
         LIST OF (Transparent);

  del                                                                { DEL }
     (ATTR cite; datetime; InternalLink; ExternalLink) =
         { cite  datetime }
         LIST OF (Transparent);

  Block = CASE OF {Block}
        Paragraph;
        Pseudo_paragraph;
        Heading;
        List_;
        Preformatted;
        Division;

        Block_Quote;
        Form;
        Horizontal_Rule;
        Table_;
        Address;
        IMG;
        Object;
       
        MathML;
        SVG;
        XLink;
        External_Object;
        Embed_;
        INS;
        DEL;
        END;

  Division                                                        { DIV }
     (ATTR TextAlign) =
         { align }
        LIST OF (FlowContent);

  Center =                                                        { CENTER obsolete }
        ANY;

  List_ = CASE OF                                                { list }
        Unnumbered_List;                                         { UL }
        Numbered_List;                                           { OL }
                                                       { DIR obsolete }
        Menu;                                                    { MENU }
        Definition_List;                                         { DL }
        END;

  Unnumbered_List                                                 { UL }
     (ATTR BulletStyle = disc_, circle_, square_;
         { type          disc   circle   square }
           COMPACT = Yes_) =
         { compact }
        LIST OF (List_Item);

  Numbered_List                                                        { OL }
     (ATTR NumberStyle = Arabic_, LowerAlpha, UpperAlpha,
         { type          1        a           A }
           LowerRoman_, UpperRoman_;
         { i            I }
           Start = Integer; COMPACT) =
         { start            compact }
        LIST OF (List_Item);

  Directory                                                        { DIR obsolete }
     (ATTR COMPACT) =
         { compact }
        ANY;

  Menu                                                                { MENU }
     (ATTR COMPACT) =
         { compact }
        CASE OF
                ListItemSet;						{ LI }
                FlowSet;
        END;

  ListItemSet = LIST OF (List_Item);				{ LI }

  List_Item                                                        { LI }
     (ATTR ItemStyle = disc_, circle_, square_, Arabic_,
         { type        disc   circle   square   1 }
           LowerAlpha, UpperAlpha, LowerRoman_, UpperRoman_;
         { a           A           i            I }
           ItemValue = Integer) =
         { value }
        LIST OF (FlowContent);

  Definition_List                                                { DL }
     (ATTR COMPACT) =
         { compact }
        LIST OF (Definition_Item);

  Definition_Item = BEGIN
        Term_List;                                               { DT }
      ? Definitions;                                             { DD }
        END;
	
  Term_List = LIST OF						{ DT }
    (Term = FlowContent - (header, footer, SectioningContent, HeadingContent));
  
  Definitions = LIST OF (Definition = LIST OF (FlowContent));          { DD }
  

  Form                                                                { FORM }
     (ATTR !Script_URL = Text; METHOD = Get_, Post_;
         {  action             method }
           ENCTYPE = Text; onsubmit = Text; onreset = Text;
         { enctype         onsubmit         onreset }
           target_; accept_charset = Text) =
         { target   accept-charset }
        LIST OF (FlowContent) - (Form);

  Form_Element = CASE OF
        Input;                                                   { INPUT }
        Option_Menu;                                             { SELECT }
        Text_Area;                                               { TEXTAREA }
        LABEL;                                                   { LABEL }
        BUTTON_;                                                 { BUTTON }
        END;

  Option_Menu                                                   { SELECT }
     (ATTR  NAME; MenuSize = Integer; Multiple = Yes_;
         {  name  size                multiple }
            disabled = Yes_; tabindex; onfocus; onblur;
          { disabled         tabindex  onfocus  onblur}
            onchange = Text) =
          { onchange }
        LIST OF (Option_item);
	
  Option_item = CASE OF
                  Option;
		  OptGroup;
		END;

  Option                                                        { OPTION }
     (ATTR Selected = Yes_; DefaultSelected = Yes_; ShowMe = Yes_;
         { selected }
           disabled; label = Text; Value_ = Text) =
         { disabled  label         value }
        TEXT;

  OptGroup                                                        { OPTGROUP }
     (ATTR disabled; !label) =
         { disabled   label }
        LIST OF (Option);

  Text_Area                                                        { TEXTAREA }
     (ATTR NAME; !Rows = Integer; !Columns = Integer;
         { name   rows             cols }
           disabled; readonly = Yes_; tabindex; accesskey;
         { disabled  readonly         tabindex  accesskey  }
           onfocus; onblur; onselect = Text; onchange;
         { onfocus  onblur  onselect         onchange }
           Default_Value = Text) =
        Input_Text - (Input) {with Rows ?= 4, Columns ?= 20};

  FIELDSET =                                                        { FIELDSET }
        BEGIN
        ? LEGEND;
        Fieldset_Content;
        END;

  Fieldset_Content = LIST OF (FlowContent);

  LEGEND                                                        { LEGEND }
     (ATTR accesskey; LAlign = Top_, Bottom_, Left_, Right_) =
         { accesskey  align    top   bottom   left   right }
        LIST OF (PhrasingContent);

  Input = CASE OF                                        { formctrl }
    Text_Input                                        { INPUT / TEXT }
           (ATTR  type = Text;
            NAME; Value_; disabled; readonly;
          { type name  value   disabled  readonly }
                  Area_Size = Integer; MaxLength = Integer;
                { size                 maxlength }
                  IntAreaSize = Integer;
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur; onselect; onchange;
                { onfocus  onblur  onselect  onchange }
                  Default_Value) =
                Input_Text - (Input) with type = 'text';

    Password_Input                                        { INPUT / PASSWORD }
           (ATTR  type; NAME; Value_; disabled; readonly; ALT;
                { type name  value   disabled  readonly alt}
                  Area_Size; IntAreaSize; MaxLength;
                { size                    maxlength }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur; onselect; onchange;
                { onfocus  onblur  onselect  onchange }
                  Default_Value) =
                Input_Text  - (Input) with type = 'password';

    File_Input                                        { INPUT / FILE }
           (ATTR  type; NAME; Value_; disabled; readonly; ALT;
                { type name  value   disabled  readonly alt }
                  Area_Size; IntAreaSize; MaxLength;
                { size                    maxlength }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur; accept = Text;
                { onfocus  onblur }
                  Default_Value) =
                Input_Text - (Input) with type = 'file';

    Checkbox_Input                                        { INPUT / CHECKBOX }
           (ATTR  type; NAME; Value_; Checked = Yes_, No_; ALT;
                { type name  value   checked alt }
                  disabled; readonly;
                { disabled  readonly }
                  tabindex; accesskey; onfocus; onblur;
                { tabindex  accesskey  onfocus  onblur }
                  DefaultChecked = Yes_, No_) =
                CONSTANT C_Empty with Checked ?= No_, type = 'checkbox';

    Image_Input                                        { INPUT / IMAGE }
           (ATTR  type; NAME; Value_; !SRC; ALT;
                { type name  value src alt }
                  Area_Size; IntWidthPxl;
                { size }
                  USEMAP; ISAMAP;
                { usemap  ismap }
                  disabled; readonly; tabindex; accesskey;
                { disabled  readonly  tabindex  accesskey }
                  onfocus; onblur;) =
                { onfocus  onblur }
                BEGIN
                PICTURE;
                END with NAME ?= 'radio', type = 'image';

    Radio_Input                                        { INPUT / RADIO }
           (ATTR  type; NAME; Value_; Checked; ALT;
                { type name  value   checked  disabled alt }
                  disabled; readonly; tabindex; accesskey;
                { disabled  readonly  tabindex  accesskey }
                  onfocus; onblur;
                { onfocus  onblur }
                  DefaultChecked) =
                CONSTANT C_Empty with Checked ?= No_, NAME ?= 'radio', type = 'radio';

    Submit_Input                                        { INPUT / SUBMIT }
           (ATTR  type; NAME; Value_; disabled; readonly; ALT;
                { type name  value   disabled; readonly alt }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur) =
                { onfocus  onblur }
    BEGIN
      CONSTANT C_Empty;
    END with Value_ ?= 'Submit', type = 'submit';

    Reset_Input                                        { INPUT / RESET }
           (ATTR  type; NAME; Value_; disabled; readonly; ALT;
                { type name  value   disabled  readonly alt }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur) =
                { onfocus  onblur }
                BEGIN
                CONSTANT C_Empty;
                END  - (Input) with NAME ?= 'Reset', Value_ ?= 'Reset', type = 'reset';

    Button_Input                                        { INPUT / BUTTON }
           (ATTR  type; NAME; Value_; disabled; readonly; ALT;
                { type name  value   disabled  readonly alt }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur) =
                { onfocus  onblur }
                BEGIN
                CONSTANT C_Empty;
                END with type = 'button';

    Hidden_Input                                        { INPUT / HIDDEN }
           (ATTR  type; NAME; Value_; disabled; ALT;
                { type name  value   disabled alt }
                  tabindex; accesskey;
                { tabindex  accesskey }
                  onfocus; onblur) =
                { onfocus  onblur }
                CONSTANT C_Empty with type = 'hidden';

    BUTTON_                                                { BUTTON }
           (ATTR  NAME; Value_;
                { name  value }
                  Button_type = button, submit, reset;
                { button  submit  reset }
                  disabled; tabindex; accesskey;
                { disabled  tabindex  accesskey }
                  onfocus; onblur) =
                { onfocus  onblur }
                LIST OF (PhrasingContent) - (InteractiveContent);
    LABEL                                                { LABEL }
           (ATTR  Associated_control = TEXT;
                { for }
                  accesskey; onfocus; onblur) =
                { accesskey  onfocus  onblur }
                LIST OF (PhrasingContent)
		- (BUTTON_, Input, keygen, meter, output, progress, Option_Menu, Text_Area, LABEL);

    Option_Menu;                                                 { SELECT }
    Text_Area;                                                   { TEXTAREA }
    END;

  Input_Text = BEGIN
        Inserted_Text = TEXT;
        END;

  Table_                                                        { TABLE }
     (ATTR summary = Text; Width__; Border = Integer;
         { summary         width    border }
           frame = void, above, below, hsides, lhs, rhs,
         { frame   void  above  below  hsides  lhs  rhs  }
                   vsides, box, border;
         {         vsides  box  border }
           rules_ = none_, groups, rows, cols, all;
         { rules    none   groups  rows  cols  all }
           cellspacing = Integer; cellpadding = Integer;
         { cellspacing                  cellpadding }
           Align; BackgroundColor;
         { align  bgcolor }
           datapagesize = Text; IntWidthPxl; IntWidthPercent) =
         { datapagesize }
        BEGIN
	? CAPTION;					{ CAPTION }
	Colgroups;
	? thead;					{ THEAD }
	? tfoot;					{ TFOOT }
	TbodyOrTr;
	{ @@but there can only be one tfoot element child in total
	  http://www.w3.org/TR/html5/tabular-data.html#the-table-element}
	? tfoot;					{ TFOOT }
        END;

  TbodyOrTr = CASE OF
            tbodys;
	    table_row_oneOrMore;
	    END;
	    
  ColStruct = CASE OF
            Cols;                                                { COL }
            Colgroups;                                           { COLGROUP }
            END;
	    
  Cols = LIST OF (COL);
  
  Colgroups = LIST OF (COLGROUP);
	    
  Table_head = LIST OF (Column_head);
  
  tbodys = LIST OF (tbody);						{ TBODY }
  
  table_row_oneOrMore = LIST [1..*] OF (Table_row);			{ TR }
  
  Table_content =
	    BEGIN
          ? thead;                                               { THEAD }
            Table_body;
          ? tfoot;                                               { TFOOT }
	    END;
	    
  Table_body = LIST OF (tbody);

  CAPTION                                                        { CAPTION }
     (ATTR Position = Position_top, Position_bottom,
         { align      top           bottom }
           Position_left, Position_right) =
         { left           right }
        LIST OF (FlowContent) - (Table_);

  COLGROUP                                                        { COLGROUP }
    (ATTR Cell_align = Cell_left, Cell_center, Cell_right,
        { align        left       center       right }
                       Cell_justify, Cell_char;
        {              justify       char }
          Cell_valign = Cell_top, Cell_middle, Cell_bottom, Cell_baseline;
        { valign        top       middle       bottom       baseline }
          Width__; span_ = Integer)
        { width    span }
         = LIST [0..*] OF (COL);

  COL                                                                { COL }
    (ATTR Cell_align; Cell_valign; Width__; span_)
        { align       valign       width    span }
         = CONSTANT C_Empty;

  ColColgroup = CASE OF { alias for reference  Ref_ColColgroup }
        COL;
        COLGROUP;
        END;

  Column_head (ATTR IntWidthPercent; IntWidthPxl;
               IntWidthRelative = Integer;
               { IntWidthForced indicates that IntWidthPercent,
                 IntWidthPxl or IntWidthRelative comes from a
                 COL or COLGROUP element }
               IntWidthForced = IntWidthForced_;
               Ref_ColColgroup = REFERENCE(ColColgroup)) =
        CONSTANT C_Head;

  thead                                                                { THEAD }
     (ATTR Cell_align; char = Text; charoff = Text; 
           Row_valign = Row_top, Row_middle, Row_bottom, Row_baseline) =
         { valign       top      middle      bottom      baseline }
        LIST OF (Table_row);

  tbody                                                                 { TBODY }
     (ATTR Cell_align; char; charoff; Row_valign) =
        LIST OF (Table_row);

  tfoot                                                                { TFOOT }
     (ATTR Cell_align; char; charoff; Row_valign) =
        LIST OF (Table_row);

  Table_row                                                        { TR }
     (ATTR Cell_align; char; charoff; Row_valign;
         { align       char  charoff  valign }
           BackgroundColor; IntHeightPxl) =
         { bgcolor          Special attribute to control row span }
        LIST OF (Table_cell);

  Table_cell = CASE OF
        Data_cell;                                               { TD }
        Heading_cell;                                            { TH }
        END;

  Data_cell                                                        { TD }
     (ATTR Ref_column = REFERENCE(Column_head);
           ColExt = REFERENCE(Column_head);
           RowExt = REFERENCE(Table_row);
           abbr = Text; axis = Text; headers = Text; scope = Text;
         { abbr         axis         headers         scope }
           rowspan_ = INTEGER; colspan_ = INTEGER;
         { rowspan             colspan }
           Cell_align; char; charoff; Cell_valign;
         { align       char  charoff  valign }
	   IntCellAlign = IntCellLeft, IntCellCenter, IntCellRight,
	                  IntCellJustify, IntCellChar;
           No_wrap = no_wrap; BackgroundColor;
         { nowrap             bgcolor }
           Width__; IntWidthPxl; IntWidthPercent;
           Height_;  IntHeightPercent; IntHeightPxl;) =
         { width    height }
        LIST OF (FlowContent);

  Heading_cell                                                        { TH }
     (ATTR Ref_column; ColExt; RowExt;
           abbr; axis; headers; scope;
         { abbr  axis  headers  scope }
           rowspan_; colspan_;
         { rowspan   colspan }
           Cell_align; char; charoff; Cell_valign;
	   IntCellAlign;
         { align       char  charoff  valign }
           No_wrap; BackgroundColor;
         { nowrap   bgcolor }
           Width__; IntWidthPxl; IntWidthPercent;
           Height_;  IntHeightPercent; IntHeightPxl) =
         { width    height }
        LIST OF (FlowContent) - (header, footer, SectioningContent, HeadingContent);

  MAP                                                                { MAP }
     (ATTR NAME; Ref_IMG = REFERENCE(Any)) =
         { name linked to an image}
	  LIST OF (Transparent);
        { LIST OF (ElemOrArea = CASE OF Element; AREA; END); }
	
  ElemOrArea = CASE OF Element; AREA; END; { Dummy }

  map                                                                { MAP }
     (ATTR NAME) =
         { name }
        LIST OF (Transparent);

  AREA                                                                { AREA }
     (ATTR shape; coords; HREF_; target_; nohref = Yes_; !ALT;
         { shape  coords  href   target   nohref          alt }
           tabindex; accesskey; onfocus; onblur;
         { tabindex  accesskey  onfocus  onblur }
           x_coord = Integer; y_coord = Integer; IntWidthPxl;
           IntHeightPxl; AreaRef_IMG = REFERENCE(Any)) =
        GRAPHICS with x_coord ?= 0, y_coord ?= 0,
                      IntWidthPxl ?= 25, IntHeightPxl ?= 10;

  FRAMESET                                                        { FRAMESET obsolete }
     (ATTR RowHeight = Text; ColWidth = Text;
         { rows              cols }
           onload; onunload) =
         { onload  onunload }
        ANY;
	
  Frames = LIST [1 .. *] OF (FrameElem);
	
  { FrameElem = CASE OF


              END - (NOFRAMES); }  { TODO: remove }
  FrameElem = ANY;

  NOFRAMES = BODY;                                               { NOFRAMES }

  FRAME                                                                { FRAME obsolete }
     (ATTR longdesc; NAME; FrameSrc = Text;
         { longdesc  name  src }
           frameborder = Border1, Border0;
         { frameborder   1        0 }
           marginwidth = Integer; marginheight = Integer;
         { marginwidth            marginheight }
           no_resize = Yes_; scrolling = Yes_, No_, auto_) =
         { noresize          scrolling   yes   no   auto }
        ANY;

  IFRAME                                                        { IFRAME }
     (ATTR longdesc; NAME; FrameSrc; frameborder;
         { longdesc  name  src       frameborder }
           marginwidth; marginheight; scrolling;
         { marginwidth  marginheight  scrolling }
           Alignment; Width__; Height_) =
         { align      width    height }
        BEGIN
        Iframe_Src_Content;
        Iframe_Content;                                          { flow }
        END;
	
  Iframe_Src_Content= NATURE;
  Iframe_Content = TEXT;                            { flow } { @@Text that conforms to the requirements given in the prose. }

  ruby =  LIST OF (simple_ruby);                                { ruby }

  simple_ruby =                                                 { ruby }
        BEGIN
	rb;
        RtOrRtWithPar;
        END;
	
  rb = TEXT{PhrasingContent - (simple_ruby, complex_ruby)};                         { obsolete @@}
  
  RtOrRtWithPar = CASE OF
              rt;
              RtWithPar;
              END;
  
  rt (ATTR rbspan = Integer) = PhrasingContent - (simple_ruby, complex_ruby);
  
  RtWithPar = BEGIN
                  rp;
                  rt;
                  rp;
                  END;
		  
  rp = TEXT;

  complex_ruby =                                               { ruby }
        BEGIN
        rbc;
        rtc1;
      ? rtc2;
        END;
	
  rbc = LIST OF (rb);  { TODO: modify here. "rb" is obsolete element! }
  rtc1 = LIST OF (rt);
  rtc2 = LIST OF (rt);
        
  { AnyLink is an alias for all elements with an attribute
    of type URI.  Only elements to be shown in the Links view
    are taken into account }
  AnyLink = CASE OF
        Anchor;                                                  { HREF_ }
        Block_Quote;                                             { cite }
        Quotation;                                               { cite }
        ins;                                                     { cite }
        del;                                                     { cite }
        END;

  { ParagEquiv is an alias for elements that are usually formatted like
	paragraphs }
  ParagEquiv = CASE OF
	Paragraph; Pseudo_paragraph;
	H1; H2; H3; H4; H5; H6;
	Term;
	Address;
	Preformatted;
	CAPTION;
	END;
	
  { HTML5 new elements }
  MetadataContent = CASE OF       { Metadata Content }
         BASE;                                                          { base }  
	 command;                                                       { @@ }  { command }
	 LINK;                                                          { link }  
	 META;                                                          { meta }  
	 NOSCRIPT;                                                      { noscript }  
	 SCRIPT_;                                                       { script }  
	 STYLE_;                                                        { style }  
	 {TITLE;}                                                         { title } { @@ should have one or zero title }  
	 END;
	 
  MetadataContentList = LIST OF (MetadataContent);                                         { Metadata Content }
  
  FlowContent = CASE OF             { flow content }
         Paragraph;                                                     { p }  
         Pseudo_paragraph;
	 PhrasingContent;                                               { Phrasing content }
         HeadingContent;
	 SectioningContent;
	 InteractiveContent;
	 header;                                                        { header }  
	 footer;                                                        { footer }  
	 Anchor;                                                        { a }  
	 ABBR;                                                          { abbr }  
	 Address;                                                       { address }  
	 AREA;                                                          { @@if it is a descendant of a map element } { area }   
	 Block_Quote;                                                   { blockquote }      
	 details;                                                { @@ } { details } 
	 dialog;                                                 { @@ } { dialog } 
	 Division;                                                      { div }  
	 Definition_List;                                               { dl }   
	 FIELDSET;                                                      { fieldset }  
	 figure;                                                  { @@ } { figure } 
	 Form;                                                          { form }  
	 Horizontal_Rule;                                               { hr }     
	 Menu;                                                          { menu }  
	 Numbered_List;                                                 { ol }  
	 Preformatted;                                                  { pre }    
	 STYLE_;                                                        { style } { @@ if the scoped attribute is present }   
	 Table_;                                                        { table }   
	 Unnumbered_List;                                               { ul }    
	 TEXT;
	 END;
	 
  FlowSet = LIST OF (FlowContent);
	 
  SectioningContent = CASE OF  { Sectioning content }
         article; { article }
	 aside;  { aside }
	 nav;  { nav }
	 section; { section }
	 END;
	 
  HeadingContent = CASE OF      { Heading content }
         H1; { h1 }
	 H2; { h2 }
	 H3; { h3 }
	 H4; { h4 }
	 H5; { h5 }
	 H6; { h6 }
	 hgroup; { hgroup }
	 END;
	 
  PhrasingContent = CASE OF      { Phrasing content }
         TEXT;
         EmbeddedContent;    { Embedded content }
	 TextLevelSemantics_ex_rt_rp; { Text-level semantics }
         AREA;                                                          { area } { if it is a descendant of a map element }
         BUTTON_;                                                       { button }
         command;                                                       { command }
         datalist;                                                      { datalist }
         del;                                                           { del } 
	 DEL;                                                           { del } 
         Input;                                                         { input }
         INS;                                                           { @@@ } { ins } 
	 ins;                                                           { @@@ } { ins } 
         keygen;                                                        { keygen }
         LABEL;                                                         { label }
         MAP;                                                           { @@@ } { map } 
	 map;                                                           { @@@ } { map } 
         meter;                                                         { meter }
         output;                                                        { output }
         progress;                                                      { progress }
         Option_Menu;                                                   { select }
	 ScriptingElement;                                              { script, noscript }
         Text_Area;                                                     { textarea }
	 END;
	 
  ScriptingElement = CASE OF      { scripting element }
         SCRIPT_;                                                       { script }
	 NOSCRIPT;                                                      { noscript }
	 END;
	 
  TextLevelSemantics_ex_rt_rp = CASE OF     { Text-level semantics - rt - rp}
         Anchor;                                                        { a }
	 Emphasis;                                                      { em }
	 Strong;                                                        { strong }
	 Small_text;                                                    { small }
	 Struck_text;                                                   { s }
	 Cite;                                                          { cite }
	 Quotation;                                                     { q }
	 Def;                                                           { dfn }
	 ABBR;                                                          { abbr }
	 time;                                                          { time }
	 Code;                                                          { code }
	 Variable_;                                                     { var }
	 Sample;                                                        { samp }
	 Keyboard;                                                      { kbd }
	 Subscript;                                                     { sub }
         Superscript;                                                   { sup }
	 Italic_text;                                                   { i }
	 Bold_text;                                                     { b }
	 Underlined_text;                                               { u }
	 mark;                                                          { mark }
	 ruby;                                                          { ruby }
	 { @@rt }
	 { @@rp }
	 bdi;                                                           { bdi }
	 BDO;                                                           { bdo }
	 Span;                                                          { span }
	 BR;                                                            { br }
	 wbr;                                                           { wbr }
	 END;
	 
  EmbeddedContent = CASE OF   { Embedded content }
         audio;                                                         { audio }
	 canvas;                                                        { canvas }
	 Embed_;                                                        { embed }  
	 IFRAME;                                                        { iframe }  
	 IMG;                                                           { img }  
	 External_Object;                                               { IMG type=svg }  
	 MathML;                                                        { math }  
	 Object;                                                        { object }  
	 SVG;                                                           { svg }  
	 video;                                                         { video }
         END;
	 
  InteractiveContent = CASE OF   { Interactive content }
         Anchor;                                                        { a }
	 audio;                                                         { audio } { @@if the controls attribute is present }
	 BUTTON_;                                                       { button }
	 details;                                                       { details }
	 Embed_;                                                        { embed }
	 IFRAME;                                                        { iframe }
	 IMG;                                                           { img }  { @@if the usemap attribute is present }
	 External_Object;                                               { IMG type=svg } { @@if the usemap attribute is present }
	 Input;                                                         { input } { if the type attribute is not in the Hidden state }
	 keygen;                                                        { keygen }
	 LABEL;                                                         { label }
	 Menu;                                                          { menu } { @@if the type attribute is in the toolbar state }
	 Object;                                                        { object }  { @@if the usemap attribute is present }
	 Option_Menu;                                                   { select }
	 Text_Area;                                                     { textarea }
	 video;                                                         { video }  { @@if the controls attribute is present }
	 END;
	 
  Transparent = ANY;
	 
  H_group = CASE OF
         H1;
	 H2;
	 H3;
	 H4;
	 H5;
	 H6;
	 END;
  
  
  article = LIST OF (FlowContent);                                      { article }
  
  aside = LIST OF (FlowContent);                                        { aside }
  
  section = LIST OF (FlowContent);                                      { section }
  
  nav = LIST OF (FlowContent);                                          { nav }
  
  hgroup = LIST OF (H_group);                                           { hgroup }
  
  header = LIST OF (FlowContent) - (header, footer);                                       { header }
  
  footer = LIST OF (FlowContent) - (header, footer);                                       { footer }
  
  canvas
    (ATTR Width__; IntWidthPxl; IntWidthPercent;
          Height_;  IntHeightPercent; IntHeightPxl;)
        { width    height }
    = LIST OF (Transparent)
    with Width__ ?= '300', Height_ ?= '150';                      { @@ } { canvas }
    
  mark = LIST OF (PhrasingContent);                                        { @@ } { mark }
  
  meter								{ @@ } { meter }
    (ATTR !meter_value = TEXT; meter_min = TEXT; meter_max = TEXT;
        { value            min            max }
	  meter_low = TEXT;   meter_high = TEXT; meter_optimum = TEXT;
        { low              high            optimum })
    = LIST OF (PhrasingContent) - (meter)			{ @@@ Phrasing content, but there must be no meter element descendants.}
    with meter_value ?= '0';
  
  audio = LIST OF (Transparent) - (audio, video);                         { @@ } { audio }
  
  video = LIST OF (Transparent) - (audio, video);                         { @@ } { video }
  
  bdi = LIST OF (PhrasingContent);                                        { @@ } { bdi }
  
  command = BEGIN
                CONSTANT C_Empty;
            END;                                                { @@ } { command }
	    
  datalist = CASE OF
               PhrasingContent;
	       options;
             END;                                               { @@ } { datalist }
  
  options = LIST OF (Option);                                   { option }
  
  keygen =  BEGIN
                CONSTANT C_Empty;
            END;                                                { @@ } { keygen }
	    
  output = LIST OF (PhrasingContent);                           { @@ } { output }
  
  progress = LIST OF (PhrasingContent) - (progress);            { @@ } { progress }
  
  time = LIST OF (PhrasingContent);                             { @@ } { time }
  
  wbr = BEGIN
             CONSTANT C_Empty;
        END;                                                    { @@ } { wbr }
  
  details = BEGIN						{ @@ } { details }
		summary_elem;					{ summary }
		FlowSet;
            END;
  
  dialog = LIST OF (FlowContent);                               { @@ } { dialog }
  
  figure = CASE OF						{ @@ } { figure }
		fidureContent1;
		fidureContent2;
		FlowSet;
           END;
  
  fidureContent1 = BEGIN
                     figcaption;
		     FlowSet;
		   END;
		   
  fidureContent2 = BEGIN
                     FlowSet;
                     figcaption;
		   END;
  
  figcaption = LIST OF (FlowContent);				{ @@ } { figcaption }
  
  summary_elem = LIST OF (PhrasingContent);				{ summary }
  
  source = BEGIN						{ source }
             CONSTANT C_Empty;
        END;
	
  track = BEGIN							{ track }
             CONSTANT C_Empty;
        END;

EXCEPT
        HTML5:          NoMove, NoResize;
        BODY:           NoCut, CssBackground, NoMove, NoResize,
                        SetWindowBackground, NoBreakByReturn;
        HEAD:           NoCut;
        TITLE:          NoCut, NoSpellCheck;
        Document_URL:   Hidden, NoSpellCheck, NoCut;
        C_Empty:        Hidden, NoSpellCheck, NoSelect;
        C_BR:           SelectParent;
        Frames:         Hidden;
        { FRAMESET:       NoCreate; obsolete }       { prevent a Return at the end of the
                                          document from creating a FRAMESET }
        Inserted_Text:  Hidden, NoCut, NoSpellCheck, CheckAllChars;
        Basic_Set:      Hidden;
        Definition_Item:Hidden;
        Term_List:      Hidden, CanCut;
        Definitions:    Hidden;
        XMLPI:          ReturnCreateNL, NoSpellCheck, NoReplicate, NotAnElementNode;
        Comment\240:    ReturnCreateNL, NoSpellCheck, NoReplicate, NotAnElementNode;
        Comment_line:   Hidden, MarkupPreserve;
        ASP_element:    ReturnCreateNL, NoSpellCheck, NoReplicate, NotAnElementNode;
        ASP_line:   Hidden, MarkupPreserve;
        PI_line:        Hidden, MarkupPreserve;
        DOCTYPE:        NoCut, NoSpellCheck, NotAnElementNode;
        DOCTYPE_line:   Hidden, NoCut;
        CDATA_line:     Hidden, MarkupPreserve;
        GRAPHICS:       NoMove, NoResize, SelectParent;
        TEXT:           NoMove, NoResize;
        PICTURE:        MoveResize;
        Invalid_element:NoCreate;
        Unknown_namespace:NoCreate;
        XHTML_Unknown_namespace:NoCreate;
        BR:             IsBreak;
        Pseudo_paragraph: ParagraphBreak, Hidden;
        Basic_Elem:     Hidden;
        Paragraph:      ParagraphBreak;
        H1:             ParagraphBreak;
        H2:             ParagraphBreak;
        H3:             ParagraphBreak;
        H4:             ParagraphBreak;
        H5:             ParagraphBreak;
        H6:             ParagraphBreak;
        Address:        ParagraphBreak;
        Term:           ParagraphBreak;
        List_Item:      ListItemBreak;
        Definition:      ListItemBreak;
        MAP:            IsDraw, IsMap, NoReplicate;
        IMG:            IsImg, NoReplicate;
        AREA:           MoveResize, ClickableSurface, HighlightChildren;
        Anchor:         ClickableSurface;
        Horizontal_Rule: ClickableSurface;
        Form:           NoReplicate;
        Image_Input:    IsImg, NoReplicate;
        Password_Input: Shadow, NoReplicate;
        Text_Input:     NoReplicate;
        File_Input:     NoReplicate;
        Checkbox_Input: NoReplicate;
        Radio_Input:    NoReplicate;
        Submit_Input:   NoReplicate;
        Reset_Input:    NoReplicate;
        Hidden_Input:   NoReplicate;
        Button_Input:   NoReplicate;
        BUTTON_:        NoReplicate;
        Preformatted:   ReturnCreateNL, NoReplicate;
        STYLE_:         ReturnCreateNL, NoSpellCheck, NoReplicate;
        SCRIPT_:        ReturnCreateNL, NoReplicate, MarkupPreserve;
        Text_Area:      ReturnCreateNL, NoReplicate;
        HTMLfragment:   NoMove, NoResize, Hidden, NoBreakByReturn;
        Division:       NoMove, NoResize, NoBreakByReturn;
        INS:            NoReplicate;
        DEL:            NoReplicate;
        ins:            NoReplicate;
        del:            NoReplicate;
        ExternalLink:   Invisible;
        InternalLink:   Invisible;
        IntWidthPercent:NewPercentWidth, Invisible;
        IntWidthPxl:    NewWidth, Invisible;
        IntWidthRelative:NewWidth, Invisible;
        IntWidthForced: Invisible;
        IntHeightPercent:Invisible;
        IntHeightPxl:   NewHeight, Invisible;
        IntAreaSize:    Invisible;
        IntSizeIncr:    Invisible;
        IntSizeDecr:    Invisible;
        IntSizeRel:     Invisible;
        IntCellAlign:	Invisible;
        x_coord:        Invisible, NewHPos;
        y_coord:        Invisible, NewVPos;
        Ref_IMG:        Invisible;
        AreaRef_IMG:    Invisible;
        Invalid_attribute: Invisible;
        Unknown_attribute: Invisible;
        Highlight:      Invisible;
        PseudoClass:    Invisible, CssPseudoClass;
        Default_Value:  Invisible;
        DefaultSelected:Invisible;
        ShowMe:         Invisible;
        DefaultChecked: Invisible;
        ShowAreas:      Invisible;
        PrintURL:       Invisible;
        NoImages:       Invisible;
        NoObjects:      Invisible;
        Namespaces:     Invisible;
        RealLang:       Invisible;
        Charset:        Invisible;
        PI:             Invisible;
        shape:          Invisible;
        Data_cell:      IsCell, NoMove, NoResize, NoBreakByReturn;
        Heading_cell:   IsCell, NoMove, NoResize, NoBreakByReturn;
        Table_cell:     IsCell, NoMove, NoResize, NoBreakByReturn;
        Table_:         IsTable, PageBreak, NoReplicate, NoBreakByReturn;
        CAPTION:        IsCaption;
        Column_head:    IsColHead, NoCut, Hidden, NoBreakByReturn;
        Table_head:     NoCut, Hidden, NoSelect, NoBreakByReturn;
        C_Head:         Hidden, NoSelect;
        ColStruct:      Hidden, NoSelect, NoCreate, NoBreakByReturn;
        Cols:           Hidden, NoSelect, NoCreate, NoBreakByReturn;
        Colgroups:      Hidden, NoSelect, NoCreate, NoBreakByReturn;
        Table_content:	PageBreakAllowed, Hidden, NoBreakByReturn;
        Table_body:     PageBreakAllowed, Hidden, NoBreakByReturn;
        thead:          NoBreakByReturn; 
        tbody:          NoBreakByReturn;
        tfoot:          NoBreakByReturn;
        Table_row:      IsRow, PageBreakPlace, NoBreakByReturn;
        rbc:            Hidden;
        rtc1:           Hidden;
        rtc2:           Hidden;
        ColExt:         Invisible;
        RowExt:         Invisible;
        Ref_column:     ColRef, Invisible;
        Ref_ColColgroup:ColColRef;
        colspan_:       ColSpan;
        rowspan_:       RowSpan;
        Ghost_restruct: Invisible;
        IntEntity:      Invisible;
        EntityName:     Invisible;
        onclick:        EventAttr;
        ondblclick:     EventAttr;
        onmousedown:    EventAttr;
        onmouseup:      EventAttr;
        onmouseover:    EventAttr;
        onmousemove:    EventAttr;
        onmouseout:     EventAttr;
        onkeypress:     EventAttr;
        onkeydown:      EventAttr;
        onkeyup:        EventAttr;
        onload:         EventAttr;
        onunload:       EventAttr;
        onfocus:        EventAttr;
        onblur:         EventAttr;
        onsubmit:       EventAttr;
        onreset:        EventAttr;
        onchange:       EventAttr;
        onselect:       EventAttr;
        ID :            CssId; {Default id attribute}
        Class:          CssClass, DuplicateAttr;
        External_Object: Hidden;
        External_Object_Content: Hidden, NoSpellCheck, NewRoot;
        Embed_:         NoBreakByReturn, NoReplicate, NoSpellCheck;
        Embed_Content:  Hidden, NoSelect, NewRoot;
        Object:         NoBreakByReturn, NoReplicate, IsImg;
        Object_Content: Hidden, NoSelect, NoCreate, NoCut, NoBreakByReturn;
        { APPLET absolete }
        { APPLET_Content absolete }
        IFRAME:         NoBreakByReturn, NoReplicate, NoSpellCheck;
        Iframe_Content: Hidden, NoSelect, NoCut, NoBreakByReturn;
        Iframe_Src_Content: Hidden, NoCut, NoSelect, NewRoot;
        Fieldset_Content: Hidden, NoSelect, NoCut, NoBreakByReturn;
        is_css:         Invisible;
        Start:          StartCounter;
        ItemValue:      SetCounter;
        xml_space:      SpacePreserve;
	
	article:        NoMove, NoResize, NoBreakByReturn;
	aside:          NoMove, NoResize, NoBreakByReturn;
	section:        NoMove, NoResize, NoBreakByReturn;
	nav:            NoMove, NoResize, NoBreakByReturn;
	header:         NoMove, NoResize, NoBreakByReturn;
	footer:         NoMove, NoResize, NoBreakByReturn;
END
