//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_comments_base.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef EDITOR_OPTIONS_COMMENTS_BASE_BASE_CLASSES_H
#define EDITOR_OPTIONS_COMMENTS_BASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/statline.h>

class EditorSettingsCommentsBase : public wxPanel
{
protected:
    wxCheckBox* m_checkBoxSmartAddFiles;
    wxStaticText* m_staticText3;
    wxStaticLine* m_staticline1;
    wxCheckBox* m_checkBoxContCComment;
    wxCheckBox* m_checkBoxContinueCppComment;
    wxStaticText* m_staticText7;
    wxStaticLine* m_staticline2;
    wxStaticText* m_staticText1;
    wxStaticText* m_staticText2;
    wxCheckBox* m_checkBoxCtrl;
    wxCheckBox* m_checkBoxAlt;

protected:

public:
    wxCheckBox* GetCheckBoxSmartAddFiles() { return m_checkBoxSmartAddFiles; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxStaticLine* GetStaticline1() { return m_staticline1; }
    wxCheckBox* GetCheckBoxContCComment() { return m_checkBoxContCComment; }
    wxCheckBox* GetCheckBoxContinueCppComment() { return m_checkBoxContinueCppComment; }
    wxStaticText* GetStaticText7() { return m_staticText7; }
    wxStaticLine* GetStaticline2() { return m_staticline2; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxCheckBox* GetCheckBoxCtrl() { return m_checkBoxCtrl; }
    wxCheckBox* GetCheckBoxAlt() { return m_checkBoxAlt; }
    EditorSettingsCommentsBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~EditorSettingsCommentsBase();
};

#endif
