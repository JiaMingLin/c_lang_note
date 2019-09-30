/* Search an element in a array */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 6

int main(void){
	int A[SIZE] = {44,78,65,34,78,53};

	int i, input_int;

	printf("numbers in A: ");
	for(i = 0; i<SIZE; i++){
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("input an integer: ");
	scanf("%d", &input_int);

	// check input
	for(i = 0; i<SIZE; i++){
		if (input_int == A[i]){
			printf("element found: A[%d] = %d \n", i, A[i]);
		}
	}

	return 0;
}