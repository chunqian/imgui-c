#include "ConfiguredImGui.h"

#include "Text.h"
#include "WrapperConverter.h"

void iggText(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextV(fmt, args);
    va_end(args);
}

void iggTextV(const char *fmt, va_list args)
{
    return ImGui::TextV(fmt, args);
}

void iggTextColored(const IggVec4 *col, const char *fmt, ...)
{
    // Vec2Wrapper sizeArg(size);
    Vec4Wrapper colArg(col);
    va_list args;
    va_start(args, fmt);
    ImGui::TextColoredV(*colArg, fmt, args);
    va_end(args);
}

void iggTextColoredV(const IggVec4 *col, const char *fmt, va_list args)
{
    // Vec2Wrapper sizeArg(size);
    Vec4Wrapper colArg(col);

    return ImGui::TextColoredV(*colArg, fmt, args);
}

void iggTextDisabled(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextDisabledV(fmt, args);
    va_end(args);
}

void iggTextDisabledV(const char *fmt, va_list args)
{
    return ImGui::TextDisabledV(fmt, args);
}

void iggTextWrapped(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextWrappedV(fmt, args);
    va_end(args);
}

void iggTextWrappedV(const char *fmt, va_list args)
{
    return ImGui::TextWrappedV(fmt, args);
}

void iggLabelText(const char *label, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::LabelTextV(label, fmt, args);
    va_end(args);
}

void iggLabelTextV(const char *label, const char *fmt, va_list args)
{
    return ImGui::LabelTextV(label, fmt, args);
}

void iggBulletText(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::BulletTextV(fmt, args);
    va_end(args);
}

void iggBulletTextV(const char *fmt, va_list args)
{
    return ImGui::BulletTextV(fmt, args);
}
