#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao so phan tu cua mang n= \n");
	scanf("%d",&n);
	int ary[n];
	for(i=0;i<n;i++)
	{
		printf("Nhap ary[%d]= ",i);
		scanf("%d",&ary[i]);
	}
	for(i=n-1;i>=0;i--){
		if(ary[i]%2!=0)
		{
		printf("so le cuoi cung cua mang la %d",ary[i]);
		break;
		}
		
		
	}

	return 0;
}
