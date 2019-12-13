#include <stdio.h>
int main(){
	int n,i,j,count;
	printf("Nhap vao so nguyen N=");
	scanf("%d",&n);
	count=0;
	for ( i=2; i<=n;i++){
		
		for( j=1;j<=i;j++){
		if(i%j==0)
		count++;	
		}
		if(count==2)

			printf(" %d, ",i);
			count=0;
		
		}

		
	}


