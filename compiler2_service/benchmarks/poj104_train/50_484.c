#define NUM_ITER 790549

#include <header.h>



int main_bench()
{
	int w,i;
	int a[12]={12,31,28,31,30,31,30,31,31,30,31,30};
	my_scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		w=(a[i]+w)%7;
		if(w==5){
			my_printf("%d\n",(i+1));
		}
	}
	return 0;	


}
