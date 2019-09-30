/*
 * The c compiler will not check the length of array
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, score[4];
	score[0] = 50;
	score[1] = 30;
	//score[2] = 21;
	score[3] = 70;

	for(int i =0 ; i<= 4; i++){
		printf("score[%d] = %d \n", i , score[i]);
	}

	return 0;
}