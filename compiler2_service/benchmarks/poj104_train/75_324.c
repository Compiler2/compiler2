#define NUM_ITER 17911

#include <header.h>

int main_bench()
{
	int intime[1000],outtime[1000],trs[1000],i,j,k,a,b,c,rs,maxrs=0;
	for(i=0;;i++)
	{
		my_scanf("%d",&intime[i]);
		if((c=getchar())!=',') break;
	}
	rs=i+1;
	for(i=0;;i++)
	{
		my_scanf("%d",&outtime[i]);
		if((c=getchar())!=',') break;
	}
	for(i=0;i<1000;i++)
		trs[i]=0;
	for(i=0;i<rs;i++)
		for(j=intime[i];j<outtime[i];j++)
		trs[j]++;
	for(i=0;i<1000;i++)
		if(trs[i]>maxrs) maxrs=trs[i];

	my_printf("%d %d",rs,maxrs);
}