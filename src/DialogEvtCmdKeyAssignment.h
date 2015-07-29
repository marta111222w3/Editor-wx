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

#ifndef DIALOGEVTCMDKEYASSIGNMENT_H
#define DIALOGEVTCMDKEYASSIGNMENT_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "appEditor"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class DialogEvtCmdKeyAssignment: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdKeyAssignment::ids
    // end wxGlade

    DialogEvtCmdKeyAssignment(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdKeyAssignment::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdKeyAssignment::attributes
    wxStaticBox* szKeys_staticbox;
    wxStaticBox* szOptions_staticbox;
    wxStaticBox* szVariable_staticbox;
    wxTextCtrl* tcVariable;
    wxButton* btnVariable;
    wxCheckBox* chbWait;
    wxCheckBox* chbDown;
    wxCheckBox* chbDecision;
    wxCheckBox* chbLeft;
    wxCheckBox* chbCancel;
    wxCheckBox* chbRight;
    wxCheckBox* chbShift;
    wxCheckBox* chbUp;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDKEYASSIGNMENT_H
