// dear imgui: Platform Backend for SDL2
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)
// (Info: SDL2 is a cross-platform general purpose library for handling windows, inputs, graphics context creation, etc.)

// Implemented features:
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard arrays indexed using SDL_SCANCODE_* codes, e.g. ImGui::IsKeyPressed(SDL_SCANCODE_SPACE).
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.

// You can use unmodified imgui_impl_* files in your project. See examples/ folder for examples of using this.
// Prefer including the entire imgui/ repository into your project (either as a copy or as a submodule), and only build the backends you need.
// If you are new to Dear ImGui, read documentation from the docs/ folder + read the top of imgui.cpp.
// Read online: https://github.com/ocornut/imgui/tree/master/docs

#pragma once
#include "imgui_c.h"      // IMGUI_IMPL_API

struct SDL_Window;
typedef union SDL_Event SDL_Event;

#ifdef __cplusplus
extern "C" {
#endif

IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_InitForOpenGL(struct SDL_Window* window, void* sdl_gl_context);
IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_InitForVulkan(struct SDL_Window* window);
IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_InitForD3D(struct SDL_Window* window);
IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_InitForMetal(struct SDL_Window* window);
IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_InitForSDLRenderer(struct SDL_Window* window);
IMGUI_IMPL_API void     ImGui_ImplSDL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplSDL2_NewFrame();
IMGUI_IMPL_API IggBool     ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);

#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
static inline void ImGui_ImplSDL2_NewFrame(struct SDL_Window*) { ImGui_ImplSDL2_NewFrame(); } // 1.84: removed unnecessary parameter
#endif

#ifdef __cplusplus
}
#endif
