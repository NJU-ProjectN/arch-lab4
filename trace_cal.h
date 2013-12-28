#ifndef __TRACE_CAL_H__
#define __TRACE_CAL_H__

#include <stdio.h>
#include <assert.h>
#include "types.h"
#include "eflags.h"

int32_t trace_cal(int32_t l, char op, int32_t r);
uint32_t u_trace_cal(uint32_t l, char op, uint32_t r);

#endif
