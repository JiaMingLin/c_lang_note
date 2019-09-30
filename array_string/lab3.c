/* various length of input numbers */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(void){
	int score[MAX];
	int i=0, num;
	float sum = 0;

	do{
		if(i == MAX){
			printf("Reach the max of array");
			i++;
			break;
		}
		printf("Enter an integer: ");
		scanf("%d", &score[i]);
	}while(score[i++] > 0);

	num = i-1;

	for(i = 0; i < num; i++){
		sum += score[i];
	}

	printf("The average score is %.2f \n", (float)sum/num);

	return 0;
}