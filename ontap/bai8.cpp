#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen n= ");
	scanf("%d",&n);
	int s=0;
	for ( ;n>0;n/=10){
		int i=n%10;
		s=s+i;
	}
	printf(" Tong cac chu so cua n= %d",s);
	return 0;
}
