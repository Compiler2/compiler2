#define NUM_ITER 1324579

#include <header.h>

int main_bench()
{
unsigned int  year,month,date,a,b;
my_scanf("%d %d %d",&year,&month,&date);
a=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;
switch(month)
	{  
           case 2:
           case 3:a+=3;break;
           case 4:a+=6;break;
	  case 5:a+=8;break;		
	  case 6:a+=11;break;       
	  case 7:a+=13;break;
	  case 8:a+=16;break;
	  case 9:a+=19;break;
	  case 10:a+=21;break;
	  case 11:a+=24;break;
	  case 12:a+=26; break;
	}
if ( month>=3 && ((year%4==0&&year%100!=0) || year%400==0) ) a+=1;

a+=date;
b=a%7;

switch(b)
	{
      case 1 :my_printf("Mon.\n");break;
	  case 2 :my_printf("Tue.\n");break;
	  case 3 :my_printf("Wed.\n");break;
	  case 4 :my_printf("Thu.\n");break;
	  case 5 :my_printf("Fri.\n");break;
	  case 6 :my_printf("Sat.\n");break;
	  case 0 :my_printf("Sun.\n");break;
	}
return 0;
}

