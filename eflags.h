#ifndef __EFLAGS_H__
#define __EFLAGS_H__

/*	The structure of 32-bit EFLAGS register is shown below:
 *
 *	 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *	 ---------------------------------------------------------------
 *	|                                       |O|DON'T|S|Z| |A| |P| |C|
 *	|                   DON'T CARE          | |    	| |	|0|	|0|	|1|	|
 *	|                                       |F| CARE|F|F| |F| |F| |F|
 *	----------------------------------------------------------------
 *
 *	0 - always be 0
 *	1 - always be 1
 *	DON'T CARE - do not care in this lab
 */

/* read the current vaule of EFLAGS */
inline static uint32_t read_eflags() {
	uint32_t val;
	asm volatile ("pushfl \n\t\
			popl %0": "=r"(val));
	return val;
}

#endif
