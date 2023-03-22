#include <header.h>

  int main_bench()
  {
	  int year,month,monthd[12]={31,28,31,30,31,30,31,31,30,31,30,31},day,di=0,i;
	  my_scanf("%d %d %d",&year,&month,&day);
	  for(i=1;i<month;i++)
	  { 
		  di=di+monthd[i-1];
	  }
	  di=di+day;
	  if((year%4)!=0||(year%400)!=0)
	  {
		  my_printf("%d\n",di);
	  }
	  else
		  my_printf("%d",di+1);
	  return 0;
  }