/*
 ============================================================================
 Name        : AssignArrayFunction.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getArray(int);
void displayArray(int, int);

int main(void) {

	int k, size;
	printf("Enter the size of the array\t");
	scanf("%d", &size);

	k = getArray(size);
	displayArray(k, size);

	return EXIT_SUCCESS;
}

void getArray(int size){
	int i, arr[100];

	printf("Enter the values\t");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}

}

void displayArray(int m, int size){
	int i;
	printf("The array entered is\n");
	for(i=0;i<size;i++){
		printf("%d\t", m);
	}
}
