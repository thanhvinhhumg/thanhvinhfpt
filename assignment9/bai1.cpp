#include<stdio.h>
#include<string.h>
int main(){
	int n,i,m;
	printf("Nhap vao so nguyen n= ");
	scanf("%d",&n);
	printf("Nhap vao so nguyen m= ");
	scanf("%d",&m);
	char chuoi[n][m];
	char s[100];
	for(int i=0;i<n;i++)
	{
		printf("Nhap chuoi[%d]= ",i+1);
		scanf("%s",chuoi[i]);
	}
	printf("Nhap chuoi s");
	scanf("%s",s);
	int a;
	int count =0;
	for(i=0;i<n;i++)
	{
		a=strcmp(s,chuoi[i]);
		if(a==0){
			
			count++;
		
	}
	}	
	if(count!=0){
		printf("chuoi s co nam trong mang");
	}else
		{
			printf("chuoi s khong nam trong mang");
		}
	
	
	
	return 0;
}
