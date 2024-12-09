#include <stdio.h>

int intNum();

int main(){
	int num;
	for(int i=0;i<2;i++){
		printf("vui long nhap so nguyen: ");
		scanf("%d",&num);
		if(intNum(num)){
			printf("do la so nguyen to\n");
		}else{
			printf("do khong phai la so nguyen to\n");
		}
	}
	return 0;
}

int intNum(int num){
	int i=2;
	if(num<2){
		return 0;
	}
	while(i<num){
		if(num%i==0){
			return 0;
		}
		i++;
	}
	return 1;
}
