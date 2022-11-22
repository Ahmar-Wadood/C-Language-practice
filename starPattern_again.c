#include <stdio.h>

// Star Pattern
//
int main(){
	// rows of star pattern
	
	int rows;
	int n; // for user input
	
	// Taking no of rows for stars as input from the user
	printf("Enter the no of rows in which your paramid should look like: ");
	scanf("%d",&n);
	
	
	int no_of_stars = 1, j;
	for(rows = n; rows>0; rows--){
		
		for(j = rows - 1; j!=0; j--){
			printf(" ");
		}
		
		for(j = 0; j<no_of_stars; j++){
			printf("*");
		}
		no_of_stars += 2;
		printf("\n");
	}
		
	return 0;
}
