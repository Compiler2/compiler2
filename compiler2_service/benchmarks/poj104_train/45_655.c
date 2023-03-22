#define NUM_ITER 1025759

#include <header.h>

int main_bench()
{
	char s[51],w[51],x[51];
	int i,j,k,a,b;
	my_scanf("%s%s",s,w);
	a=strlen(s);
	b=strlen(w);
	for(i=0;i<=b-a;i++)
	{
		if(w[i]==s[0])
		{
			for(j=i,k=0;w[j]==s[k]&&k<a;)
			{
				j++;
				k++;
			}
			if(k==a)
			{
				my_printf("%d\n",i);
				break;
			}
		}
	}
}