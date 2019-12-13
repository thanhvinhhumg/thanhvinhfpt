#include <stdio.h>

int main(){
	int n,x;
	printf("Nhap vao so tu nhien n =\n");
	scanf("%d",&n);
	if(n<0){
	printf("khong the tim");
	
	}else{
		int x1=1, x2=1,x3=2,x=4;
		
		for(int i=4;i<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
			x=x+x3;
	}
		printf("tong bang =%d\n",x);
	}
	
return 0;
}
