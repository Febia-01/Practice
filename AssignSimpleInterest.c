/*
 ============================================================================
 Name        : AssignSimpleInterest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int p; float r; float n; float SI;
	printf("Enter Principal amount");
	scanf("%d", &p);
	printf("Enter Interest rate");
	scanf("%f", &r);
	printf("Enter Number of years");
	scanf("%f", &n);

	SI =(p*n*r)/100;

	printf("Simple Interest is %f", SI);




	return EXIT_SUCCESS;
}
