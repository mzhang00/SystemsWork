#include <stdio.h>

double arr_avg(int *arr, int length) {

	double total = 0.0;
	int i;

	for(i = 0; i < length; i++) {

		total += *arr;
		arr++;
	}

	return total / length;
}

void arr_copy(int *arr1, int *arr2, int length) {

	int i;

	for (i = 0; i < length; i++) {

		*arr2 = *arr1;
		*arr1++;
		*arr2++;
	}
}

int length(char *str) {

	int length = 0;

	while (*str != '\0') {

		length++;
		*str++;
	}

	return length;
}

