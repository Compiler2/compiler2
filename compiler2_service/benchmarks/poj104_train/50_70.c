#define NUM_ITER 553990

#include <header.h>

int main_bench()
{
 int s=0,w,m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 my_scanf("%d",&w);
 int i,j;
 if(w==7)
	my_printf("1\n");
 for(i=1;i<12;i++)
 {
 for(j=0;j<i;j++)
 {
 s=s+m[j];}
 s=s+13;
 if((s+w-1)%7==5)
	{ my_printf("%d\n",i+1);}
 s=0;}
	return 0;
}