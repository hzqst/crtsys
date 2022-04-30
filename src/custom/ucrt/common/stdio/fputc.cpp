﻿#include "../../../common/crt/crt_internal.h"

EXTERN_C
int __cdecl fputc(int const c, FILE *const stream) {
  if (stream == stdout) {
    DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "%c", c);
    return c;
  } else if (stream == stderr) {
    DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "%c", c);
    return c;
  }
  // untested :-(
  KdBreakPoint();
  return 0;
}