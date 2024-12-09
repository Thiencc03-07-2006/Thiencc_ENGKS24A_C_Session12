#include <stdio.h>

void printArr();

int main(){
	int arr[5]={1,3,4,5,8};
	printArr(arr,5);
	return 0;
}

void printArr(int arr[],int n){
	int i=0;
	while(i<n){
		printf("%d ",arr[i]);
		i++;
	}
}
