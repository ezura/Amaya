/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

//extern const char *GetSchemaFromDocType ( DocumentType docType );
extern ThotBool IsUseInstantiated ( Element el,
                                    Document doc );
extern void SetAttributeStringValue ( Element el,
                                      int att,
                                      const char* value );
extern void SetAttributeStringValueWithUndo ( Element el,
                                              int att,
                                              char* value );
extern int GetMinOccurence ( Element el,
                             Document doc );
extern void GiveAttributeStringValueFromNum ( Element el,
                                              int att,
                                              char* buff,
                                              int* sz );
extern char *GetAttributeStringValueFromNum ( Element el,
                                              int att,
                                              int* sz );
extern int GetAttributeIntValueFromNum ( Element el,
                                         int att );
extern void SetAttributeIntValue ( Element el,
                                   int att,
                                   int value,
                                   ThotBool undo );
extern char *GetAttributeStringValue ( Element el,
                                       Attribute attribute,
                                       int* sz );
extern char *GetAncestorComponentName ( Element *el );
extern ThotBool AllowAttributeEdit ( Element el,
                                     Document doc,
                                     char *name );
extern Element GetFirstEditableElement ( Element el );
extern ThotBool TemplateCanInsertFirstChild ( ElementType elementType,
                                              Element parent,
                                              Document document );
extern ThotBool CheckTemplateAttrInMenu ( NotifyAttribute *event );
extern void DumpElementSubPath ( Element el,
                                 char* buffer );
extern void DumpElementPath ( Element el );
extern void DumpTemplateElement ( Element el,
                                  Document doc );
extern void DumpSubtree ( Element el,
                          Document doc,
                          int off );
extern char *SaveDocumentToNewDoc ( Document doc,
                                    Document newdoc,
                                    char* newpath );
extern Element TemplateGetParentHead ( Element el,
                                       Document doc );
extern Element TemplateFindHead ( Document doc );

#else /* __STDC__ */

//extern const char *GetSchemaFromDocType ( Document doc );
extern ThotBool IsUseInstantiated ( Element el,
                                      Document doc );
extern void SetAttributeStringValue ( Element el,
                                        int att,
                                        const char* value );
extern void SetAttributeStringValueWithUndo ( Element el,
                                                int att,
                                                char* value );
extern int GetMinOccurence ( Element el,
                               Document doc );
extern void GiveAttributeStringValueFromNum ( Element el,
                                                int att,
                                                char* buff,
                                                int* sz );
extern char *GetAttributeStringValueFromNum ( Element el,
                                                int att,
                                                int* sz );
extern int GetAttributeIntValueFromNum ( Element el,
                                           int att );
extern void SetAttributeIntValue ( Element el,
                                     int att,
                                     int value,
                                     ThotBool undo );
extern char *GetAttributeStringValue ( Element el,
                                         Attribute attribute,
                                         int* sz );
extern char *GetAncestorComponentName ( Element *el );
extern ThotBool AllowAttributeEdit ( Element el,
                                       Document doc,
                                       char *name );
extern Element GetFirstEditableElement ( Element el );
extern ThotBool TemplateCanInsertFirstChild ( ElementType elementType,
                                                Element parent,
                                                Document document );
extern ThotBool CheckTemplateAttrInMenu ( NotifyAttribute *event );
extern void DumpElementSubPath ( Element el,
                                   char* buffer );
extern void DumpElementPath ( Element el );
extern void DumpTemplateElement ( Element el,
                                    Document doc );
extern void DumpSubtree ( Element el,
                            Document doc,
                            int off );
extern char *SaveDocumentToNewDoc ( Document doc,
                                      Document newdoc,
                                      char* newpath );
extern Element TemplateGetParentHead ( Element el,
                                         Document doc );
extern Element TemplateFindHead ( Document doc );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
