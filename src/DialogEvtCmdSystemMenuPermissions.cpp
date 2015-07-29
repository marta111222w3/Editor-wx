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

#include <wx/wx.h>
#include "DialogEvtCmdSystemMenuPermissions.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdSystemMenuPermissions::DialogEvtCmdSystemMenuPermissions(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::DialogEvtCmdSystemMenuPermissions
    const wxString rbOperation_choices[] = {
        _("Forbid menu"),
        _("Alllow menu"),
    };
    rbOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbOperation_choices, 1, wxRA_SPECIFY_ROWS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdSystemMenuPermissions::set_properties()
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::set_properties
    SetTitle(_("System menu permissions"));
    rbOperation->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdSystemMenuPermissions::do_layout()
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::do_layout
    wxBoxSizer* szSystemMenuPermissions = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szSystemMenuPermissions->Add(rbOperation, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szBottom->Add(btnOK, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALIGN_BOTTOM|wxALL, 1);
    szSystemMenuPermissions->Add(szBottom, 1, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szSystemMenuPermissions);
    szSystemMenuPermissions->Fit(this);
    Layout();
    // end wxGlade
}

