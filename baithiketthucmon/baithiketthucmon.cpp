#include<stdio.h>
#include<math.h>
double tinhchuvitamgiac(double a, double b, double c){
	return ((a+b+c));
}
double tinhdientichtamgiac(double a,double b,double c){

	double p =((a+b+c)/2);
	return  sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
	double a,b,c;
	do {
		printf("Nhap vao canh a = ");
		scanf("%lf",&a);
		printf("Nhap vao canh b = ");
		scanf("%lf",&b);
		printf("Nhap vao canh c = ");
		scanf("%lf",&c);
	
	}while (a==0||b==0||c ==0||(a+b)<=c||(a+c)<=b||(c+b)<=a);
	printf(" chu vi tam giac la: %lf\n",tinhchuvitamgiac(a,b,c));
	printf(" dien tich tam giac la : %lf",tinhdientichtamgiac(a,b,c));
	
	return 0;
}
