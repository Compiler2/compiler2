#include <header.h>


int main_bench(){
      int year, month, day, i,count=0,x=0,y;
      int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      my_scanf("%d%d%d", &year, &month, &day);
      x=year%7+year/4-year/100+year/400;

	  for(i=1;i<month;i++)
		  x=x+mday[i-1];
	  x=x+day-1;

	  if(((year%4==0&&year%100!=0) || year%400==0 )&&(month<=2))
		  x=x-1;
	  y=x%7;
	  switch(y){
	  case 1:my_printf("Mon.\n");break;
		  case 2:my_printf("Tue.\n");break;
			  case 3:my_printf("Wed.\n");break;
				  case 4:my_printf("Thu.\n");break;
					  case 5:my_printf("Fri.\n");break;
						  case 6:my_printf("Sat.\n");break;
							  case 0:my_printf("Sun.\n");break;
	  
	  }
  
   return 0;
} 