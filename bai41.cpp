#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao so tu nhien n bat ky\n");
	printf("n=");
	scanf("%d",&n);
	int s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	printf("gia tri n! la %d",s);
	return 0;
}
