#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Include libraries */
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Helper function prototypes */
void print_search(unsigned int low, unsigned int high, int *array);

#endif /* SEARCH_ALGOS_H */
