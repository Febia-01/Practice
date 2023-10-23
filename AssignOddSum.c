/*
 ============================================================================
 Name        : AssignOddSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, i, sum;
	printf("Enter a limit");
	scanf("%d", &limit);

	for(i=1;i<=limit;i++){
		if(i%2==1){
			sum = sum + i;
		}else{
			continue;
		}
	}
	printf("Sum of odd numbers till %d is %d", limit, sum);

	return EXIT_SUCCESS;
}
