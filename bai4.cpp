#include <stdio.h>
int main()
{
printf("Nhap vao hai so a,b\n");
int a,b,tg;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
tg=a;
a=b;
b=tg;
printf("a= %d \n",a);
printf("b= %d \n",b);
}
