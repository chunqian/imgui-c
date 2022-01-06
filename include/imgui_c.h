#ifndef _IMGUI_C_H
#define _IMGUI_C_H
#include "../src/wrapper/Color.h"
#include "../src/wrapper/ConfigOverride.h"
#include "../src/wrapper/Context.h"
#include "../src/wrapper/DragDrop.h"
#include "../src/wrapper/DrawCommand.h"
#include "../src/wrapper/DrawData.h"
#include "../src/wrapper/DrawList.h"
#include "../src/wrapper/Focus.h"
#include "../src/wrapper/Font.h"
#include "../src/wrapper/FontAtlas.h"
#include "../src/wrapper/FontConfig.h"
#include "../src/wrapper/InputTextCallbackData.h"
#include "../src/wrapper/IO.h"
#include "../src/wrapper/Layout.h"
#include "../src/wrapper/ListClipper.h"
#include "../src/wrapper/Main.h"
#include "../src/wrapper/Popup.h"
#include "../src/wrapper/Scroll.h"
#include "../src/wrapper/Settings.h"
#include "../src/wrapper/State.h"
#include "../src/wrapper/Style.h"
#include "../src/wrapper/Tables.h"
#include "../src/wrapper/Types.h"
#include "../src/wrapper/Widgets.h"
#include "../src/wrapper/Window.h"
#include "../src/wrapper/Text.h"

// Define attributes of all API symbols declarations (e.g. for DLL under Windows)
// IMGUI_API is used for core imgui functions, IMGUI_IMPL_API is used for the default backends files (imgui_impl_xxx.h)
// Using dear imgui via a shared library is not recommended, because we don't guarantee backward nor forward ABI compatibility (also function call overhead, as dear imgui is a call-heavy API)
#ifndef IMGUI_API
#define IMGUI_API
#endif
#ifndef IMGUI_IMPL_API
#define IMGUI_IMPL_API              IMGUI_API
#endif

#endif
