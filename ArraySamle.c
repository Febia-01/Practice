/*
 ============================================================================
 Name        : ArraySamle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, limit, arr[100];
	printf("Enter the limit");
	scanf("%d", &limit);
	printf("Enter the values");
	for(i=0;i<limit;i++){
		scanf("%d", &arr[i]);
	}
	printf("Entered vallues are: \n");
	for(i=0;i<limit;i++){
		printf("%d", arr[i]);
	}
	return EXIT_SUCCESS;
}
