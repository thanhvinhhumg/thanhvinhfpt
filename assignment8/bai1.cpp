#include<stdio.h>

bool timkiem(int x,int a[],unsigned int n)
{
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			return true;
		}
	}
	return false;
}


int main(){
	int x=5;
	
	int a[5]={1,2,3,4,5};
	if(timkiem (x,a,5)){
		printf(" gia tri x co trong mang");
	}else{
		printf("Gia tri x k co trong mang");
	}
	
	return 0;
}
