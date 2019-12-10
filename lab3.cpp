#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
printf("Nhap vao 3 so\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c&&a+c>b&&b+c>a){
int cv= a+b+c;
float cv2= (float)cv/2;
float s= sqrt(cv2*(cv2-a)*(cv2-b)*(cv2-c));
printf ("chu vi hinh tam giac la: %d\n",cv);
printf ("dien tich hinh tam giac la: %f",s);
}else {
printf("khong phai la 3 canh hinh tam giac");
}
return 0;
}
