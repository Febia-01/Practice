/*
 ============================================================================
 Name        : AssignNumberPattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, limit;
	printf("Enter a limit");
	scanf("%d", &limit);

	for(i=0;i<=limit;i++){
		for(j=1;j<=i;j++){
			printf("%d \t", j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
