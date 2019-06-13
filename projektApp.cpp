/***************************************************************
 * Name:      projektApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-01-16
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "projektApp.h"

//(*AppHeaders
#include "projektMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(projektApp);

bool projektApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	projektFrame* Frame = new projektFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
