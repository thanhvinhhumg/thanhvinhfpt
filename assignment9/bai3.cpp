#include<stdio.h>
#include<string.h>
int main(){
	int n,m,i;
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
	char temp[m];
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++){
			if(strcmp(chuoi[j],chuoi[j+1])>0)
			{
				strcpy(temp,chuoi[j]);
				strcpy(chuoi[j],chuoi[j+1]);
				strcpy(chuoi[j+1],temp);
			}
		}
	}
	printf("chuoi sap xep theo anlphabe la:\n");
	for(i=0;i<n;i++)
	{
	
	printf("%s\t", chuoi[i]);
	}
	return 0;
}
