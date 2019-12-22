#include<stdio.h>
int Fibonacci(int n)
{
	if(n<2){
		return 1;
	}

	int x1=1, x2=1,x3;
	for(int i=3;i<=n;i++)
	{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	
	}
	return x3;
}


int main()
{

	
	printf (" so thu trong day fibonacci la: %d", Fibonacci(5));
	
	return 0;
}
