/*
 ============================================================================
 Name        : AssignArrayFunctions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getArray(int, int);
void displayArray(int, int);

int main(void) {

	int arr[], size;
	printf("Enter the size of array\n");
	scanf("%d", &size);

	getArray(arr, size);
	displayArray(arr, size);


	return EXIT_SUCCESS;
}

void getArray(int arr[], int size){

	int i;
	printf("Enter the values of array\n");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
}

void displayArray(int arr[], int size){
	int i;
	printf("Entered array is\n");
	for(i=0;i<size;i++){
		printf("%d\t", arr[i]);
	}
}
