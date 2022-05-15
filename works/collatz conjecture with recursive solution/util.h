#ifndef _UTIL_H_
#define _UTIL_H_

#include <stdlib.h>


void generate_sequence( int xs, int currentlen, int seqlen, int *seq);

/*
 * Function: generate_sequence
 * ---------------------------
 * It does:
 *   finds the shortest way to turn str1 to str2
 * xs:
 *   first element of the sequence
 * seqlen:
 *   the length of the sequence
 * currentlen:
 *   the length of the sequence in the time of the function called
 * *seq:
 *   the array of the sequence.
 */

/******************************************************/

void check_loop_iterative(void (*f)(), int xs, int seqlen, int *loop, int *looplen);

/*
 * Function: check_loop_iterative
 * ---------------------------
 * It does:
 *   Given any function and a starting integer check if the sequence ends up in a loop.
 * xs:
 *   first element of the sequence
 * seqlen:
 *   the length of the sequence
 * *loop:
 *   array containing the elements of the repeating loop
 * *looplen:
 *   lenght of the *loop
 */

/******************************************************/

int has_loop(int *arr, int n, int looplen, int *ls, int *le);

/*
 * Function: has_loop
 * ---------------------------
 * It does:
 *   It checks if there are any loops with a length of looplen.
 * *arr:
 *   array to check
 * n:
 *   lenght of *arr
 * *looplen:
 *   lenght of the loop array
 * *ls
 *   loop starting index
 * *le
 *   loop end index
 *
 * return:
 *	 It return 1 if a loop exists, 0 otherwise
 */

/******************************************************/

int isArraysSame(int *arr, int *arr2, int lenght);

/*
 * Function: isArraysSame
 * ---------------------------
 * It does:
 *   it check is given arrays same
 * *arr:
 *   first array
 * *arr2:
 *   second array
 *	lenght:
 *   lenght of arrays
 *
 *	return:
 *   if arrays are same function returns 1, otherwise 0
 */

/******************************************************/

void printArray(int *arr, int arrSize, char *title);

/*
 * Function: printArray
 * ---------------------------
 * It does:
 *   print given array, like title: {....}
 * *arr:
 *   arr to print
 * arrSize:
 *   lenght of *arr
 * *title:
 *   title for print to title place
 */

/******************************************************/

void hist_of_firstdigits(void (*f)(), int xs, int seqlen, int *h, int digit);

/*
 * Function: hist_of_firstdigits
 * ---------------------------
 * It does:
 *   it calculate the histogram of the first digits of the sequence generated by a given function
 * xs:
 *   first element of the sequence
 * seqlen:
 *   the length of the sequence
 * *h:
 *   array of histogram
 *	digit:
 *	 the digit of the element of array in the time of the function called
 */

/******************************************************/

#endif /* _UTIL_H_ */
