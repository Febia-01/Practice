/*
 ============================================================================
 Name        : ArrayInputOutputsample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[5];
	int i, limit;
	printf("Enter the limit");
	scanf("%d", &limit);
	printf("Enter values");
	for(i=0;i<limit;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Entered values are ");
	for(i=0;i<limit;i++)
	{
		printf("%d\t", a[i]);
	}

	return EXIT_SUCCESS;
}
