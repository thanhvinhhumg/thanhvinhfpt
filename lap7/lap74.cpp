#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao so phan tu cua mang n= ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int s=0,s_max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			s=s+a[i];
		}
		if(s>s_max) {
			s_max=s	;
		}else
		{
			s=0;
		}
	}
	printf("chuoi so duong  lon nhat la s= %d",s_max);
	return 0;
}
