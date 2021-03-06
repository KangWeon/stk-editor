#ifndef TOOLBAR_HPP
#define TOOLBAR_HPP

#include <irrlicht.h>

using namespace irr;
using namespace video;
using namespace gui;

#include <string>

class ToolBar
{
public:

    // toolbar button id-s:
    enum ToolboxButtonIndex
    {
        TBI_NEW,
        TBI_OPEN,
        TBI_SAVE,
        TBI_EXPORT,
        TBI_REDO,
        TBI_UNDO,
        TBI_CAM,
        TBI_RECAM,
        TBI_SELECT,
        TBI_MOVE,
        TBI_ROTATE,
        TBI_SCALE,
        TBI_DELETE,
        TBI_DRIVELINE,
        TBI_HIDE_TERRAIN,
        TBI_TRY,
        TBI_MUSIC,
        TBI_EXIT
    };

private:
    // private variables:

    static ToolBar* m_toolbar;

    IGUIToolBar*    m_bar;
    IGUIButton*     m_buttons[18];

    // private functions:

    void            init();
    void            buttonInit(unsigned int ix, ToolboxButtonIndex TBI, 
                    const char* file_path, const wchar_t* text);
    ToolBar() {};

public:
    static ToolBar*     getToolBar();
    void                reallocate();
};

#endif
