-- 设置工程名
set_project("imgui-c")

-- 设置工程版本
set_version("1.0.0")

-- 设置xmake最小版本
set_xmakever("2.5.3")

-- 设置编译目录
set_config("buildir", "xmake.Build")
-- 设置编译模式
set_config("mode", "debug")
-- 设置编译平台
set_config("plat", "macosx")
-- 设置编译架构
set_config("arch", "x86_64")

-- 设置c编译器
set_config("cc", "clang")
-- 设置c++编译器
set_config("cxx", "clang")

-- 设置c/c++编译选项
set_config("cxflags", "-O0 -w")
-- 设置c++编译选项
set_config("cxxflags", "-std=c++11 -x objective-c++ -g -Wall -Wformat")
-- 设置c编译选项
set_config("cflags", "-std=c99 -x objective-c")

-- 添加系统头文件搜索目录
add_sysincludedirs(
    "/usr/local/include",
    "/usr/local/include/SDL2",
    "/usr/local/include/libpng",
    "/usr/local/include/freetype2",
    "include",
    "src"
    )

-- 添加链接库搜索目录
add_linkdirs(
    "/usr/local/lib",
    "$(buildir)/$(mode)"
    )

-- 添加系统链接库名
add_syslinks("png", "freetype", "SDL2")

-- 运行脚本域
on_load(function (target)
    -- 判断目录存在
    if not os.exists("$(buildir)/$(mode)") then
        os.mkdir("$(buildir)/$(mode)")
    end
end)
after_link(function(target)
    -- 生成compiler_commands
    if os.exists("$(projectdir)/compile_commands.json") then
        print("delete compile_commands.json ok!")
        os.rm("$(projectdir)/compile_commands.json")
    end
    import("core.base.task")
    task.run("project", {kind = "compile_commands"})
end)

-- 添加子工程
-- core
includes("src")
-- wrapper
includes("src/wrapper")
-- backends
includes("backends")
-- examples
includes("examples")
