#include<stdio.h>
void nhapvaomatran(int a[][4], unsigned int n){
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Nhap vao a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}


	
	int timhangmax(int a[][4]){
	int s_max,d=0;
	for (int i = 0; i < 4; ++i)
	{	
		int s = 0;
		for (int j = 0; j < 4; ++j)
		{
			s= s+ a[i][j];
		}
		if(i==0){
			s_max = s;
		} 
		if(s > s_max){
			s_max = s;
			d = i;
		}
	}
	return d;
}
int main()
{
	int a[4][4];
	nhapvaomatran(a,4);

	printf(" hang lon nhat la: %d",timhangmax(a));
	
	return 0;
}
