#define NUM_ITER 327561

#include <header.h>


int main_bench()
{
	int a,b,c,i,s1=0,s2;
    int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d%d%d",&a,&b,&c);
    if(a%400==0 || (a%4==0 && a%100!=0))	
		n[1]=29;
	for(i=1;i<b;i++)	
		s1=s1+n[i-1];
	s2=s1+c;
	my_printf("%d\n",s2);
	return 0;
}