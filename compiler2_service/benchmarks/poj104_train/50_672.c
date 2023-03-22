#include <header.h>

int main_bench()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={0};
	int w,k;
	my_scanf("%d",&w);
	w+=12;
	for(int j=0;j<12;j++)
	{   
		if(w%7==5)
		{
			my_printf("%d\n",j+1);
		}
		w+=a[j];
	}
	    
	return 0;
}

