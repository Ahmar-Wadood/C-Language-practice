#include<stdio.h>
//
//int main(){
//	int num = 10;
//	int result;
//	result = num & 2;
//	
//	printf("%d",result>>1);	
//	return 0;
//}
int main(){

int i, temp;
int *reverse_array_in_place(int *arr, int N){
	for(i = 0; i<N/2; i++){
		temp = arr[i];
		arr[i] = arr[N-1-i];
		arr[N-1-i] = temp;
	}
	return arr;
}

int a[5] = {6,13,9,4,7};
reverse_array_in_place(a,5);

for(i = 0; i<5;i++){
	printf("%d\n",a[i]);
}

}
