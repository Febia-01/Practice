/*
 ============================================================================
 Name        : AssignElseifLadder.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float tot_mark;
	printf("Enter your mark");
	scanf("%f", &tot_mark);
	if(tot_mark >= 90){
		printf("Your grade is A");
	}
	else if(80 <= tot_mark <= 89){
		printf("Your grade is B");
	}
	else if(70 <= tot_mark <= 79){
		printf("Your grade is C");
	}
	else if(60 <= tot_mark <= 69){
		printf("Your grade is D");

	}
	else if(50 <= tot_mark <= 59){
		printf("Your grade is E");
	}
	else{
		printf("Filed");
	}
	return EXIT_SUCCESS;
}
