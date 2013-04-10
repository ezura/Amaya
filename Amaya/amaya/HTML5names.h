/* Mapping table of XHTML elements */
#include "HTML5.h"
static ElemMapping    XHTML5ElemMappingTable[] =
{
   /* This table MUST be in alphabetical order and in lower case */
 
   {"a", SPACE, HTML5_EL_Anchor, L_HTML5Value, TRUE},
   {"abbr", SPACE, HTML5_EL_ABBR, L_HTML5Value, TRUE},
   {"acronym", SPACE, HTML5_EL_ACRONYM, L_HTML5Value, TRUE},  /* obsolete */
   {"address", SPACE, HTML5_EL_Address, L_HTML5Value, FALSE},
   {"applet", SPACE, HTML5_EL_Applet, L_HTML5Value, TRUE},  /* obsolete */
   {"area", 'E', HTML5_EL_AREA, L_HTML5Value, FALSE},
   {"article", SPACE, HTML5_EL_article, L_HTML5Value, FALSE},
   {"aside", SPACE, HTML5_EL_aside, L_HTML5Value, FALSE},
   {"audio", SPACE, HTML5_EL_audio, L_HTML5Value, FALSE},
   {"b", SPACE, HTML5_EL_Bold_text, L_HTML5Value, TRUE},
   {"base", 'E', HTML5_EL_BASE, L_HTML5Value, FALSE},
   {"basefont", 'E', HTML5_EL_BaseFont, L_HTML5Value, FALSE}, /* obsolete */
   {"bdi", SPACE, HTML5_EL_bdi, L_HTML5Value, TRUE},
   {"bdo", SPACE, HTML5_EL_BDO, L_HTML5Value, TRUE},
   {"big", SPACE, HTML5_EL_Big_text, L_HTML5Value, TRUE},  /* obsolete */
   {"blockquote", SPACE, HTML5_EL_Block_Quote, L_HTML5Value, FALSE},
   {"body", SPACE, HTML5_EL_BODY, L_HTML5Value, FALSE},
   {"br", 'E', HTML5_EL_BR, L_HTML5Value, TRUE},
   {"button", SPACE, HTML5_EL_BUTTON_, L_HTML5Value, TRUE},
   {"c", SPACE, HTML5_EL_TEXT_UNIT, L_OtherValue, TRUE}, /* used by the trans.c */
   {"canvas", SPACE, HTML5_EL_canvas, L_HTML5Value, FALSE},
   {"caption", SPACE, HTML5_EL_CAPTION, L_HTML5Value, FALSE},
   {"cdata", SPACE, HTML5_EL_CDATA, L_OtherValue, FALSE},
   {"cdata_line", SPACE, HTML5_EL_CDATA_line, L_OtherValue, FALSE},
   {"center", SPACE, HTML5_EL_Center, L_HTML5Value, FALSE},  /* obsolete */
   {"cite", SPACE, HTML5_EL_Cite, L_HTML5Value, TRUE},
   {"code", SPACE, HTML5_EL_Code, L_HTML5Value, TRUE},
   {"colgroup", SPACE, HTML5_EL_COLGROUP, L_HTML5Value, FALSE},
   {"col", SPACE, HTML5_EL_COL, L_HTML5Value, FALSE},
   {"command", SPACE, HTML5_EL_command, L_HTML5Value, FALSE},
   {"datalist", SPACE, HTML5_EL_datalist, L_HTML5Value, FALSE},
   {"dd", SPACE, HTML5_EL_Definition, L_HTML5Value, FALSE},
   {"del", SPACE, HTML5_EL_del, L_HTML5Value, TRUE}, /* inline */
   {"del", SPACE, HTML5_EL_DEL, L_HTML5Value, TRUE}, /* block */
   {"details", SPACE, HTML5_EL_details, L_HTML5Value, TRUE},
   {"dfn", SPACE, HTML5_EL_Def, L_HTML5Value, TRUE},
   {"dir", SPACE, HTML5_EL_Directory, L_HTML5Value, FALSE},  /* obsolete */
   {"div", SPACE, HTML5_EL_Division, L_HTML5Value, FALSE},
   {"dl", SPACE, HTML5_EL_Definition_List, L_HTML5Value, FALSE},
   {"doctype", SPACE, HTML5_EL_DOCTYPE, L_OtherValue, FALSE},
   {"doctype_line", SPACE, HTML5_EL_DOCTYPE_line, L_OtherValue, FALSE},
   {"dt", SPACE, HTML5_EL_Term, L_HTML5Value, FALSE},
   {"em", SPACE, HTML5_EL_Emphasis, L_HTML5Value, TRUE},
   {"embed",  'E', HTML5_EL_Embed_, L_HTML5Value, TRUE},
   {"fieldset", SPACE, HTML5_EL_FIELDSET, L_HTML5Value, FALSE},
   {"figcaption", SPACE, HTML5_EL_figcaption, L_HTML5Value, FALSE},
   {"figure", SPACE, HTML5_EL_figure, L_HTML5Value, FALSE},
   {"font", SPACE, HTML5_EL_Font_, L_HTML5Value, TRUE},  /* obsolete */
   {"footer", SPACE, HTML5_EL_footer, L_HTML5Value, FALSE},
   {"form", SPACE, HTML5_EL_Form, L_HTML5Value, FALSE},
   {"frame", 'E', HTML5_EL_FRAME, L_HTML5Value, FALSE},  /* obsolete */
   {"frameset", SPACE, HTML5_EL_FRAMESET, L_HTML5Value, FALSE},  /* obsolete */
   {"h1", SPACE, HTML5_EL_H1, L_HTML5Value, FALSE},
   {"h2", SPACE, HTML5_EL_H2, L_HTML5Value, FALSE},
   {"h3", SPACE, HTML5_EL_H3, L_HTML5Value, FALSE},
   {"h4", SPACE, HTML5_EL_H4, L_HTML5Value, FALSE},
   {"h5", SPACE, HTML5_EL_H5, L_HTML5Value, FALSE},
   {"h6", SPACE, HTML5_EL_H6, L_HTML5Value, FALSE},
   {"head", SPACE, HTML5_EL_HEAD, L_HTML5Value, FALSE},
   {"header", SPACE, HTML5_EL_header, L_HTML5Value, FALSE},
   {"hgroup", SPACE, HTML5_EL_hgroup, L_HTML5Value, FALSE},
   {"hr", 'E', HTML5_EL_Horizontal_Rule, L_HTML5Value, FALSE},
   {"html", SPACE, HTML5_EL_HTML5, L_HTML5Value, FALSE},
   {"i", SPACE, HTML5_EL_Italic_text, L_HTML5Value, TRUE},
   {"iframe", SPACE, HTML5_EL_IFRAME, L_HTML5Value, TRUE},
   /*{"image", 'E', HTML5_EL_PICTURE_UNIT, L_HTML5Value, TRUE},*/
   {"img", 'E', HTML5_EL_IMG, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Text_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Password_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_File_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Image_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Checkbox_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Radio_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Submit_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Reset_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Button_Input, L_HTML5Value, TRUE},
   {"input", 'E', HTML5_EL_Hidden_Input, L_HTML5Value, TRUE},
   {"ins", SPACE, HTML5_EL_ins, L_HTML5Value, TRUE}, /* inline */
   {"ins", SPACE, HTML5_EL_INS, L_HTML5Value, TRUE}, /* block */
   {"isindex", 'E', HTML5_EL_ISINDEX, L_HTML5Value, FALSE},  /* obsolete */
   {"kbd", SPACE, HTML5_EL_Keyboard, L_HTML5Value, TRUE},
   {"keygen", SPACE, HTML5_EL_keygen, L_HTML5Value, FALSE},
   {"label", SPACE, HTML5_EL_LABEL, L_HTML5Value, TRUE},
   {"legend", SPACE, HTML5_EL_LEGEND, L_HTML5Value, FALSE},
   {"li", SPACE, HTML5_EL_List_Item, L_HTML5Value, FALSE},
   {"link", 'E', HTML5_EL_LINK, L_HTML5Value, FALSE},
   {"listing", SPACE, HTML5_EL_Preformatted, L_HTML5Value, FALSE},  /* obsolete */ /*converted to PRE */
   {"map", SPACE, HTML5_EL_map, L_HTML5Value, FALSE},
   {"map", SPACE, HTML5_EL_MAP, L_HTML5Value, FALSE},
   {"mark", SPACE, HTML5_EL_mark, L_HTML5Value, FALSE},
   {"menu", SPACE, HTML5_EL_Menu, L_HTML5Value, FALSE},
   {"meta", 'E', HTML5_EL_META, L_HTML5Value, FALSE},
   {"meter", SPACE, HTML5_EL_meter, L_HTML5Value, FALSE},
   {"nav", SPACE, HTML5_EL_nav, L_HTML5Value, FALSE},
   {"noframes", SPACE, HTML5_EL_NOFRAMES, L_HTML5Value, FALSE},
   {"noscript", SPACE, HTML5_EL_NOSCRIPT, L_HTML5Value, FALSE},
   {"object", SPACE, HTML5_EL_Object, L_HTML5Value, TRUE},
   {"ol", SPACE, HTML5_EL_Numbered_List, L_HTML5Value, FALSE},
   {"optgroup", SPACE, HTML5_EL_OptGroup, L_HTML5Value, TRUE},
   {"option", SPACE, HTML5_EL_Option, L_HTML5Value, TRUE},
   {"output", SPACE, HTML5_EL_output, L_HTML5Value, TRUE},
   {"p", SPACE, HTML5_EL_Paragraph, L_HTML5Value, FALSE},
   {"p*", SPACE, HTML5_EL_Pseudo_paragraph, L_HTML5Value, FALSE}, /* pseudo-paragraph */
   {"param", 'E', HTML5_EL_Parameter, L_HTML5Value, FALSE},
   {"plaintext", SPACE, HTML5_EL_Preformatted, L_HTML5Value, FALSE},  /*  obsolete */ /* converted to PRE */
   {"pre", SPACE, HTML5_EL_Preformatted, L_HTML5Value, FALSE},
   {"progress", SPACE, HTML5_EL_progress, L_HTML5Value, FALSE},
   {"q", SPACE, HTML5_EL_Quotation, L_HTML5Value, TRUE},
   {"rb", SPACE, HTML5_EL_rb, L_HTML5Value, FALSE},  /* obsolete */
   {"rbc", SPACE, HTML5_EL_rbc, L_HTML5Value, FALSE},
   {"rp", SPACE, HTML5_EL_rp, L_HTML5Value, FALSE},
   {"rt", SPACE, HTML5_EL_rt, L_HTML5Value, FALSE},
   {"rtc", SPACE, HTML5_EL_rtc1, L_HTML5Value, FALSE},
   {"rtc", SPACE, HTML5_EL_rtc2, L_HTML5Value, FALSE},
   {"ruby", SPACE, HTML5_EL_simple_ruby, L_HTML5Value, TRUE},
   {"s", SPACE, HTML5_EL_Struck_text, L_HTML5Value, TRUE},
   {"samp", SPACE, HTML5_EL_Sample, L_HTML5Value, TRUE},
   {"script", SPACE, HTML5_EL_SCRIPT_, L_HTML5Value, FALSE},
   {"section", SPACE, HTML5_EL_section, L_HTML5Value, FALSE},
   {"select", SPACE, HTML5_EL_Option_Menu, L_HTML5Value, TRUE},
   {"small", SPACE, HTML5_EL_Small_text, L_HTML5Value, TRUE},
   {"source", SPACE, HTML5_EL_source, L_HTML5Value, TRUE},
   {"span", SPACE, HTML5_EL_Span, L_HTML5Value, TRUE},
   {"strike", SPACE, HTML5_EL_Struck_text, L_HTML5Value, TRUE},  /* obsolete */
   {"strong", SPACE, HTML5_EL_Strong, L_HTML5Value, TRUE},
   {"style", SPACE, HTML5_EL_STYLE_, L_HTML5Value, FALSE},
   {"sub", SPACE, HTML5_EL_Subscript, L_HTML5Value, TRUE},
   {"summary_elem", SPACE, HTML5_EL_summary_elem, L_HTML5Value, TRUE},
   {"sup", SPACE, HTML5_EL_Superscript, L_HTML5Value, TRUE},
   {"symb", SPACE, HTML5_EL_SYMBOL_UNIT, L_OtherValue, TRUE},
   {"table", SPACE, HTML5_EL_Table_, L_HTML5Value, FALSE},
   {"tbody", SPACE, HTML5_EL_tbody, L_HTML5Value, FALSE},
   {"td", SPACE, HTML5_EL_Data_cell, L_HTML5Value, FALSE},
   {"textarea", SPACE, HTML5_EL_Text_Area, L_HTML5Value, TRUE},
   {"tfoot", SPACE, HTML5_EL_tfoot, L_HTML5Value, FALSE},
   {"th", SPACE, HTML5_EL_Heading_cell, L_HTML5Value, FALSE},
   {"thead", SPACE, HTML5_EL_thead, L_HTML5Value, FALSE},
   {"time", SPACE, HTML5_EL_time, L_HTML5Value, FALSE},
   {"title", SPACE, HTML5_EL_TITLE, L_HTML5Value, FALSE},
   {"tr", SPACE, HTML5_EL_Table_row, L_HTML5Value, FALSE},
   {"track", SPACE, HTML5_EL_track, L_HTML5Value, FALSE},
   {"tt", SPACE, HTML5_EL_Teletype_text, L_HTML5Value, TRUE},  /* obsolete */
   {"u", SPACE, HTML5_EL_Underlined_text, L_HTML5Value, TRUE},
   {"ul", SPACE, HTML5_EL_Unnumbered_List, L_HTML5Value, FALSE},
   {"var", SPACE, HTML5_EL_Variable_, L_HTML5Value, TRUE},
   {"video", SPACE, HTML5_EL_video, L_HTML5Value, FALSE},
   {"wbr", SPACE, HTML5_EL_wbr, L_HTML5Value, FALSE},
   {"xmlcomment", SPACE, HTML5_EL_Comment_, L_OtherValue, FALSE},
   {"xmlcomment_line", SPACE, HTML5_EL_Comment_line, L_OtherValue, FALSE},
   {"xmlpi", SPACE, HTML5_EL_XMLPI, L_OtherValue, FALSE},
   {"xmlpi_line", SPACE, HTML5_EL_PI_line, L_OtherValue, FALSE},
   {"xmp", SPACE, HTML5_EL_Preformatted, L_HTML5Value, FALSE},  /* obsolete */  /* converted to PRE */
   {"", SPACE, 0, L_HTML5Value, FALSE}	  /* Last entry. Mandatory */
};

