#include <stdio.h>
int main(){
	printf("Nhap vao a,b\n");
	int a,b;
	printf(" a=");
	scanf("%d",&a);
	printf(" b=");
	scanf("%d",&b);
	if(a>=b){
		printf("gia tri cua a/b= %f",(float)a/b);
	}else{
		
		printf("gia tri cua a*b= %d",a*b);
	}

}

