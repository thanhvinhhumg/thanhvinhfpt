#include <stdio.h>
int main(){
printf("Nhap vao day so a,b,c\n");
int a,b,c;
printf(" a=");
scanf("%d",&a);
printf(" b=");
scanf("%d",&b);
printf(" c=");
scanf("%d",&c);
if(a>b){
	if(a>c){
		printf("%d  la so lon nhat",a);
		
	}else{
		printf("%d la so lon nhat",c);
		
	}
}else{
	if(b>c){
		printf("%d la so lon nhat",b);
		}else{
			printf("%d la so lon nhat ",c);
		}
}
		
}
