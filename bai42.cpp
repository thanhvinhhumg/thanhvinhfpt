#include <stdio.h>
int main(){
	int a,b,c;
	
	do {
		printf("Nhap vao gia tri 3 canh cua tam giac\n");
		printf("canh a=");
		scanf("%d",&a);
		printf("canh b=");
		scanf("%d",&b);
		printf("canh c=");
		scanf("%d",&c);
	}
	while(((a+b)<c)&&((a+c)<b)&&((b+c)<a));
	printf("a,b,c la 3 canh cua mot tam giac");
	return 0;
}