/* Mapping table of XHTML5 attributes */
AttributeMapping XHTML5AttributeMappingTable[] =
{
   /* The first entry MUST be unknown_attr */
   /* The rest of this table MUST be in alphabetical order */
   {"unknown_attr", "", 'A', HTML5_ATTR_Invalid_attribute, L_HTML5Value},

   {"abbr", "", 'A', HTML5_ATTR_abbr, L_HTML5Value},
   {"about", "", 'A', HTML5_ATTR_about, L_RDFaValue},
   {"accept", "", 'A', HTML5_ATTR_accept, L_HTML5Value},
   {"accept-charset", "form", 'A', HTML5_ATTR_accept_charset, L_HTML5Value},
   {"accesskey", "", 'A', HTML5_ATTR_accesskey, L_HTML5Value},
   {"action", "", 'A', HTML5_ATTR_Script_URL, L_HTML5Value},
   {"align", "applet", 'A', HTML5_ATTR_Alignment, L_HTML5Value},  /* obsolete */
   {"align", "caption", 'A', HTML5_ATTR_Position, L_HTML5Value},
   {"align", "col", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "colgroup", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "div", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "embed", 'A', HTML5_ATTR_Alignment, L_HTML5Value},
   {"align", "h1", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "h2", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "h3", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "h4", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "h5", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "h6", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "hr", 'A', HTML5_ATTR_Align, L_HTML5Value},
   {"align", "iframe", 'A', HTML5_ATTR_Alignment, L_HTML5Value},
   /*{"align", "image", 'A', HTML5_ATTR_Alignment, L_HTML5Value},*/
   {"align", "img", 'A', HTML5_ATTR_Alignment, L_HTML5Value},
   {"align", "input", 'A', HTML5_ATTR_Alignment, L_HTML5Value},
   {"align", "legend", 'A', HTML5_ATTR_LAlign, L_HTML5Value},
   {"align", "object", 'A', HTML5_ATTR_Alignment, L_HTML5Value},
   {"align", "p", 'A', HTML5_ATTR_TextAlign, L_HTML5Value},
   {"align", "table", 'A', HTML5_ATTR_Align, L_HTML5Value},
   {"align", "tbody", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "td", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "tfoot", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "th", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "thead", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"align", "tr", 'A', HTML5_ATTR_Cell_align, L_HTML5Value},
   {"alink", "body", 'A', HTML5_ATTR_ActiveLinkColor, L_HTML5Value},
   {"alt", "applet", 'A', HTML5_ATTR_ALT, L_HTML5Value},  /* obsolete */
   {"alt", "area", 'A', HTML5_ATTR_ALT, L_HTML5Value},
   {"alt", "embed", 'A', HTML5_ATTR_ALT, L_HTML5Value},
   {"alt", "img", 'A', HTML5_ATTR_ALT, L_HTML5Value},
   {"alt", "input", 'A', HTML5_ATTR_ALT, L_HTML5Value},
   {"archive", "", 'A', HTML5_ATTR_archive, L_HTML5Value},
   {"axis", "", 'A', HTML5_ATTR_axis, L_HTML5Value},

   {"background", "", 'A', HTML5_ATTR_background_, L_HTML5Value},
   {"bgcolor", "", 'A', HTML5_ATTR_BackgroundColor, L_HTML5Value},
   {"border", "embed", 'A', HTML5_ATTR_Img_border, L_HTML5Value},
   /*{"border", "image", 'A', HTML5_ATTR_Img_border, L_HTML5Value},*/
   {"border", "img", 'A', HTML5_ATTR_Img_border, L_HTML5Value},
   {"border", "object", 'A', HTML5_ATTR_Img_border, L_HTML5Value},
   {"border", "table", 'A', HTML5_ATTR_Border, L_HTML5Value},

   {"cellspacing", "", 'A', HTML5_ATTR_cellspacing, L_HTML5Value},
   {"cellpadding", "", 'A', HTML5_ATTR_cellpadding, L_HTML5Value},
   {"char", "", 'A', HTML5_ATTR_char, L_HTML5Value},
   {"charoff", "", 'A', HTML5_ATTR_charoff, L_HTML5Value},
   {"charset", "", 'A', HTML5_ATTR_charset, L_HTML5Value},
   {"checked", "", 'A', HTML5_ATTR_Checked, L_HTML5Value},
   {"cite", "", 'A', HTML5_ATTR_cite, L_HTML5Value},
   {"class", "", 'A', HTML5_ATTR_Class, L_HTML5Value},
   {"classid", "", 'A', HTML5_ATTR_classid, L_HTML5Value},
   {"clear", "br", 'A', HTML5_ATTR_Clear_, L_HTML5Value},
   {"code", "", 'A', HTML5_ATTR_code, L_HTML5Value},
   {"codebase", "", 'A', HTML5_ATTR_codebase, L_HTML5Value},
   {"codetype", "", 'A', HTML5_ATTR_codetype, L_HTML5Value},
   {"color", "basefont", 'A', HTML5_ATTR_BaseFontColor, L_HTML5Value},  /* obsolete */
   {"color", "", 'A', HTML5_ATTR_color, L_HTML5Value},
    {"cols", "frameset", 'A', HTML5_ATTR_ColWidth, L_HTML5Value},   /* obsolete */
   {"cols", "textarea", 'A', HTML5_ATTR_Columns, L_HTML5Value},
   {"colspan", "", 'A', HTML5_ATTR_colspan_, L_HTML5Value},
   {"compact", "", 'A', HTML5_ATTR_COMPACT, L_HTML5Value},
   {"content", "", 'A', HTML5_ATTR_meta_content, L_HTML5Value},
   {"coords", "", 'A', HTML5_ATTR_coords, L_HTML5Value},

   {"data", "", 'A', HTML5_ATTR_data, L_HTML5Value},
   {"datapagesize", "table", 'A', HTML5_ATTR_datapagesize, L_HTML5Value},
   {"datatype", "", 'A', HTML5_ATTR_datatype, L_RDFaValue},
   {"datetime", "", 'A', HTML5_ATTR_datetime, L_HTML5Value},
   {"declare", "object", 'A', HTML5_ATTR_declare, L_HTML5Value},
   {"defer", "script", 'A', HTML5_ATTR_defer, L_HTML5Value},
   {"dir", "", 'A', HTML5_ATTR_dir, L_HTML5Value},
   {"disabled", "", 'A', HTML5_ATTR_disabled, L_HTML5Value},

   {"enctype", "form", 'A', HTML5_ATTR_ENCTYPE, L_HTML5Value},
   {"enctype", "", 'A', HTML5_ATTR_ENCTYPE, L_HTML5Value},
   {"event", "script", 'A', HTML5_ATTR_event, L_HTML5Value},

   {"face", "basefont", 'A', HTML5_ATTR_BaseFontFace, L_HTML5Value},  /* obsolete */
   {"face", "font", 'A', HTML5_ATTR_face, L_HTML5Value},  /*  obsolete*/
   {"for", "label", 'A', HTML5_ATTR_Associated_control, L_HTML5Value},
   {"for", "script", 'A', HTML5_ATTR_for_, L_HTML5Value},
   {"frame", "table", 'A', HTML5_ATTR_frame, L_HTML5Value},
   {"frameborder", "", 'A', HTML5_ATTR_frameborder, L_HTML5Value},

   {"headers", "", 'A', HTML5_ATTR_headers, L_HTML5Value},
   /*{"height", "image", 'A', HTML5_ATTR_Height_, L_HTML5Value},*/
   {"height", "img", 'A', HTML5_ATTR_Height_, L_HTML5Value},
   {"height", "object", 'A', HTML5_ATTR_Height_, L_HTML5Value},
   {"height", "", 'A', HTML5_ATTR_Height_, L_HTML5Value},
   {"hidden", "embed", 'A', HTML5_ATTR_EmbedHidden, L_HTML5Value},
   {"high", "meter", 'A', HTML5_ATTR_meter_high, L_HTML5Value},
   {"href", "", 'A', HTML5_ATTR_HREF_, L_HTML5Value},
   {"hreflang", "", 'A', HTML5_ATTR_hreflang, L_HTML5Value},
   {"hspace", "", 'A', HTML5_ATTR_hspace, L_HTML5Value},
   {"http-equiv", "", 'A', HTML5_ATTR_http_equiv, L_HTML5Value},

   {"id", "", 'A', HTML5_ATTR_ID, L_HTML5Value},
   {"ismap", "", 'A', HTML5_ATTR_ISAMAP, L_HTML5Value},

   {"label", "", 'A', HTML5_ATTR_label, L_HTML5Value},
   {"lang", "", 'A', HTML5_ATTR_Language, L_HTML5Value},
   {"language", "script", 'A', HTML5_ATTR_script_language, L_HTML5Value},
   {"link", "body", 'A', HTML5_ATTR_LinkColor, L_HTML5Value},
   {"longdesc", "", 'A', HTML5_ATTR_longdesc, L_HTML5Value},
   {"low", "meter", 'A', HTML5_ATTR_meter_low, L_HTML5Value},

   {"marginheight", "", 'A', HTML5_ATTR_marginheight, L_HTML5Value},
   {"marginwidth", "", 'A', HTML5_ATTR_marginwidth, L_HTML5Value},
   {"max", "meter", 'A', HTML5_ATTR_meter_max, L_HTML5Value},
   {"maxlength", "", 'A', HTML5_ATTR_MaxLength, L_HTML5Value},
   {"media", "", 'A', HTML5_ATTR_media, L_HTML5Value},
   {"method", "", 'A', HTML5_ATTR_METHOD, L_HTML5Value},
   {"min", "meter", 'A', HTML5_ATTR_meter_min, L_HTML5Value},
   {"multiple", "", 'A', HTML5_ATTR_Multiple, L_HTML5Value},

   {"name", "applet", 'A', HTML5_ATTR_applet_name, L_HTML5Value},  /* obsolete */
   {"name", "embed", 'A', HTML5_ATTR_EmbedName, L_HTML5Value},
   {"name", "frame", 'A', HTML5_ATTR_NAME, L_HTML5Value},  /* obsolete */
   {"name", "iframe", 'A', HTML5_ATTR_NAME, L_HTML5Value},
   {"name", "meta", 'A', HTML5_ATTR_meta_name, L_HTML5Value},
   {"name", "param", 'A', HTML5_ATTR_Param_name, L_HTML5Value},
   {"name", "", 'A', HTML5_ATTR_NAME, L_HTML5Value},
   {"nohref", "", 'A', HTML5_ATTR_nohref, L_HTML5Value},
   {"noresize", "", 'A', HTML5_ATTR_no_resize, L_HTML5Value},
   {"noshade", "", 'A', HTML5_ATTR_NoShade, L_HTML5Value},
   {"nowrap", "", 'A', HTML5_ATTR_No_wrap, L_HTML5Value},

   {"object", "applet", 'A', HTML5_ATTR_object, L_HTML5Value},  /* obsolete */
   {"onblur", "", 'A', HTML5_ATTR_onblur, L_HTML5Value},
   {"onchange", "", 'A', HTML5_ATTR_onchange, L_HTML5Value},
   {"onclick", "", 'A', HTML5_ATTR_onclick, L_HTML5Value},
   {"ondblclick", "", 'A', HTML5_ATTR_ondblclick, L_HTML5Value},
   {"onfocus", "", 'A', HTML5_ATTR_onfocus, L_HTML5Value},
   {"onkeydown", "", 'A', HTML5_ATTR_onkeydown, L_HTML5Value},
   {"onkeypress", "", 'A', HTML5_ATTR_onkeypress, L_HTML5Value},
   {"onkeyup", "", 'A', HTML5_ATTR_onkeyup, L_HTML5Value},
   {"onload", "", 'A', HTML5_ATTR_onload, L_HTML5Value},
   {"onmousedown", "", 'A', HTML5_ATTR_onmousedown, L_HTML5Value},
   {"onmousemove", "", 'A', HTML5_ATTR_onmousemove, L_HTML5Value},
   {"onmouseout", "", 'A', HTML5_ATTR_onmouseout, L_HTML5Value},
   {"onmouseover", "", 'A', HTML5_ATTR_onmouseover, L_HTML5Value},
   {"onmouseup", "", 'A', HTML5_ATTR_onmouseup, L_HTML5Value},
   {"onreset", "form", 'A', HTML5_ATTR_onreset, L_HTML5Value},
   {"onselect", "", 'A', HTML5_ATTR_onselect, L_HTML5Value},
   {"onsubmit", "form", 'A', HTML5_ATTR_onsubmit, L_HTML5Value},
   {"onunload", "", 'A', HTML5_ATTR_onunload, L_HTML5Value},
   {"optimum", "meter", 'A', HTML5_ATTR_meter_optimum, L_HTML5Value},

   {"pluginspage", "embed", 'A', HTML5_ATTR_pluginspage, L_HTML5Value},
   {"pluginurl", "embed", 'A', HTML5_ATTR_pluginurl, L_HTML5Value},
   {"profile", "head", 'A', HTML5_ATTR_profile, L_HTML5Value},
   {"prompt", "", 'A', HTML5_ATTR_Prompt, L_HTML5Value},
   {"property", "", 'A', HTML5_ATTR_property, L_RDFaValue},

   {"rbspan", "rt", 'A', HTML5_ATTR_rbspan, L_HTML5Value},
   {"readonly", "", 'A', HTML5_ATTR_readonly, L_HTML5Value},
   {"rel", "", 'A', HTML5_ATTR_REL, L_HTML5Value},
   {"resource", "", 'A', HTML5_ATTR_resource, L_RDFaValue},
   {"rev", "", 'A', HTML5_ATTR_REV, L_HTML5Value},
   {"rows", "frameset", 'A', HTML5_ATTR_RowHeight, L_HTML5Value},  /* obsolete */
   {"rows", "textarea", 'A', HTML5_ATTR_Rows, L_HTML5Value},
   {"rowspan", "", 'A', HTML5_ATTR_rowspan_, L_HTML5Value},
   {"rules", "table", 'A', HTML5_ATTR_rules_, L_HTML5Value},

   {"scheme", "meta", 'A', HTML5_ATTR_scheme, L_HTML5Value},
   {"scope", "", 'A', HTML5_ATTR_scope, L_HTML5Value},
   {"scrolling", "", 'A', HTML5_ATTR_scrolling, L_HTML5Value},
   {"selected", "option", 'A', HTML5_ATTR_Selected, L_HTML5Value},
   {"shape", "", 'A', HTML5_ATTR_shape, L_HTML5Value},
   {"size", "basefont", 'A', HTML5_ATTR_BaseFontSize, L_HTML5Value},  /* obsolete */
   {"size", "font", 'A', HTML5_ATTR_Font_size, L_HTML5Value},  /* obsolete */
   {"size", "hr", 'A', HTML5_ATTR_Size_, L_HTML5Value},
   {"size", "input", 'A', HTML5_ATTR_Area_Size, L_HTML5Value},
   {"size", "select", 'A', HTML5_ATTR_MenuSize, L_HTML5Value},
   {"span", "col", 'A', HTML5_ATTR_span_, L_HTML5Value},
   {"span", "colgroup", 'A', HTML5_ATTR_span_, L_HTML5Value},
   {"src", "embed", 'A', HTML5_ATTR_SRC, L_HTML5Value},
   {"src", "frame", 'A', HTML5_ATTR_FrameSrc, L_HTML5Value},  /* obsolete */
   {"src", "iframe", 'A', HTML5_ATTR_FrameSrc, L_HTML5Value},
   {"src", "script", 'A', HTML5_ATTR_script_src, L_HTML5Value},
   {"src", "", 'A', HTML5_ATTR_SRC, L_HTML5Value},
   {"standby", "", 'A', HTML5_ATTR_standby, L_HTML5Value},
   {"start", "", 'A', HTML5_ATTR_Start, L_HTML5Value},
   {"style", "", 'A', HTML5_ATTR_Style_, L_HTML5Value},
   {"summary", "table", 'A', HTML5_ATTR_summary, L_HTML5Value},

   {"tabindex", "", 'A', HTML5_ATTR_tabindex, L_HTML5Value},
   {"target", "", 'A', HTML5_ATTR_target_, L_HTML5Value},
   {"text", "", 'A', HTML5_ATTR_TextColor, L_HTML5Value},
   {"title", "", 'A', HTML5_ATTR_Title, L_HTML5Value},
   {"type", "button", 'A', HTML5_ATTR_Button_type, L_HTML5Value},
   {"type", "embed", 'A', HTML5_ATTR_Embed_type, L_HTML5Value},
   {"type", "li", 'A', HTML5_ATTR_ItemStyle, L_HTML5Value},
   {"type", "link", 'A', HTML5_ATTR_Link_type, L_HTML5Value},
   {"type", "a", 'A', HTML5_ATTR_Link_type, L_HTML5Value},
   {"type", "object", 'A', HTML5_ATTR_Object_type, L_HTML5Value},
   {"type", "ol", 'A', HTML5_ATTR_NumberStyle, L_HTML5Value},
   {"type", "param", 'A', HTML5_ATTR_Param_type, L_HTML5Value},
   {"type", "script", 'A', HTML5_ATTR_content_type, L_HTML5Value},
   {"type", "style", 'A', HTML5_ATTR_Notation, L_HTML5Value},
   {"type", "ul", 'A', HTML5_ATTR_BulletStyle, L_HTML5Value},
   {"type", "", SPACE, DummyAttribute, L_HTML5Value},
   {"typeof", "", 'A', HTML5_ATTR_typeof, L_RDFaValue},

   {"usemap", "", 'A', HTML5_ATTR_USEMAP, L_HTML5Value},

   {"valign", "col", 'A', HTML5_ATTR_Cell_valign, L_HTML5Value},
   {"valign", "colgroup", 'A', HTML5_ATTR_Cell_valign, L_HTML5Value},
   {"valign", "tbody", 'A', HTML5_ATTR_Row_valign, L_HTML5Value},
   {"valign", "td", 'A', HTML5_ATTR_Cell_valign, L_HTML5Value},
   {"valign", "tfoot", 'A', HTML5_ATTR_Row_valign, L_HTML5Value},
   {"valign", "th", 'A', HTML5_ATTR_Cell_valign, L_HTML5Value},
   {"valign", "thead", 'A', HTML5_ATTR_Row_valign, L_HTML5Value},
   {"valign", "tr", 'A', HTML5_ATTR_Row_valign, L_HTML5Value},
   {"value", "meter", 'A', HTML5_ATTR_meter_value, L_HTML5Value},
   {"value", "li", 'A', HTML5_ATTR_ItemValue, L_HTML5Value},
   {"value", "param", 'A', HTML5_ATTR_Param_value, L_HTML5Value},
   {"value", "", 'A', HTML5_ATTR_Value_, L_HTML5Value},
   {"valuetype", "param", 'A', HTML5_ATTR_valuetype, L_HTML5Value},
   {"version", "", 'A', 0, L_HTML5Value},
   {"vlink", "body", 'A', HTML5_ATTR_VisitedLinkColor, L_HTML5Value},
   {"vspace", "", 'A', HTML5_ATTR_vspace, L_HTML5Value},

   {"width", "applet", 'A', HTML5_ATTR_Width__, L_HTML5Value}, /* obsolete */
   {"width", "canvas", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "col", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "colgroup", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "embed", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "hr", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "iframe", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   /*{"width", "image", 'A', HTML5_ATTR_Width__, L_HTML5Value},*/
   {"width", "img", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "object", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "pre", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "table", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "td", 'A', HTML5_ATTR_Width__, L_HTML5Value},
   {"width", "th", 'A', HTML5_ATTR_Width__, L_HTML5Value},

   {"xml:id", "", 'A', HTML5_ATTR_xmlid, L_HTML5Value},
   {"xml:lang", "", 'A', HTML5_ATTR_Language, L_HTML5Value},
   {"xml:space", "", 'A', HTML5_ATTR_xml_space, L_HTML5Value},
   {"zzghost", "", 'A', HTML5_ATTR_Ghost_restruct, L_HTML5Value},
   {"", "", EOS, 0, L_OtherValue}		/* Last entry. Mandatory */
};

/* Mapping table of HTML5 attribute values */
AttrValueMapping Xhtml5AttrValueMappingTable[] =
{
   {HTML5_ATTR_dir, "ltr", HTML5_ATTR_dir_VAL_ltr_},
   {HTML5_ATTR_dir, "rtl", HTML5_ATTR_dir_VAL_rtl_},

   {HTML5_ATTR_TextAlign, "left", HTML5_ATTR_TextAlign_VAL_left_},
   {HTML5_ATTR_TextAlign, "center", HTML5_ATTR_TextAlign_VAL_center_},
   {HTML5_ATTR_TextAlign, "right", HTML5_ATTR_TextAlign_VAL_right_},
   {HTML5_ATTR_TextAlign, "justify", HTML5_ATTR_TextAlign_VAL_justify_},

   {HTML5_ATTR_Align, "left", HTML5_ATTR_Align_VAL_left_},
   {HTML5_ATTR_Align, "center", HTML5_ATTR_Align_VAL_center_},
   {HTML5_ATTR_Align, "right", HTML5_ATTR_Align_VAL_right_},

   {HTML5_ATTR_LAlign, "top", HTML5_ATTR_LAlign_VAL_Top_},
   {HTML5_ATTR_LAlign, "bottom", HTML5_ATTR_LAlign_VAL_Bottom_},
   {HTML5_ATTR_LAlign, "left", HTML5_ATTR_LAlign_VAL_Left_},
   {HTML5_ATTR_LAlign, "right", HTML5_ATTR_LAlign_VAL_Right_},

   {HTML5_ATTR_Clear_, "left", HTML5_ATTR_Clear__VAL_Left_},
   {HTML5_ATTR_Clear_, "right", HTML5_ATTR_Clear__VAL_Right_},
   {HTML5_ATTR_Clear_, "all", HTML5_ATTR_Clear__VAL_All_},
   {HTML5_ATTR_Clear_, "none", HTML5_ATTR_Clear__VAL_None_},

   {HTML5_ATTR_NumberStyle, "1", HTML5_ATTR_NumberStyle_VAL_Arabic_},
   {HTML5_ATTR_NumberStyle, "a", HTML5_ATTR_NumberStyle_VAL_LowerAlpha},
   {HTML5_ATTR_NumberStyle, "A", HTML5_ATTR_NumberStyle_VAL_UpperAlpha},
   {HTML5_ATTR_NumberStyle, "i", HTML5_ATTR_NumberStyle_VAL_LowerRoman_},
   {HTML5_ATTR_NumberStyle, "I", HTML5_ATTR_NumberStyle_VAL_UpperRoman_},

   {HTML5_ATTR_BulletStyle, "disc", HTML5_ATTR_BulletStyle_VAL_disc_},
   {HTML5_ATTR_BulletStyle, "square", HTML5_ATTR_BulletStyle_VAL_square_},
   {HTML5_ATTR_BulletStyle, "circle", HTML5_ATTR_BulletStyle_VAL_circle_},

   {HTML5_ATTR_ItemStyle, "1", HTML5_ATTR_ItemStyle_VAL_Arabic_},
   {HTML5_ATTR_ItemStyle, "a", HTML5_ATTR_ItemStyle_VAL_LowerAlpha},
   {HTML5_ATTR_ItemStyle, "A", HTML5_ATTR_ItemStyle_VAL_UpperAlpha},
   {HTML5_ATTR_ItemStyle, "i", HTML5_ATTR_ItemStyle_VAL_LowerRoman_},
   {HTML5_ATTR_ItemStyle, "I", HTML5_ATTR_ItemStyle_VAL_UpperRoman_},
   {HTML5_ATTR_ItemStyle, "disc", HTML5_ATTR_ItemStyle_VAL_disc_},
   {HTML5_ATTR_ItemStyle, "square", HTML5_ATTR_ItemStyle_VAL_square_},
   {HTML5_ATTR_ItemStyle, "circle", HTML5_ATTR_ItemStyle_VAL_circle_},

   {HTML5_ATTR_Button_type, "button", HTML5_ATTR_Button_type_VAL_button},
   {HTML5_ATTR_Button_type, "submit", HTML5_ATTR_Button_type_VAL_submit},
   {HTML5_ATTR_Button_type, "reset", HTML5_ATTR_Button_type_VAL_reset},

   {HTML5_ATTR_frame, "void", HTML5_ATTR_frame_VAL_void},
   {HTML5_ATTR_frame, "above", HTML5_ATTR_frame_VAL_above},
   {HTML5_ATTR_frame, "below", HTML5_ATTR_frame_VAL_below},
   {HTML5_ATTR_frame, "hsides", HTML5_ATTR_frame_VAL_hsides},
   {HTML5_ATTR_frame, "lhs", HTML5_ATTR_frame_VAL_lhs},
   {HTML5_ATTR_frame, "rhs", HTML5_ATTR_frame_VAL_rhs},
   {HTML5_ATTR_frame, "vsides", HTML5_ATTR_frame_VAL_vsides},
   {HTML5_ATTR_frame, "box", HTML5_ATTR_frame_VAL_box},
   {HTML5_ATTR_frame, "border", HTML5_ATTR_frame_VAL_border},

   {HTML5_ATTR_frameborder, "0", HTML5_ATTR_frameborder_VAL_Border0},
   {HTML5_ATTR_frameborder, "1", HTML5_ATTR_frameborder_VAL_Border1},

   {HTML5_ATTR_scrolling, "yes", HTML5_ATTR_scrolling_VAL_Yes_},
   {HTML5_ATTR_scrolling, "no", HTML5_ATTR_scrolling_VAL_No_},
   {HTML5_ATTR_scrolling, "auto", HTML5_ATTR_scrolling_VAL_auto_},

   {HTML5_ATTR_rules_, "none", HTML5_ATTR_rules__VAL_none_},
   {HTML5_ATTR_rules_, "groups", HTML5_ATTR_rules__VAL_groups},
   {HTML5_ATTR_rules_, "rows", HTML5_ATTR_rules__VAL_rows},
   {HTML5_ATTR_rules_, "cols", HTML5_ATTR_rules__VAL_cols},
   {HTML5_ATTR_rules_, "all", HTML5_ATTR_rules__VAL_all},

   {HTML5_ATTR_Cell_align, "left", HTML5_ATTR_Cell_align_VAL_Cell_left},
   {HTML5_ATTR_Cell_align, "center", HTML5_ATTR_Cell_align_VAL_Cell_center},
   {HTML5_ATTR_Cell_align, "right", HTML5_ATTR_Cell_align_VAL_Cell_right},
   {HTML5_ATTR_Cell_align, "justify", HTML5_ATTR_Cell_align_VAL_Cell_justify},
   {HTML5_ATTR_Cell_align, "char", HTML5_ATTR_Cell_align_VAL_Cell_char},

   {HTML5_ATTR_Alignment, "top", HTML5_ATTR_Alignment_VAL_Top_},
   {HTML5_ATTR_Alignment, "middle", HTML5_ATTR_Alignment_VAL_Middle_},
   {HTML5_ATTR_Alignment, "bottom", HTML5_ATTR_Alignment_VAL_Bottom_},
   {HTML5_ATTR_Alignment, "left", HTML5_ATTR_Alignment_VAL_Left_},
   {HTML5_ATTR_Alignment, "right", HTML5_ATTR_Alignment_VAL_Right_},

   {HTML5_ATTR_METHOD, "get", HTML5_ATTR_METHOD_VAL_Get_},
   {HTML5_ATTR_METHOD, "post", HTML5_ATTR_METHOD_VAL_Post_},

   {HTML5_ATTR_Position, "top", HTML5_ATTR_Position_VAL_Position_top},
   {HTML5_ATTR_Position, "bottom", HTML5_ATTR_Position_VAL_Position_bottom},
   {HTML5_ATTR_Position, "left", HTML5_ATTR_Position_VAL_Position_left},
   {HTML5_ATTR_Position, "right", HTML5_ATTR_Position_VAL_Position_right},

   {HTML5_ATTR_Row_valign, "top", HTML5_ATTR_Row_valign_VAL_Row_top},
   {HTML5_ATTR_Row_valign, "middle", HTML5_ATTR_Row_valign_VAL_Row_middle},
   {HTML5_ATTR_Row_valign, "bottom", HTML5_ATTR_Row_valign_VAL_Row_bottom},
   {HTML5_ATTR_Row_valign, "baseline", HTML5_ATTR_Row_valign_VAL_Row_baseline},

   {HTML5_ATTR_Cell_valign, "top", HTML5_ATTR_Cell_valign_VAL_Cell_top},
   {HTML5_ATTR_Cell_valign, "middle", HTML5_ATTR_Cell_valign_VAL_Cell_middle},
   {HTML5_ATTR_Cell_valign, "bottom", HTML5_ATTR_Cell_valign_VAL_Cell_bottom},
   {HTML5_ATTR_Cell_valign, "baseline", HTML5_ATTR_Cell_valign_VAL_Cell_baseline},

   {HTML5_ATTR_shape, "rect", HTML5_ATTR_shape_VAL_rectangle},
   {HTML5_ATTR_shape, "circle", HTML5_ATTR_shape_VAL_circle},
   {HTML5_ATTR_shape, "poly", HTML5_ATTR_shape_VAL_polygon},
   {HTML5_ATTR_shape, "default", HTML5_ATTR_shape_VAL_default_},

   {HTML5_ATTR_valuetype, "data", HTML5_ATTR_valuetype_VAL_data_},
   {HTML5_ATTR_valuetype, "ref", HTML5_ATTR_valuetype_VAL_ref},
   {HTML5_ATTR_valuetype, "object", HTML5_ATTR_valuetype_VAL_object_},

   {HTML5_ATTR_EmbedHidden, "yes", HTML5_ATTR_EmbedHidden_VAL_Yes_},
   {HTML5_ATTR_EmbedHidden, "no", HTML5_ATTR_EmbedHidden_VAL_No_},

/* HTML5 attribute TYPE generates a Thot element */
   {DummyAttribute, "button", HTML5_EL_Button_Input},
   {DummyAttribute, "checkbox", HTML5_EL_Checkbox_Input},
   {DummyAttribute, "file", HTML5_EL_File_Input},
   {DummyAttribute, "hidden", HTML5_EL_Hidden_Input},
   {DummyAttribute, "image", HTML5_EL_Image_Input},
   {DummyAttribute, "password", HTML5_EL_Password_Input},
   {DummyAttribute, "radio", HTML5_EL_Radio_Input},
   {DummyAttribute, "reset", HTML5_EL_Reset_Input},
   {DummyAttribute, "submit", HTML5_EL_Submit_Input},
   {DummyAttribute, "text", HTML5_EL_Text_Input},

/* The following declarations allow the parser to accept boolean attributes */
/* written "checked=CHECKED"), for instance */
   {HTML5_ATTR_ISAMAP, "ismap", HTML5_ATTR_ISAMAP_VAL_Yes_},
   {HTML5_ATTR_nohref, "nohref", HTML5_ATTR_nohref_VAL_Yes_},
   {HTML5_ATTR_COMPACT, "compact", HTML5_ATTR_COMPACT_VAL_Yes_},
   {HTML5_ATTR_Multiple, "multiple", HTML5_ATTR_Multiple_VAL_Yes_},
   {HTML5_ATTR_Selected, "selected", HTML5_ATTR_Selected_VAL_Yes_},
   {HTML5_ATTR_Checked, "checked", HTML5_ATTR_Checked_VAL_Yes_},
   {HTML5_ATTR_No_wrap, "nowrap", HTML5_ATTR_No_wrap_VAL_no_wrap},
   {HTML5_ATTR_NoShade, "noshade", HTML5_ATTR_NoShade_VAL_NoShade_},
   {HTML5_ATTR_declare, "declare", HTML5_ATTR_declare_VAL_declare_},
   {HTML5_ATTR_defer, "defer", HTML5_ATTR_defer_VAL_Yes_},
   {HTML5_ATTR_disabled, "disabled", HTML5_ATTR_disabled_VAL_Yes_},
   {HTML5_ATTR_readonly, "readonly", HTML5_ATTR_readonly_VAL_Yes_},
   {HTML5_ATTR_no_resize, "noresize", HTML5_ATTR_no_resize_VAL_Yes_},

   /* XML attribute xml:space */
   {HTML5_ATTR_xml_space, "default", HTML5_ATTR_xml_space_VAL_xml_space_default},
   {HTML5_ATTR_xml_space, "preserve", HTML5_ATTR_xml_space_VAL_xml_space_preserve},

   {0, "", 0}			/* Last entry. Mandatory */
};

/* Mapping table of XHTML5 entities */
XmlEntity Xhtml5EntityTable[] =
{
/* This table MUST be in alphabetical order */
{"AElig", 198},   /* latin capital letter AE = */ 
                        /* latin capital ligature AE, U+00C6 ISOlat1 */
{"Aacute", 193},  /* latin capital letter A with acute, U+00C1 ISOlat1 */
{"Acirc", 194},   /* latin capital letter A with circumflex, U+00C2 ISOlat1 */
{"Agrave", 192},  /* latin capital letter A with grave = */
                        /* latin capital letter A grave, U+00C0 ISOlat1 */
{"Alpha", 913},   /* greek capital letter alpha, U+0391 */
{"Aring", 197},   /* latin capital letter A with ring above = */ 
                        /* latin capital letter A ring, U+00C5 ISOlat1 */
{"Atilde", 195},  /* latin capital letter A with tilde, U+00C3 ISOlat1 */
{"Auml", 196},    /* latin capital letter A with diaeresis, U+00C4 ISOlat1 */
{"Beta", 914},    /* greek capital letter beta, U+0392 */
{"Ccedil", 199},  /* latin capital letter C with cedilla, U+00C7 ISOlat1 */
{"Chi", 935},     /* greek capital letter chi, U+03A7 */
{"Dagger", 8225}, /* double dagger, U+2021 ISOpub */
{"Delta", 916},   /* greek capital letter delta, U+0394 ISOgrk3 */
{"ETH", 208},	/* latin capital letter ETH, U+00D0 ISOlat1 */
{"Eacute", 201},  /* latin capital letter E with acute, U+00C9 ISOlat1 */
{"Ecirc", 202},   /* latin capital letter E with circumflex, U+00CA ISOlat1 */
{"Egrave", 200},  /* latin capital letter E with grave, U+00C8 ISOlat1 */
{"Epsilon", 917}, /* greek capital letter epsilon, U+0395 */
{"Eta", 919},     /* greek capital letter eta, U+0397 */
{"Euml", 203},    /* latin capital letter E with diaeresis, U+00CB ISOlat1 */
{"Gamma", 915},   /* greek capital letter gamma, U+0393 ISOgrk3 */
{"Iacute", 205},  /* latin capital letter I with acute, U+00CD ISOlat1 */
{"Icirc", 206},   /* latin capital letter I with circumflex, U+00CE ISOlat1 */
{"Igrave", 204},  /* latin capital letter I with grave, U+00CC ISOlat1 */
{"Iota", 921},    /* greek capital letter iota, U+0399 */
{"Iuml", 207},    /* latin capital letter I with diaeresis, U+00CF ISOlat1 */
{"Kappa", 922},   /* greek capital letter kappa, U+039A */
{"Lambda", 923},  /* greek capital letter lambda, U+039B ISOgrk3 */
{"Mu", 924},      /* greek capital letter mu, U+039C */
{"Ntilde", 209},  /* latin capital letter N with tilde, U+00D1 ISOlat1 */
{"Nu", 925},      /* greek capital letter nu, U+039D */
{"OElig", 338},   /* latin capital ligature OE, U+0152 ISOlat2 */
{"Oacute", 211},  /* latin capital letter O with acute, U+00D3 ISOlat1 */
{"Ocirc", 212},   /* latin capital letter O with circumflex, U+00D4 ISOlat1 */
{"Ograve", 210},  /* latin capital letter O with grave, U+00D2 ISOlat1 */
{"Omega", 937},   /* greek capital letter omega, U+03A9 ISOgrk3 */
{"Omicron", 927}, /* greek capital letter omicron, U+039F */
{"Oslash", 216},  /* latin capital letter O with stroke = */ 
                        /* latin capital letter O slash, U+00D8 ISOlat1 */
{"Otilde", 213},  /* latin capital letter O with tilde, U+00D5 ISOlat1 */
{"Ouml", 214},    /* latin capital letter O with diaeresis, U+00D6 ISOlat1 */
{"Phi", 934},     /* greek capital letter phi, U+03A6 ISOgrk3 */
{"Pi", 928},      /* greek capital letter pi, U+03A0 ISOgrk3 */
{"Prime", 8243},  /* double prime = seconds = inches, U+2033 ISOtech */
{"Psi", 936},     /* greek capital letter psi, U+03A8 ISOgrk3 */
{"Rho", 929},     /* greek capital letter rho, U+03A1 */
{"Scaron", 352},  /* latin capital letter S with caron, U+0160 ISOlat2 */
{"Sigma", 931},   /* greek capital letter sigma, U+03A3 ISOgrk3 */
{"THORN", 222},   /* latin capital letter THORN, U+00DE ISOlat1 */
{"Tau", 932},     /* greek capital letter tau, U+03A4 */
{"Theta", 920},   /* greek capital letter theta, U+0398 ISOgrk3 */
{"Uacute", 218},  /* latin capital letter U with acute, U+00DA ISOlat1 */
{"Ucirc", 219},   /* latin capital letter U with circumflex, U+00DB ISOlat1 */
{"Ugrave", 217},  /* latin capital letter U with grave, U+00D9 ISOlat1 */
{"Upsilon", 933}, /* greek capital letter upsilon, U+03A5 ISOgrk3 */
{"Uuml", 220},    /* latin capital letter U with diaeresis, U+00DC ISOlat1 */
{"Xi", 926},      /* greek capital letter xi, U+039E ISOgrk3 */
{"Yacute", 221},  /* latin capital letter Y with acute, U+00DD ISOlat1 */
{"Yuml", 376},    /* latin capital letter Y with diaeresis, U+0178 ISOlat2 */
{"Zeta", 918},    /* greek capital letter zeta, U+0396 */
{"aacute", 225},  /* latin small letter a with acute, U+00E1 ISOlat1 */
{"acirc", 226},   /* latin small letter a with circumflex, U+00E2 ISOlat1 */
{"acute", 180},   /* acute accent = spacing acute, U+00B4 ISOdia */
{"aelig", 230},   /* latin small letter ae = */
                        /* latin small ligature ae, U+00E6 ISOlat1 */
{"agrave", 224},  /* latin small letter a with grave = */
                        /* latin small letter a grave, U+00E0 ISOlat1 */
{"alefsym", 8501},/* alef symbol = first transfinite cardinal, U+2135 NEW */
{"alpha", 945},   /* greek small letter alpha, U+03B1 ISOgrk3 */
{"amp", 38},      /* ampersand, U+0026 ISOnum */
{"and", 8743},    /* logical and = wedge, U+2227 ISOtech */
{"ang", 8736},    /* angle, U+2220 ISOamso */
{"aring", 229},   /* latin small letter a with ring above = */
                        /* latin small letter a ring, U+00E5 ISOlat1 */
{"asymp", 8776},  /* almost equal to = asymptotic to, U+2248 ISOamsr */
{"atilde", 227},  /* latin small letter a with tilde, U+00E3 ISOlat1 */
{"auml", 228},    /* latin small letter a with diaeresis, U+00E4 ISOlat1 */
{"bdquo", 8222},	/* double low-9 quotation mark, U+201E NEW */
{"beta", 946},    /* greek small letter beta, U+03B2 ISOgrk3 */
{"brvbar", 166},  /* broken bar = broken vertical bar, U+00A6 ISOnum */
{"bull", 8226},   /* bullet = black small circle, U+2022 ISOpub */
{"cap", 8745},    /* intersection = cap, U+2229 ISOtech */
{"ccedil", 231},  /* latin small letter c with cedilla, U+00E7 ISOlat1 */
{"cedil", 184},   /* cedilla = spacing cedilla, U+00B8 ISOdia */
{"cent", 162},    /* cent sign, U+00A2 ISOnum */
{"chi", 967},     /* greek small letter chi, U+03C7 ISOgrk3 */
{"circ", 710},    /* modifier letter circumflex accent, U+02C6 ISOpub */
{"clubs", 9827},  /* black club suit = shamrock, U+2663 ISOpub */
{"cong", 8773},   /* approximately equal to, U+2245 ISOtech */
{"copy", 169},    /* copyright sign, U+00A9 ISOnum */
{"crarr", 8629},  /* downwards arrow with corner leftwards = */
                        /* carriage return, U+21B5 NEW */
{"cup", 8746},    /* union cup, U+222A ISOtech */
{"curren", 164},  /* currency sign, U+00A4 ISOnum */
{"dArr", 8659},   /* downwards double arrow, U+21D3 ISOamsa */
{"dagger", 8224}, /* dagger, U+2020 ISOpub */
{"darr", 8595},   /* downwards arrow, U+2193 ISOnum */
{"deg", 176},     /* degree sign, U+00B0 ISOnum */
{"delta", 948},   /* greek small letter delta, U+03B4 ISOgrk3 */
{"diams", 9830},  /* black diamond suit, U+2666 ISOpub */
{"divide", 247},  /* division sign, U+00F7 ISOnum */
{"eacute", 233},  /* latin small letter e with acute, U+00E9 ISOlat1 */
{"ecirc", 234},   /* latin small letter e with circumflex, U+00EA ISOlat1 */
{"egrave", 232},  /* latin small letter e with grave, U+00E8 ISOlat1 */
{"empty", 8709},  /* empty set = null set = diameter, U+2205 ISOamso */
{"emsp", 8195},   /* em space, U+2003 ISOpub */
{"ensp", 8194},   /* en space, U+2002 ISOpub */
{"epsilon", 949}, /* greek small letter epsilon, U+03B5 ISOgrk3 */
{"equiv", 8801},  /* identical to, U+2261 ISOtech */
{"eta", 951},     /* greek small letter eta, U+03B7 ISOgrk3 */
{"eth", 240},     /* latin small letter eth, U+00F0 ISOlat1 */
{"euml", 235},    /* latin small letter e with diaeresis, U+00EB ISOlat1 */
{"euro", 8364},   /* euro sign, U+20AC NEW */
{"exist", 8707},  /* there exists, U+2203 ISOtech */
{"fnof", 402},    /* latin small f with hook = function = */
                        /* florin, U+0192 ISOtech */
{"forall", 8704}, /* for all, U+2200 ISOtech */
{"frac12", 189},  /* vulgar fraction one half = */
                        /*fraction one half, U+00BD ISOnum */
{"frac14", 188},  /* vulgar fraction one quarter = */
                        /* fraction one quarter, U+00BC ISOnum */
{"frac34", 190},  /* vulgar fraction three quarters = */
                        /* fraction three quarters, U+00BE ISOnum */
{"frasl", 8260},  /* fraction slash, U+2044 NEW */
{"gamma", 947},   /* greek small letter gamma, U+03B3 ISOgrk3 */
{"ge", 8805},     /* greater-than or equal to, U+2265 ISOtech */
{"gt", 62},       /* greater-than sign, U+003E ISOnum */
{"hArr", 8660},   /* left right double arrow, U+21D4 ISOamsa */
{"harr", 8596},   /* left right arrow, U+2194 ISOamsa */
{"hearts", 9829}, /* black heart suit = valentine, U+2665 ISOpub */
{"hellip", 8230}, /* horizontal ellipsis = three dot leader, U+2026 ISOpub */
{"iacute", 237},  /* latin small letter i with acute, U+00ED ISOlat1 */
{"icirc", 238},   /* latin small letter i with circumflex, U+00EE ISOlat1 */
{"iexcl", 161},   /* inverted exclamation mark, U+00A1 ISOnum */
{"igrave", 236},  /* latin small letter i with grave, U+00EC ISOlat1 */
{"image", 8465},  /* blackletter capital I = imaginary part, U+2111 ISOamso */
{"infin", 8734},  /* infinity, U+221E ISOtech */
{"int", 8747},    /* integral, U+222B ISOtech */
{"iota", 953},    /* greek small letter iota, U+03B9 ISOgrk3 */
{"iquest", 191},  /* inverted question mark = */
                        /* turned question mark, U+00BF ISOnum */
{"isin", 8712},   /* element of, U+2208 ISOtech */
{"iuml", 239},    /* latin small letter i with diaeresis, U+00EF ISOlat1 */
{"kappa", 954},   /* greek small letter kappa, U+03BA ISOgrk3 */
{"lArr", 8656},   /* leftwards double arrow, U+21D0 ISOtech */
{"lambda", 955},  /* greek small letter lambda, U+03BB ISOgrk3 */
{"lang", 0x27E8}, /* mathematical left angle bracket, U+27E8 */
{"laquo", 171},   /* left-pointing double angle quotation mark = */
                        /* left pointing guillemet, U+00AB ISOnum */
{"larr", 8592},   /* leftwards arrow, U+2190 ISOnum */
{"lceil", 8968},  /* left ceiling = apl upstile, U+2308 ISOamsc */
{"ldquo", 8220},  /* left double quotation mark, U+201C ISOnum */
{"le", 8804},     /* less-than or equal to, U+2264 ISOtech */
{"lfloor", 8970}, /* left floor = apl downstile, U+230A ISOamsc */
{"lowast", 8727}, /* asterisk operator, U+2217 ISOtech */
{"loz", 9674},    /* lozenge, U+25CA ISOpub */
{"lrm", 8206},    /* left-to-right mark, U+200E NEW RFC 2070 */
{"lsaquo", 8249}, /* single left-pointing angle quotation mark, */
                        /* U+2039 ISO proposed */
{"lsquo", 8216},  /* left single quotation mark, U+2018 ISOnum */
{"lt", 60},       /* less-than sign, U+003C ISOnum */
{"macr", 175},    /* macron = spacing macron = overline = APL overbar, */
                        /* U+00AF ISOdia */
{"mdash", 8212},  /* em dash, U+2014 ISOpub */
{"micro", 181},   /* micro sign, U+00B5 ISOnum */
{"middot", 183},  /* middle dot = Georgian comma = */
                        /* Greek middle dot, U+00B7 ISOnum */
{"minus", 8722},  /* minus sign, U+2212 ISOtech */
{"mu", 956},      /* greek small letter mu, U+03BC ISOgrk3 */
{"nabla", 8711},  /* nabla = backward difference, U+2207 ISOtech */
{"nbsp", 160},    /* no-break space = non-breaking space, U+00A0 ISOnum */
{"ndash", 8211},  /* en dash, U+2013 ISOpub */
{"ne", 8800},     /* not equal to, U+2260 ISOtech */
{"ni", 8715},     /* contains as member, U+220B ISOtech */
{"not", 172},     /* not sign, U+00AC ISOnum */
{"notin", 8713},  /* not an element of, U+2209 ISOtech */
{"nsub", 8836},   /* not a subset of, U+2284 ISOamsn */
{"ntilde", 241},  /* latin small letter n with tilde, U+00F1 ISOlat1 */
{"nu", 957},      /* greek small letter nu, U+03BD ISOgrk3 */
{"oacute", 243},  /* latin small letter o with acute, U+00F3 ISOlat1 */
{"ocirc", 244},   /* latin small letter o with circumflex, U+00F4 ISOlat1 */
{"oelig", 339},   /* latin small ligature oe, U+0153 ISOlat2 */
{"ograve", 242},  /* latin small letter o with grave, U+00F2 ISOlat1 */
{"oline", 8254},  /* overline = spacing overscore, U+203E NEW */
{"omega", 969},   /* greek small letter omega, U+03C9 ISOgrk3 */
{"omicron", 959}, /* greek small letter omicron, U+03BF NEW */
{"oplus", 8853},  /* circled plus = direct sum, U+2295 ISOamsb */
{"or", 8744},     /* logical or = vee, U+2228 ISOtech */
{"ordf", 170},    /* feminine ordinal indicator, U+00AA ISOnum */
{"ordm", 186},    /* masculine ordinal indicator, U+00BA ISOnum */
{"oslash", 248},  /* latin small letter o with stroke, = */
                        /* latin small letter o slash, U+00F8 ISOlat1 */
{"otilde", 245},  /* latin small letter o with tilde, U+00F5 ISOlat1 */
{"otimes", 8855}, /* circled times = vector product, U+2297 ISOamsb */
{"ouml", 246},    /* latin small letter o with diaeresis, U+00F6 ISOlat1 */
{"para", 182},    /* pilcrow sign = paragraph sign, U+00B6 ISOnum */
{"part", 8706},   /* partial differential, U+2202 ISOtech */
{"permil", 8240}, /* per mille sign, U+2030 ISOtech */
{"perp", 8869},   /* up tack = orthogonal to = perpendicular, U+22A5 ISOtech */
{"phi", 966},     /* greek small letter phi, U+03C6 ISOgrk3 */
{"phiv", 981},    /* greek U+03D5 ISOgrk3 */
{"pi", 960},      /* greek small letter pi, U+03C0 ISOgrk3 */
{"piv", 982},     /* greek pi symbol, U+03D6 ISOgrk3 */
{"plusmn", 177},  /* plus-minus sign = plus-or-minus sign, U+00B1 ISOnum */
{"pound", 163},   /* pound sign, U+00A3 ISOnum */
{"prime", 8242},  /* prime = minutes = feet, U+2032 ISOtech */
{"prod", 8719},   /* n-ary product = product sign, U+220F ISOamsb */
{"prop", 8733},   /* proportional to, U+221D ISOtech */
{"psi", 968},     /* greek small letter psi, U+03C8 ISOgrk3 */
{"quot", 34},     /* quotation mark = APL quote, U+0022 ISOnum */
{"rArr", 8658},   /* rightwards double arrow, U+21D2 ISOtech */
{"radic", 8730},  /* square root = radical sign, U+221A ISOtech */
{"rang", 0x27E9}, /* mathematical right angle bracket, U+27E9 */
{"raquo", 187},   /* right-pointing double angle quotation mark = */
                        /* right pointing guillemet, U+00BB ISOnum */
{"rarr", 8594},   /* rightwards arrow, U+2192 ISOnum */
{"rceil", 8969},  /* right ceiling, U+2309 ISOamsc */
{"rdquo", 8221},  /* right double quotation mark, U+201D ISOnum */
{"real", 8476},   /* blackletter capital R = real part symbol, U+211C ISOamso */
{"reg", 174},     /* registered sign = registered trade mark sign, */
                        /* U+00AE ISOnum */
{"rfloor", 8971}, /* right floor, U+230B ISOamsc */
{"rho", 961},     /* greek small letter rho, U+03C1 ISOgrk3 */
{"rlm", 8207},    /* right-to-left mark, U+200F NEW RFC 2070 */
{"rsaquo", 8250}, /* single right-pointing angle quotation mark, */
                        /* U+203A ISO proposed */
{"rsquo", 8217},  /* right single quotation mark, U+2019 ISOnum */
{"sbquo", 8218},  /* single low-9 quotation mark, U+201A NEW */
{"scaron", 353},  /* latin small letter s with caron, U+0161 ISOlat2 */
{"sdot", 8901},   /* dot operator, U+22C5 ISOamsb */
{"sect", 167},    /* section sign, U+00A7 ISOnum */
{"shy", 173},     /* soft hyphen = discretionary hyphen, U+00AD ISOnum */
{"sigma", 963},   /* greek small letter sigma, U+03C3 ISOgrk3 */
{"sigmaf", 962},  /* greek small letter final sigma, U+03C2 ISOgrk3 */
{"sim", 8764},    /* tilde operator = varies with = similar to, U+223C ISOtech */
{"spades", 9824}, /* black spade suit, U+2660 ISOpub */
{"sub", 8834},    /* subset of, U+2282 ISOtech */
{"sube", 8838},   /* subset of or equal to, U+2286 ISOtech */
{"sum", 8721},    /* n-ary sumation, U+2211 ISOamsb */
{"sup", 8835},    /* superset of, U+2283 ISOtech */
{"sup1", 185},    /* superscript one = superscript digit one, U+00B9 ISOnum */
{"sup2", 178},    /* superscript two = superscript digit two = squared, */
                        /* U+00B2 ISOnum */
{"sup3", 179},    /* superscript three = superscript digit three = cubed, */
                        /* U+00B3 ISOnum */
{"supe", 8839},   /* superset of or equal to, U+2287 ISOtech */
{"szlig", 223},   /* latin small letter sharp s = ess-zed, U+00DF ISOlat1 */
{"tau", 964},     /* greek small letter tau, U+03C4 ISOgrk3 */
{"there4", 8756}, /* therefore, U+2234 ISOtech */
{"theta", 952},   /* greek small letter theta, U+03B8 ISOgrk3 */
{"thetasym", 977},/* greek small letter theta symbol, U+03D1 NEW */
{"thinsp", 8201}, /* thin space, U+2009 ISOpub */
{"thorn", 254},   /* latin small letter thorn with, U+00FE ISOlat1 */
{"tilde", 732},   /* small tilde, U+02DC ISOdia */
{"times", 215},   /* multiplication sign, U+00D7 ISOnum */
{"trade", 8482},  /* trade mark sign, U+2122 ISOnum */
{"uArr", 8657},   /* upwards double arrow, U+21D1 ISOamsa */
{"uacute", 250},  /* latin small letter u with acute, U+00FA ISOlat1 */
{"uarr", 8593},   /* upwards arrow, U+2191 ISOnum*/
{"ucirc", 251},   /* latin small letter u with circumflex, U+00FB ISOlat1 */
{"ugrave", 249}, /* latin small letter u with grave, U+00F9 ISOlat1 */
{"uml", 168},     /* diaeresis = spacing diaeresis, U+00A8 ISOdia */
{"upsih", 978},   /* greek upsilon with hook symbol, U+03D2 NEW */
{"upsilon", 965}, /* greek small letter upsilon, U+03C5 ISOgrk3 */
{"uuml", 252},    /* latin small letter u with diaeresis, U+00FC ISOlat1 */
{"weierp", 8472}, /* script capital P = power set = Weierstrass p, */
                        /* U+2118 ISOamso */
{"xi", 958},      /* greek small letter xi, U+03BE ISOgrk3 */
{"yacute", 253},  /* latin small letter y with acute, U+00FD ISOlat1 */
{"yen", 165},     /* yen sign = yuan sign, U+00A5 ISOnum */
{"yuml", 255},    /* latin small letter y with diaeresis, U+00FF ISOlat1 */
{"zeta", 950},    /* greek small letter zeta, U+03B6 ISOgrk3 */
{"zwj", 8205},    /* zero width joiner, U+200D NEW RFC 2070 */
{"zwnj", 8204},   /* zero width non-joiner, U+200C NEW RFC 2070 */
{"zzzz", 0}	/* this last entry is required */
};
