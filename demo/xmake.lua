-- 添加头文件搜索目录
add_includedirs(
    "$(projectdir)/include",
    "$(projectdir)/backends",
    "$(projectdir)/backends/gl3w/include"
    )
-- 添加链接库名
add_links("imgui-wrapper", "imgui-backends")
-- 添加程序运行时动态库的加载搜索目录
add_rpathdirs(".")
-- 添加子工程目标依赖
add_deps("imgui-wrapper", "imgui-backends")

target("imgui_demo")
    set_kind("binary")
    set_targetdir("$(buildir)/$(mode)")
    add_files("*.c")
