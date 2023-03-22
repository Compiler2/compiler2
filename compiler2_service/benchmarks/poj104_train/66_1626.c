#include <header.h>

int main_bench()
{
	int i,j,k,t,w,ye,da,mo,re;
	my_scanf("%d %d %d",&ye,&mo,&da);
	ye=ye%2800;
	k=ye/400;
	j=ye%400;
	if(mo==1||mo==2)
	{
		mo=mo+12;
		ye=ye-1;
	}
	w = (da+1 + 2*mo + 3*(mo+1)/5 + ye + ye/4 - ye/100 + ye/400)%7;

 switch(w)
 {
 case 0: 
  my_printf("Sun.\n");
  break;
 case 1:
  my_printf("Mon.\n");
  break;
 case 2:
  my_printf("Tue.\n");
  break;
 case 3:
  my_printf("Wed.\n");
  break;
 case 4:
  my_printf("Thu.\n");
  break;
 case 5:
  my_printf("Fri.\n");
  break;
 case 6:
  my_printf("Sat.\n");
  break; 
 }
return 0;	
}