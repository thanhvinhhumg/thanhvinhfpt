#include<stdio.h>
int main (){
	int n;
	printf("nhap so nguyen N=");
	scanf("%d",&n);
	int count=0;
	for (;n!=0;n/=10){
		if(n/10!=1){
			count++;
			}
		}
	
	printf(" so chu so la %d", count+1);
return 0;
}
