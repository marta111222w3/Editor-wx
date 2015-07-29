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
#include "DialogEvtCmdSystemGraphic.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdSystemGraphic::DialogEvtCmdSystemGraphic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdSystemGraphic::DialogEvtCmdSystemGraphic
    const wxString listSystem_choices[] = {
        _("<set by wxGlade>"),
    };
    listSystem = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, listSystem_choices, wxLB_SINGLE);
    bmpSystem = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBORDER_SUNKEN);
    const wxString rbBackground_choices[] = {
        _("Expanded"),
        _("Tiled"),
    };
    rbBackground = new wxRadioBox(this, wxID_ANY, _("Background"), wxDefaultPosition, wxDefaultSize, 2, rbBackground_choices, 1, wxRA_SPECIFY_COLS);
    const wxString rbFont_choices[] = {
        _("Gothic"),
        _("Modern"),
    };
    rbFont = new wxRadioBox(this, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 2, rbFont_choices, 1, wxRA_SPECIFY_COLS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdSystemGraphic::set_properties()
{
    // begin wxGlade: DialogEvtCmdSystemGraphic::set_properties
    SetTitle(_("Change system graphic"));
    listSystem->SetSelection(0);
    bmpSystem->SetMinSize(wxSize(160, 80));
    rbBackground->SetSelection(0);
    rbFont->SetSelection(0);
    btnOK->SetDefault();
    btnHelp->SetDefault();
    // end wxGlade
}


void DialogEvtCmdSystemGraphic::do_layout()
{
    // begin wxGlade: DialogEvtCmdSystemGraphic::do_layout
    wxBoxSizer* szSystemGraphic = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szRight = new wxBoxSizer(wxVERTICAL);
    szTop->Add(listSystem, 1, wxALL|wxEXPAND, 1);
    szRight->Add(bmpSystem, 0, wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT|wxTOP, 1);
    szRight->Add(rbBackground, 0, wxEXPAND|wxLEFT|wxRIGHT, 1);
    szRight->Add(rbFont, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szTop->Add(szRight, 0, wxEXPAND, 0);
    szSystemGraphic->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szSystemGraphic->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szSystemGraphic);
    szSystemGraphic->Fit(this);
    Layout();
    // end wxGlade
}
