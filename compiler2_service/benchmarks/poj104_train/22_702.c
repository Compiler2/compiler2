#define NUM_ITER 44515

#include <header.h>


int main_bench()
{
	int S[300],a,b,c,i,j,k;
	for(i=0;i<300;i++)
		{
			my_scanf("%d",&S[i]);
			if (getchar()=='\n')
				break;
		};

	for(j=i+1;j<300;j++)
		{
			S[j]=S[j-1];
		}
	b=S[0];
	a=-32768;
	c=S[0];
	for(k=0;k<300;k++)
		{
		if(S[k]>b)
			{
			a=b;
			b=S[k];
			}
		if(S[k]<c)
			c=S[k];
		if(S[k]<b && a<S[k])
			a=S[k];
		}
	if (b!=c&&i!=0)
		my_printf("%d\n",a);
	else
		my_printf("No");
	
	return 0;
	
}