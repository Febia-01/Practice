/*
 ============================================================================
 Name        : AssignArrayInter.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i, j, arr1[100], arr2[100], temp;
	printf("Enter the size of arrays\t");
	scanf("%d", &size);

	printf("Enter the values of Array 1 \t");
	for(i=0;i<size;i++){
		scanf("%d", &arr1[i]);
	}

	printf("Enter the values of Array 2 \t");
	for(j=0;j<size;j++){
		scanf("%d", &arr2[j]);
	}


	temp = arr1[i];
	arr1[size] = arr2[size];
	arr2[size] = temp;

	printf("Arrays after swaping\n");

	printf("Array1:\t");
	for(i=0;i<size;i++){
		printf("%d\t", arr1[i]);
	}

	printf("\n");

	printf("Array2:\t");
	for(j=0;j<size;j++){
		printf("%d\t", arr2[j]);
	}


	return EXIT_SUCCESS;
}
