#define NUM_ITER 899701

#include <header.h>

int main_bench()
{
	int w,s[13];
	my_scanf("%d",&w);
	s[1]=(w+12)%7;
	s[2]=(s[1]+31)%7;
	s[3]=(s[2]+28)%7;
	s[4]=(s[3]+31)%7;
	s[5]=(s[4]+30)%7;
	s[6]=(s[5]+31)%7;
	s[7]=(s[6]+30)%7;
	s[8]=(s[7]+31)%7;
	s[9]=(s[8]+31)%7;
	s[10]=(s[9]+30)%7;
	s[11]=(s[10]+31)%7;
	s[12]=(s[11]+30)%7;
	for(int i=1;i<=12;i++)
	{
		if(s[i]==5)my_printf("%d\n",i);
	}
	return 0;
}