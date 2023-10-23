/*
 ============================================================================
 Name        : AssignPalindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, length, flag =0;
	char word[100];
	printf("Enter a string\t");
	scanf("%s", word);
	length = strlen(word);

	for(i=0;i<length;i++){
		if(word[i] != word[length-i-1]){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		printf("%s is not a Palindrome", word);
	}else{
		printf("%s is a Palindrome", word);
	}

	return EXIT_SUCCESS;
}
