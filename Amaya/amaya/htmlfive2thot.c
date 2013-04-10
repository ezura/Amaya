#define THOT_EXPORT extern
#include "amaya.h"

typedef struct _ElemToBeChecked *PtrElemToBeChecked;
typedef struct _ElemToBeChecked
{
  Element               Elem;	/* the element to be checked */
  PtrElemToBeChecked    nextElemToBeChecked;
}
ElemToBeChecked;

/* empty elements */
static int          EmptyElement[] =
  {
    HTML_EL_AREA,
    HTML_EL_BASE,
    HTML_EL_BaseFont,
    HTML_EL_BR,
    HTML_EL_COL,
    HTML_EL_FRAME,
    HTML_EL_Horizontal_Rule,
    HTML_EL_IMG,
    HTML_EL_Input,
    HTML_EL_ISINDEX,
    HTML_EL_LINK,
    HTML_EL_META,
    HTML_EL_Parameter,
    HTML_EL_PICTURE_UNIT,
    0};

/* elements whoes content model is transparent */
static int          TransparentElement[] =
{
	/* TODO: ここに transparent を持つ要素を追加 
	 * 特定の条件下で transparent を持つようになる要素は入れないで
	 * IsTransparentContentModel() の中で個々に調べるようにする
	 */
	0
};
    
/* character level elements */
static int          CharLevelElement[] =
  {
    HTML_EL_TEXT_UNIT, HTML_EL_PICTURE_UNIT, HTML_EL_SYMBOL_UNIT,
    HTML_EL_Anchor,
    HTML_EL_Teletype_text, HTML_EL_Italic_text, HTML_EL_Bold_text,
    HTML_EL_Underlined_text, HTML_EL_Struck_text, HTML_EL_Big_text,
    HTML_EL_Small_text,
    HTML_EL_Emphasis, HTML_EL_Strong, HTML_EL_Def, HTML_EL_Code, HTML_EL_Sample,
    HTML_EL_Keyboard, HTML_EL_Variable_, HTML_EL_Cite, HTML_EL_ABBR,
    HTML_EL_ACRONYM,
    HTML_EL_Font_, HTML_EL_Quotation, HTML_EL_Subscript, HTML_EL_Superscript,
    HTML_EL_Span, HTML_EL_BDO, HTML_EL_ins, HTML_EL_del,
    HTML_EL_IMG, HTML_EL_Input,
    HTML_EL_Option, HTML_EL_OptGroup, HTML_EL_Option_Menu,
    HTML_EL_Text_Input, HTML_EL_Password_Input, HTML_EL_File_Input,
    HTML_EL_Checkbox_Input, HTML_EL_Radio_Input, HTML_EL_Submit_Input,
    HTML_EL_Reset_Input, HTML_EL_Hidden_Input, HTML_EL_Inserted_Text,
    HTML_EL_Button_Input, HTML_EL_BUTTON_,
    HTML_EL_LABEL,
    HTML_EL_BR, HTML_EL_ruby,
    HTML_EL_Object, HTML_EL_Basic_Elem,
    0};
    
/* block level elements, i.e. elements having a Line rule in the presentation
   schema fo the main view */
static int          BlockLevelElement[] =
  {
    HTML_EL_H1, HTML_EL_H2, HTML_EL_H3, HTML_EL_H4, HTML_EL_H5, HTML_EL_H6,
    HTML_EL_Paragraph, HTML_EL_Pseudo_paragraph, HTML_EL_Text_Area,
    HTML_EL_Term, HTML_EL_Address, HTML_EL_LEGEND, HTML_EL_CAPTION,
    HTML_EL_INS, HTML_EL_DEL, HTML_EL_Division,
    0};
    
/*----------------------------------------------------------------------
  IsEmptyElement return TRUE if element el is defined as an empty element.
  ----------------------------------------------------------------------*/
ThotBool IsEmptyElement5 (ElementType elType)
{
  int                 i;
  ThotBool            ret;

  ret = FALSE;
  i = 0;
  while (EmptyElement[i] > 0 && EmptyElement[i] != elType.ElTypeNum)
    i++;
  if (EmptyElement[i] == elType.ElTypeNum)
    ret = TRUE;
  return ret;
}

/*----------------------------------------------------------------------
  IsCharacterLevelType return TRUE if element type is a
  character level element, FALSE if not.
  ----------------------------------------------------------------------*/
ThotBool IsCharacterLevelType5 (ElementType elType)
{
  int              i;
  ThotBool         ret;

  ret = FALSE;
  i = 0;
  while (CharLevelElement[i] > 0 &&
         CharLevelElement[i] != elType.ElTypeNum)
    i++;
  if (CharLevelElement[i] == elType.ElTypeNum)
    ret = TRUE;
  return ret;
}

/*----------------------------------------------------------------------
  IsBlockElementType  return TRUE if element type is a block element.
  Same as IsBlockElement but just with the element type.
  ----------------------------------------------------------------------*/
ThotBool IsBlockElementType5 (ElementType elType)
{
  int           i;
  ThotBool      ret;

  ret = FALSE;
  i = 0;
  while (BlockLevelElement[i] > 0 &&
         BlockLevelElement[i] != elType.ElTypeNum)
    i++;
  if (BlockLevelElement[i] == elType.ElTypeNum)
    ret = TRUE;
  return ret;
}

/*----------------------------------------------------------------------
  IsTransparentContentModel 
  return TRUE if element's content model is a transparent content model.
  FALSE if not.
  ----------------------------------------------------------------------*/
ThotBool IsTransparentContentModel (ElementType elType)
{
	int i;
	ThotBool ret;

	ret = FALSE;

	/* TODO: 特定の条件下で transparent を持つ要素についてチェック */
	

	/* check the others */
	i = 0;
	while (BlockLevelElement[i] > 0 &&
         BlockLevelElement[i] != elType.ElTypeNum)
    i++;
    if (BlockLevelElement[i] == elType.ElTypeNum)
      ret = TRUE;
    return ret;
}

/*----------------------------------------------------------------------
  CanInsertInTransparentModel 
  return TRUE if element can be inserted in element whoes content model is transparent.
  FALSE if not.
  ----------------------------------------------------------------------*/
ThotBool CanInsertInTransparentModel (ElementType elType)
{
	ElementType curElType;
	if (!IsTransparentContentModel (elType))
		return TRUE;
	//curElType = TtaGetParent
}