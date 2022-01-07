-- 添加头文件搜索目录
add_includedirs(
    "$(projectdir)/include",
    "$(projectdir)/backends"
    )
-- 添加链接库名
add_links("imgui-wrapper", "imgui-backends")
-- 添加程序运行时动态库的加载搜索目录
add_rpathdirs(".")
-- 添加子工程目标依赖
add_deps("imgui-wrapper", "imgui-backends")

target("example_sdl_opengl3")
    set_kind("binary")
    set_targetdir("$(buildir)/$(mode)")
    add_frameworks("OpenGL", "Cocoa", "IOKit", "CoreVideo")
    add_files("example_sdl_opengl3/*.c")
