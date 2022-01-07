#pragma once

#include <stdio.h>
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void iggText(const char *fmt, ...);
extern void iggTextV(const char *fmt, va_list args);
extern void iggTextColored(const IggVec4 *col, const char *fmt, ...);
extern void iggTextColoredV(const IggVec4 *col, const char *fmt, va_list args);
extern void iggTextDisabled(const char *fmt, ...);
extern void iggTextDisabledV(const char *fmt, va_list args);
extern void iggTextWrapped(const char *fmt, ...);
extern void iggTextWrappedV(const char *fmt, va_list args);
extern void iggLabelTextV(const char *label, const char *fmt, va_list args);
extern void iggBulletText(const char *fmt, ...);
extern void iggBulletTextV(const char *fmt, va_list args);

#ifdef __cplusplus
}
#endif
