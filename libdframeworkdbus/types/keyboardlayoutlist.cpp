
#include "keyboardlayoutlist.h"

void registerKeyboardLayoutListMetaType()
{
    qRegisterMetaType<KeyboardLayoutList>("KeyboardLayoutList");
    qDBusRegisterMetaType<KeyboardLayoutList>();
}
