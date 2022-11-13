#include <stdio.h>

int main(){
	//Code for checking a palindrome number
	int num;
	//Taking input from the user
	printf("Enter the number: ");
	scanf("%d", &num);
	
	int remainder = 0, reversed = 0, originalNumber = num;
	while(num!=0){
		remainder = num%10;
		reversed = reversed*10 + remainder;
		num/=10;
	}
	printf("\nThe reversed number is: %d", reversed);
	
	//Checking whether the two numbers are palindrome or not
	if(originalNumber == reversed){
		printf("\nThe entered number is palindrome. BOYAH!!!");
	}
	else{
		printf("\nSoory!!! The entered number is not palindrome");
	}
	
	return 0;
}
























































