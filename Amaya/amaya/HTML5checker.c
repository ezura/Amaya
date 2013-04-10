#include "thot_sys.h"
#include "tree.h"
#include "document.h"
#include "profiles.h"

/*----------------------------------------------------------------------
  IsHTML5
  check whether the schema of the document is HTML5.
  ----------------------------------------------------------------------*/
ThotBool IsNotHTMLorHTML5(char *sschemaName)
{
  return strcmp (sschemaName, "HTML") && strcmp (sschemaName, "HTML5");
}

/*----------------------------------------------------------------------
  GetSSchemaHTMLorHTML5 (Document doc)
  return  HTML structure schema if the structure schema's is "HTML"
  return  HTML5 structure schema if the structure schema's is "HTML5"
  other, return NULL
  ----------------------------------------------------------------------*/
SSchema GetSSchemaHTMLorHTML5 (Document doc)
{
	SSchema             sschema;
	char				*sschemaName;
	int					docProfile = TtaGetDocumentProfile(doc);
	sschemaName = TtaGetSSchemaName(TtaGetDocumentSSchema(doc));
	if (!strcmp(sschemaName, "HTML5") || (docProfile == L_HTML5 || docProfile == L_HTML5_LEGACY))
	   sschema = TtaGetSSchema ("HTML5", doc);
	else
		sschema = TtaGetSSchema ("HTML", doc);
	return sschema;
}