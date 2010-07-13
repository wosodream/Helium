#pragma once

#include "Platform/Compiler.h"

#include <wx/animate.h>

namespace Luna
{
  class VaultStatusBar : public wxStatusBar
  {
  public:
    enum Fields
    {
      FieldMain,
      FieldAssetTracker,

      FieldCount
    };

  public:
    VaultStatusBar( wxWindow *parent );
    virtual ~VaultStatusBar();

    virtual void SetStatusText( const wxString& strText, int nField = 0 ) NOC_OVERRIDE;

  protected:
    void OnSize( wxSizeEvent& args ); 
    void OnTimer( wxTimerEvent& args );

  private:
    static bool TrimString( wxString& strText, wxStaticText* textField, int maxWidth, bool prefix = true );

  private:
    bool m_InitialIndexingCompleted;
    bool m_IndexingFailed;
    
    wxString          m_CurrentStatus;
    wxStaticText*     m_StatusText;

    wxAnimationCtrl*  m_Throbber;
    wxStaticText*     m_Message;
    wxTimer           m_ProgressTimer;
    tstring       m_PercentComplete;

    DECLARE_EVENT_TABLE()
  };
}