#include<stdio.h>
int main(){
	int n,i;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int ary[n];
	for(i=0;i<n;i++){
		printf("nhap a[%d]=",i);
		scanf("%d",&ary[i]);
	}
	int count=0,max_count=0;
	for(i=0;i<n;i++)
	{
		if(ary[i]>0)
		{
			count++;
			if(count>max_count)
			{
				max_count=count;
			}
			}else{
				count=0;
			}
		
	}
	printf("mang max= %d",max_count);
	
	return 0;
}
