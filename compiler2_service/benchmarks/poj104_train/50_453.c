#define NUM_ITER 854102

#include <header.h>

int main_bench()
{
	int w, A[12], i;
	int a;
	A[1]=12;
	A[2]=43;
	A[3]=71;
	A[4]=102;
	A[5]=132;
	A[6]=163;
	A[7]=193;
	A[8]=224;
    A[9]=255;
	A[10]=285;
	A[11]=316;
	A[12]=346;
	my_scanf("%d", &w);
	for(i=1;i<=12;i++)
	{
		a=(A[i]-7+w)%7;
        if(a==5)
		{
			my_printf("%d\n",i);
		}
	}
	return 0;
}