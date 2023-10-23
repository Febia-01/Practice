/*
 ============================================================================
 Name        : AssignEven.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i, arr[100], even=0;

	printf("Enter the size of an array\t");
	scanf("%d", &size);
	printf("Enter the values of array\t");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}

	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			even = even+1;
		}
	}

	printf("Number of even numbers in the given array is %d", even);

	return EXIT_SUCCESS;
}
