/*
 ============================================================================
 Name        : AssignMultiarrayAddition.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr1[100][100], arr2[100][100], i, j, m, n, sum[100][100];
	printf("Enter the size of arrays");
	printf("Rows:\t");
	scanf("%d", &m);
	printf("Columns:\t");
	scanf("%d", &n);

	printf("Enter the values of first array\n");
	for(i=0; i<m;i++){
		for(j=0; j<n;j++){
			scanf("%d", &arr1[i][j]);
		}
		printf("\n");
	}

	printf("Enter the values of second array\n");
	for(i=0; i<m;i++){
		for(j=0; j<n;j++){
			scanf("%d", &arr2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for(i=0;i<m;i++){
		for(j=0; j<n;j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
