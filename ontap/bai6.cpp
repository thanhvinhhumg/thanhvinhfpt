#include <stdio.h>
int main (){
int a,b;

	do{
		printf("nhap vao hai so a,b\n");
		printf("a =");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
	}while(a>b);
	int s=0;
		for (int i=a+1;i<b;i++){
			s=s+i;
			
		}
		printf("tong la %d",s);
return 0;
}
