#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so nguyen n\n");
	printf("n=");
	scanf("%d",&n);
	double s=0;
	for(double i=1;i<=n;i++){
	s=s+1/i;
	}
	printf(" tong s = %lf",s);
	return 0;
}
