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
#include "DialogDbSelectAnyGraphic.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogDbSelectAnyGraphic::DialogDbSelectAnyGraphic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: DialogDbSelectAnyGraphic::DialogDbSelectAnyGraphic
    const wxString listGraphic_choices[] = {
        _("<set by wxGlade>"),
    };
    listGraphic = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, listGraphic_choices, wxLB_SINGLE);
    bmpGraphic = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBORDER_SUNKEN);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogDbSelectAnyGraphic::set_properties()
{
    // begin wxGlade: DialogDbSelectAnyGraphic::set_properties
    SetTitle(_("Graphic of Type..."));
    listGraphic->SetSelection(0);
    bmpGraphic->SetMinSize(wxSize(480, 480));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogDbSelectAnyGraphic::do_layout()
{
    // begin wxGlade: DialogDbSelectAnyGraphic::do_layout
    wxBoxSizer* szSelectAnyGraphic = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    szTop->Add(listGraphic, 1, wxALL|wxEXPAND, 1);
    szTop->Add(bmpGraphic, 0, wxALL, 1);
    szSelectAnyGraphic->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szSelectAnyGraphic->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szSelectAnyGraphic);
    szSelectAnyGraphic->Fit(this);
    Layout();
    // end wxGlade
}

