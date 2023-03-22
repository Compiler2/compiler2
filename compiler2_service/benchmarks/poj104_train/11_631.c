#define NUM_ITER 321412

#include <header.h>


int main_bench()
{			
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31,30,31};
	int y,m,d,i,c;
	my_scanf("%d%d%d",&y,&m,&d);
	if((y%4==0)&&(y%100!=0)||(y%400)==0)
	{
		days[2]++;
	}
	c=d;
	for(i=1;i<m;i++)
	{
		c+=days[i];
	}
	my_printf("%d",c);
	return 0;
}