#include <stdio.h>

int findMaxArr();

int main(){
	int arr[5]={1,9,4,5,8};
	printf("so lon nhat trong mang la %d",findMaxArr(arr,5));
	return 0;
}

int findMaxArr(int arr[],int n){
	int i=0;
	int max=arr[0];
	while(i<n){
		if(max<arr[i]){
			max=arr[i];
		}
		i++;
	}
	return max;
}
