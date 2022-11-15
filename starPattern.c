#include <stdio.h>

int main(){
	//Making a star patter having four rows
	//	 *
	//  ***
	// *****
	//*******
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int i,j, count = 1;
	for(i = n; i>=0; i--){
		
		for(j=1;j<=i;j++){
			printf(" ");
		}
		
		for(j = 0; j<count;j++){
			printf("*");	
		}
		printf("\n");
		count+=2;
	}
	return 0;
}
