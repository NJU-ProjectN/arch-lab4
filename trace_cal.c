#include "trace_cal.h"

/* tracing signed integer operations */
int32_t trace_cal(volatile int32_t l, char op, volatile int32_t r) {
	int32_t result;
	uint32_t eflags;
	bool overflow_eflags = true, overflow_no_eflags = true;

	switch(op) {
		case '+':
			result = l + r;
			eflags = read_eflags();
			break;

		/* implement more operations here */

		default:
			printf("operation '%c' has not been implemented!\n", op);
			assert(0);
	}

	/* implement code to check whether the operation overflowed using EFLAGS */



	/* implement code to check whether the operation overflowed without using EFLAGS */



	printf("%s: %d %c %d = %d, eflags = 0x%08x, overflow_eflags = %d, overflow_no_eflags = %d\n", 
			__FUNCTION__, l, op, r, result, eflags, overflow_eflags, overflow_no_eflags);

	return result;
}

/* tracing unsigned integer operations */
uint32_t u_trace_cal(volatile uint32_t l, char op, volatile uint32_t r) {
	uint32_t result;
	uint32_t eflags;
	bool overflow_eflags = true, overflow_no_eflags = true;

	switch(op) {
		case '+':
			result = l + r;
			eflags = read_eflags();
			break;

		/* implement more operations here */

		default:
			printf("operation '%c' has not been implemented!\n", op);
			assert(0);
	}

	/* implement code to check whether the operation overflowed using EFLAGS */



	/* implement code to check whether the operation overflowed without using EFLAGS */

	

	printf("%s: %u %c %u = %u, eflags = 0x%08x, overflow_eflags = %d, overflow_no_eflags = %d\n", 
			__FUNCTION__, l, op, r, result, eflags, overflow_eflags, overflow_no_eflags);

	return result;
}
