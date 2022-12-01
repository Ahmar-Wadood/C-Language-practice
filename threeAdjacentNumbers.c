#include <stdio.h>
#include <stdbool.h>

// Given an array of numbers, write a method that checks if there are three adjacent numbers where second is greater by 1 than the first one and third is greater by 1 than the second one.
// Expected input and output
// ThreeIncreasingAdjacent([45, 23, 44, 68, 65, 70, 80, 81, 82 ]) -> True
// ThreeIncreasingAdjacent([7, 3, 5, 8, 9, 3, 1, 4 ]) -> False


int threeIncreasingAdjacent(int *arr, int sizeArr){
	int i, interval;
	for(i = 0; i<sizeArr-3; i++){
		interval = arr[i+1] - arr[i];
		if(interval == 1){
			if ((arr[i+2] - arr[i+1]) == 1){
				printf("1st number is: %d\n2nd number is: %d\n3rd number is: %d", arr[i],arr[i+1], arr[i+2]);
				return 1;
			}
		} 
	}
	return 0;
}


int main(){
	int arr[] = {7,3,4,8,9,10,1,4};
	int sizeArr = sizeof(arr);
	
	if(threeIncreasingAdjacent(arr, sizeArr) == 0){
		printf("There are no numbers in ascending order!");	
	}
	return 0;	
}
