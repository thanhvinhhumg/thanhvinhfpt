#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so nguyen n \n");
	printf("n=");
	scanf("%d",&n);
	if(n==1||n==0){
		printf("n khong phai la so nguyen to");
	}else{
		int count=0;
		for(int i=2;i<n;i++){
		if(n%i==0){
		++count;	
		}
		}
		if(count==0){
			printf("n la so nguyen to ",n);
		}else{
			printf("N khong phai la so nguyen to",n);
		}
	}
	
		return 0;
	}
