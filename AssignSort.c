/*
 ============================================================================
 Name        : AssignSort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[100], limit, i, j, temp;

	printf("Enter the size of an array\t");
	scanf("%d", &limit);

	printf("Enter the values of array\t");
	for(i=0;i<limit;i++){
		scanf("%d", &arr[i]);
	}


	for(i=0;i<limit-1;i++){
		for(j=i;j<limit;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("Sorted Array\n");

	for(i=0;i<limit;i++){
		printf("%d\t", arr[i]);
	}

	return EXIT_SUCCESS;
}
