#include <stdio.h>

int main (){
	int day,month,year,ngaythu;
	printf("Nhap vao ngay thang\n");
	printf("day=");
	scanf("%d", &day);
	printf("month=");
	scanf("%d", &month);
		switch (month)
  {
    	case 1:
  		ngaythu=day;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 2:
  		ngaythu=day+31;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 3:
		ngaythu=day + 31+28 ;
		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
		case 4:
		ngaythu=day + 31+28+31 ;
		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 5:
		ngaythu=day + 31+28+31+30 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 6:
		ngaythu=day + 31+28+31+30+31 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 7:
		ngaythu=day + 31+28+31+30+31+30 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 8:
		ngaythu=day + 31+28+31+30+31+30+31 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 9:
		ngaythu=day + 31+28+31+30+31+30+31+31 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 10:
		ngaythu=day + 31+28+31+30+31+30+31+31+30 ;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 11:
		ngaythu=day + 31+28+31+30+31+30+31+31+30+31;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
  		case 12:
		ngaythu=day + 31+28+31+30+31+30+31+31+30+31+30;
  		printf("hom nay la ngay thu %d trong nam",ngaythu);break;
			
	}
	int x=ngaythu%7;
	switch(x)
	{
	case 1:
		printf(" va la thu hai \n");
		break;
	case 2:
		printf(" va la thu ba \n");
		break;
	case 3:
			printf(" va la thu tu \n");
			break;
	case 4:
			printf(" va la thu nam\n ");
			break;
	case 5:
			printf(" va la thu sau \n");
			break;
	case 6:
			printf(" va la thu bay \n");
			break;
	case 7:
			printf(" va la thu chu nhat \n");
			break;
	default:
		printf("khong phai la thu trong tuan\n");
		break;
}
    	
   return 0;
   }

