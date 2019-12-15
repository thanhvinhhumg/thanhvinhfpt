#include <stdio.h>
int main(){
	int n,n2;
	printf(" Nhap vao so phan tu cua mang n= ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		int n2=0;
		for(;a[i]!=0;a[i]/=10)
		{
			n2=a[i]%10+ n2*10;
		}
		printf(" %d, ",n2);
	}
	
	return 0;
}
