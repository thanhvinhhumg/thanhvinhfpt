#include <stdio.h>
#include <math.h>
int main (){
printf("Nhap vao a,b,c\n");
double a,b,c,x,x1,x2,X;
double denta,d;
printf("a=");
scanf("%lf",&a);
printf("b=");
scanf("%lf",&b);
printf("c=");
scanf("%lf",&c);
if(a==0){
	x=-c/b;
	printf("%lf la nghiem cua phuong trinh",x);
}else{
	denta=((b*b)-(4*a*c));
	if(denta>=0){
		if(denta==0){
		X=(-b/(2*a));
		printf("%lf la nghiem cua phuong trinh",X);
		}else{
		d=sqrt(denta);
		x1=((-b-d)/(2*a));
		x2=((-b+d)/(2*a));
		printf("%lf la nghiem cua phuong trình\n",x1);
		printf("%lf la nghiem cua phuong trình\n",x2);	
		}
	}else{
		printf(" phuong trinh vo nghiem");	
		}
	
	
	
}
}

