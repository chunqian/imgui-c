target("imgui-wrapper")
    set_kind("shared")
    add_deps("imgui")
    set_targetdir("$(buildir)/$(mode)")
    add_includedirs("$(projectdir)/src")
    add_files("*.cpp")
target_end()
