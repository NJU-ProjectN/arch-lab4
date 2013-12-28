#include "trace_cal.h"


int main() {
	trace_cal(1, '+', 2);
	trace_cal(0x7fffffff, '+', 1);
	u_trace_cal(0x7fffffff, '+', 1);
	u_trace_cal(0x80000000, '+', 0x80000000);

	/* try more test cases */
	
	return 0;
}
