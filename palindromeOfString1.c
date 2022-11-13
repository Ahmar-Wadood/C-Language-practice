#include <stdio.h>
#include <string.h>

int ispalindrome(char *string){
	int length = strlen(string);
	char *originalString;
	strcpy(originalString,string);

	int i, temp;
	for(i = 0; i<length/2; i++){
		temp = string[i];
		string[i] = string[length-1-i];
		string[length-1-i] = temp;
	}
	if(strcmp(string,originalString) == 0){
	
		return 1;	
}
	return 0;
}

int main(){
	//Objective:
	//Creatng a palindrom checker that ensures that the given string by the user is same when inverted.
	char string[10];
	int result;
	printf("******************************* This is palindrome checker **********************************\n");
	printf("\nEnter the string which you want to check: ");
	scanf("%s", &string);
	printf("\nYour entered string is: %s",string);
	result = ispalindrome(string);
	
	printf("\nThe reversed string is: %s\n",string);
	if(result == 1){
		printf("The entered string is palindrome\n");
	}
	else{
		printf("The entered string is not palindrome");
	}
	return 0;
}
