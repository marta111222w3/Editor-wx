// -*- C++ -*-
//
// generated by wxGlade not found
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef DIALOGEVTCMDPICTURE_H
#define DIALOGEVTCMDPICTURE_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "appEditor"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/spinctrl.h>
#include <wx/statline.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class DialogEvtCmdPicture: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdPicture::ids
    // end wxGlade

    DialogEvtCmdPicture(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdPicture::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdPicture::attributes
    wxStaticBox* szAttributes_staticbox;
    wxStaticBox* szTrasparency_staticbox;
    wxStaticBox* szIntensity_staticbox;
    wxStaticBox* szPosition_staticbox;
    wxStaticBox* szPicture2_staticbox;
    wxStaticBox* szNumber_staticbox;
    wxSpinCtrl* spinNumber;
    wxTextCtrl* tcPicture;
    wxButton* btnPicture;
    wxRadioButton* rbtnSpecify;
    wxStaticText* stSpecifyX;
    wxSpinCtrl* spinSpecifyX;
    wxStaticText* stSpecifyY;
    wxSpinCtrl* spinSpecifyY;
    wxRadioButton* rbtnVariable;
    wxStaticText* stVariableX;
    wxTextCtrl* tcVariableX;
    wxButton* btnVariableX;
    wxStaticText* stVariableY;
    wxTextCtrl* tcVariableY;
    wxButton* btnVariableY;
    wxStaticLine* linePicture;
    wxCheckBox* chbScrollMapFix;
    wxSpinCtrl* spinIntensity;
    wxStaticText* stIntensity;
    wxSpinCtrl* spinTrasparency;
    wxStaticText* stTrasparency;
    wxRadioBox* rbTrasparentColor;
    wxTextCtrl* tcAttributes;
    wxButton* btnAttributes;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDPICTURE_H