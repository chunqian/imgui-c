target("imgui-backends")
    set_kind("shared")
    add_deps("imgui")
    set_targetdir("$(buildir)/$(mode)")
    add_includedirs("gl3w/include")
    add_links("imgui")
    add_rpathdirs(".")
    add_files("gl3w/src/gl3w.c", "*.cpp")
target_end()
