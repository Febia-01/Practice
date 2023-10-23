/*
 ============================================================================
 Name        : ArraySum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, i, arr[100], sum=0;
	printf("Enter a limit");
	scanf("%d", &limit);
	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d", &arr[i]);
	}

	for(i=0;i<limit;i++){
		sum = sum+arr[i];
	}

	printf("Result is %d", sum);

	return EXIT_SUCCESS;
}
