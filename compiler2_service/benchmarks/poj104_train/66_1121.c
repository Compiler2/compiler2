#define NUM_ITER 1088063

#include <header.h>



int week (int y,int m,int d) 
{ 
 int w; 
 if((m==1)||(m==2)) 
 { 
  y--; 
  m+=12; 
 } 
 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7; 
 return (w); 
}

int main_bench()
{
	int y,m,d;
	char month[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	my_scanf("%d%d%d",&y,&m,&d);
	my_printf("%s",month[week(y,m,d)]);
	return 0;
}