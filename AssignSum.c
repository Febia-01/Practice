/*
 ============================================================================
 Name        : AssignSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1;
		float num2;
		float sum;
		printf("Enter two numbers");
		scanf("%d", &num1);
		scanf("%f", &num2);

		sum = num1+num2;
		printf("\nResult : %f", sum);
	return EXIT_SUCCESS;
}
