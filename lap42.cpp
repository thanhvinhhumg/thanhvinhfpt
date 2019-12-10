#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so so le can tinh tong \n");
	printf("tong so le can tinh n=");
	scanf("%d",&n);
	int s=0;
	for(int i=0,number=0;i<n;number++){
		if(number%2==1){
		s=s+number;
		++i;	
		}
		}
	printf("tong cac so le  la s= %d",s);
	return 0;
	}
