#define NUM_ITER 35590

#include <header.h>

int main_bench()
{
	int sz1[200],sz2[200],n,a=0,b=0,c=0;
    my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{my_scanf("%d%d",&(sz1[i]),&(sz2[i]));}
    for(int k=0;k<n;k++)
{	if(((sz1[k]-sz2[k])==1)||((sz2[k]-sz1[k])==2))
	{b++;}
    else if(((sz2[k]-sz1[k])==1)||((sz1[k]-sz2[k])==2))
	{a++;}
    else if(sz2[k]==sz1[k])
	{c++;}
}
	if(a>b)
	{my_printf("A");}
    if(b>a)
    {my_printf("B");}
    if(a==b)
    {my_printf("Tie");}
	return 0;
}

