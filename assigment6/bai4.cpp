#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao so phan tu mang N= \n");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("Nhap a[%d]= \n",i);
		scanf("%d",&a[i]);

	
		for(int j=0;j<i;j++)
	{
		if(a[i]==a[j])
		{
			i=i-1;
			break;
		}
	}
}
	
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}

	
	return 0;
}
