#include <stdio.h>
int main(){
	
	int n,i;
	printf("Nhap so chu so trong so nguyen N, vi du N=1234 thi co so chu so la 4\n");
	printf("Vay so chu so co trong so nguyen N la: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Hay nhap tung phan tu cua so N\n");
		scanf("%d",&a[i]);
	}
		printf("So cua ban muon nhap la N =  ");
	for (i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\nSo viet nguoc cua N la M = ");
	for (i=0;i<n/2;i++){
		int t =a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
		}
	for (i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
	
	}
