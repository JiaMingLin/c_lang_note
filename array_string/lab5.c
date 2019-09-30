/* address of array */

#include<stdio.h>
#include<stdlib.h>

void func(int arr[3]){
	for(int i =0; i<3; i++){
		printf("arr[%d] = %d, Address: %p \n", i, arr[i], &arr[i]);
	}
}

int main(void){
	int A[3] = {1,2,3};
	int i;

	for(i = 0; i<3 ; i++){
		printf("A[%d] = %d, Address: %p \n", i, A[i], &A[i]);
	}

	func(A);

}
