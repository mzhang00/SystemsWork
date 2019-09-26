#include <stdio.h>
#include "functionheaders.h"

int main() {

	int arr[] = {1,2,3};

	printf("%f\n",arr_avg(arr,3));

	int arr2[] = {2,4,6};

	arr_copy(arr,arr2,3);

	int i;

	for (i = 0; i < 3; i++) {

		printf("%d\n",arr2[i]);
	}

	printf("%d\n",length("hello"));

	printf("%ld\n%ld\n",sizeof("a"),sizeof('1'));

	return 0;
}
