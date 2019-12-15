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
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			s=s+a[i];
			count++;
		}
	}
	tb=s/count;
	printf("trung binh cac so le trong mang la %d",tb);
	if(count==0)
	{
		printf("trong mang khong co so le");
	}
	
	return 0;
}
