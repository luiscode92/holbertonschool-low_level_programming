#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, unsigned int start, unsigned int end);
int binary_search(int *array, size_t size, int value);
#endif
