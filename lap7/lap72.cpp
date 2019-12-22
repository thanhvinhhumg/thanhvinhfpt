#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao so phan tu cua mang n= ");
	scanf("%d",&n);
	int ary[n];
	for(i=0;i<n;i++)
	{
		printf("Nhap ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
	int min=ary[0];
	for(i=0;i<n;i++)
	{
		
		if(ary[i]>0)
		{
			min=ary[i];
			break;
			
		}
	}	
	
	for(i=0;i<n;i++)
	{
	
 		if(ary[i]>0&&ary[i]<min)
		min=ary[i];
	}
	
		
 	printf("so duong nho nhat trong mang la = %d",min);	
	return 0;
	}
	 
	
	
	



