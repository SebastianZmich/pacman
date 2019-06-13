/***************************************************************
 * Name:      projektMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-01-16
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef PROJEKTMAIN_H
#define PROJEKTMAIN_H

//(*Headers(projektFrame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/radiobut.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class projektFrame: public wxFrame
{
    public:

        projektFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~projektFrame();

    private:

        //(*Handlers(projektFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnRadioButton3Select(wxCommandEvent& event);
        void OnRadioButton2Select(wxCommandEvent& event);
        void OnRadioButton1Select(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(projektFrame)
        static const long ID_BUTTON1;
        static const long ID_RADIOBUTTON1;
        static const long ID_RADIOBUTTON2;
        static const long ID_RADIOBUTTON3;
        static const long ID_STATICTEXT1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(projektFrame)
        wxRadioButton* RadioButton1;
        wxRadioButton* RadioButton2;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxRadioButton* RadioButton3;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJEKTMAIN_H
