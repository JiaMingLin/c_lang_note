/* Find the maximal and minmal in the array */

#include <stdlib.h>
#include <stdio.h>

int main(void){
	int score[5] = {23,66,11,34,32};
	int max, min;
	max = min = score[0];

	for(int i = 0; i<5; i++){
		if (score[i] > max){
			max = score[i];
		}

		if (score[i] < min){
			min = score[i];
		}
	}

	printf("The maximal is: %d, The minimal is: %d \n", max, min);

	return 0;
}