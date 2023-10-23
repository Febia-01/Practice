/*
 ============================================================================
 Name        : AssignMultiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i, Result;
	printf("Enter a number \n");
	scanf("%d", &num);

	for(i=1;i<=10;i++){
		Result = i * num;
		printf("%d * %d = %d \n", i, num, Result);
	}

	return EXIT_SUCCESS;
}
