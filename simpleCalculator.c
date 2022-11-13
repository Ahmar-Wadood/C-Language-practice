#include <stdio.h>


int main(){
	
	//Taking input from user
	float number1, number2, result;
	char operator1;
input:	 printf("Enter the number to calculate: ");
		 scanf("%f %c %f",&number1, &operator1, &number2);
	
	switch(operator1){
		case '+': result = number1+number2;
				  break;
		case '-': result = number1 - number2;
				  break;
		case '*': result = number1 * number2;
				  break;
		case '/': result = number1/number2;
				  break;
		default:  printf("WRONG!!!!\n");
				  printf("\nTry Again\n\n");
				  goto input;
	}
	
	
	
	//Printing out the resukt
	printf("%.4f %c %.4f = %.4f",number1, operator1, number2, result);
	
	return 0;
}
