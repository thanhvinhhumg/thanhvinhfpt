#include <stdio.h>
int main(){
	int n,tb;
	printf("Nhap vao so phan tu mang");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	int s=0;
	int count=0;
	for(int i=0;i<n;i+=2)
	{
		if(a[i]%2!=0)
		{
			s=s+a[i];
			count++;
		}
	}
	tb=s/count;
	printf("trung binh cac so le trong mang la %d",tb);
	
	return 0;
}
