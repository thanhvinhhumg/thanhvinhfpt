#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char chuoi1[100];
	char chuoi2[100];
	printf("Nhap chuoi1 : ");
	scanf("%s",chuoi1);
	printf("Nhap chuoi2 : ");
	scanf("%s",chuoi2);
	a=strcmp (chuoi1,chuoi2);
	if(a==0){
		printf("chuoi1 bang chuoi2");
	}else
	if(a>0){
		printf("chuoi1 chua chuoi 2");
		
	}else {
			printf("chuoi2 chua chuoi 1");
	}
	
	return 0;
}


