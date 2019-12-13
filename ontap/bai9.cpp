#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao 2 so nguyen a,b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	while(a!=b){
		if(a>b)	a=a-b;
		else	b=b-a;
		}
		
     printf(" %d la uoc chung lon nhat",b);
     return 0;
     }
		
	



	
	

