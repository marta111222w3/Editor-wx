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
#include "DialogEvtCmdEncounterRate.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdEncounterRate::DialogEvtCmdEncounterRate(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdEncounterRate::DialogEvtCmdEncounterRate
    szSteps_staticbox = new wxStaticBox(this, wxID_ANY, _("Number of steps"));
    spinSteps = new wxSpinCtrl(this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdEncounterRate::set_properties()
{
    // begin wxGlade: DialogEvtCmdEncounterRate::set_properties
    SetTitle(_("Change encounter rate"));
    spinSteps->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdEncounterRate::do_layout()
{
    // begin wxGlade: DialogEvtCmdEncounterRate::do_layout
    wxBoxSizer* szEncounterRate = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szSteps_staticbox->Lower();
    wxStaticBoxSizer* szSteps = new wxStaticBoxSizer(szSteps_staticbox, wxHORIZONTAL);
    szSteps->Add(spinSteps, 1, wxALIGN_CENTER_VERTICAL, 1);
    szEncounterRate->Add(szSteps, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szEncounterRate->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szEncounterRate);
    szEncounterRate->Fit(this);
    Layout();
    // end wxGlade
}
