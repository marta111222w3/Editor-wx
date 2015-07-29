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
#include "DialogEvtCmdPanorama.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdPanorama::DialogEvtCmdPanorama(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdPanorama::DialogEvtCmdPanorama
    szOptions_staticbox = new wxStaticBox(this, wxID_ANY, _("Options"));
    szBackground_staticbox = new wxStaticBox(this, wxID_ANY, _("Background"));
    bmpBackground = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBORDER_SUNKEN);
    btnBackground = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnHScroll = new wxCheckBox(this, wxID_ANY, _("Horizontal scroll"));
    chbHScrollAuto = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stHScrollSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinHScrollSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    lineOptions = new wxStaticLine(this, wxID_ANY);
    btnVScroll = new wxCheckBox(this, wxID_ANY, _("Vertical scroll"));
    chbVScrollAuto = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stVcrollSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinVScrollSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdPanorama::set_properties()
{
    // begin wxGlade: DialogEvtCmdPanorama::set_properties
    SetTitle(_("Change map background"));
    bmpBackground->SetMinSize(wxSize(160, 120));
    spinHScrollSpeed->SetMinSize(wxSize(50, -1));
    spinVScrollSpeed->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdPanorama::do_layout()
{
    // begin wxGlade: DialogEvtCmdPanorama::do_layout
    wxBoxSizer* szPanorama = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    szOptions_staticbox->Lower();
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxVERTICAL);
    wxBoxSizer* szVScrollSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVScroll = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szHScrollSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szHScroll = new wxBoxSizer(wxHORIZONTAL);
    szBackground_staticbox->Lower();
    wxStaticBoxSizer* szBackground = new wxStaticBoxSizer(szBackground_staticbox, wxVERTICAL);
    szBackground->Add(bmpBackground, 0, wxBOTTOM, 1);
    szBackground->Add(btnBackground, 0, wxALIGN_RIGHT|wxTOP, 1);
    szTop->Add(szBackground, 0, wxEXPAND|wxRIGHT, 1);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(btnHScroll, 0, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxEXPAND, 1);
    szHScroll->Add(15, 15, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szHScroll->Add(chbHScrollAuto, 1, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxTOP, 1);
    szOptions->Add(szHScroll, 0, wxEXPAND, 0);
    szHScrollSpeed->Add(stHScrollSpeed, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxTOP, 1);
    szHScrollSpeed->Add(spinHScrollSpeed, 1, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxLEFT|wxTOP, 1);
    szOptions->Add(szHScrollSpeed, 0, wxEXPAND, 0);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(lineOptions, 0, wxBOTTOM|wxEXPAND|wxTOP, 1);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(btnVScroll, 0, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxEXPAND|wxTOP, 1);
    szVScroll->Add(15, 15, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szVScroll->Add(chbVScrollAuto, 1, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxTOP, 1);
    szOptions->Add(szVScroll, 0, wxEXPAND, 0);
    szVScrollSpeed->Add(stVcrollSpeed, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxTOP, 1);
    szVScrollSpeed->Add(spinVScrollSpeed, 1, wxLEFT|wxTOP, 1);
    szOptions->Add(szVScrollSpeed, 0, wxEXPAND, 0);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szTop->Add(szOptions, 1, wxEXPAND|wxLEFT, 1);
    szPanorama->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szPanorama->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szPanorama);
    szPanorama->Fit(this);
    Layout();
    // end wxGlade
}

