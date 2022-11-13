#include <stdio.h>
#include <string.h>

int main(){
	
	char str[] = "aba";
	char str2[10];
	
	strcpy(str2,str);
	strrev(str2);
	if(strcmp(str,str2) == 0){
		printf("Palindrome");
	}
	else{
		printf("Not palindrome");
	}
	
	return 0;
}
