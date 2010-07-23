#pragma once

#include "LunaGenerated.h"

#include "Scene/SceneManager.h"
#include "Scene/TreeMonitor.h"
#include "Scene/EntityAssetOutliner.h"
#include "Scene/HierarchyOutliner.h"
#include "Scene/NodeTypeOutliner.h"

namespace Luna
{

    class DirectoryPanel : public DirectoryPanelGenerated
    {
    public:
   	    DirectoryPanel( SceneManager* manager, TreeMonitor* treeMonitor, wxWindow* parent = NULL, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
        virtual ~DirectoryPanel();

    private:
        SceneManager*        m_SceneManager;
        TreeMonitor*         m_TreeMonitor;
        EntityAssetOutliner* m_EntityOutline;
        HierarchyOutliner*   m_HierarchyOutline;
        NodeTypeOutliner*    m_TypeOutline;
    };
}