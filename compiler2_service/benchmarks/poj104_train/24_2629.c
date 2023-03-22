#define NUM_ITER 30834

#include <header.h>

int main_bench()
{
	char s[200][100]={""};
	int n,i,len[200]={0},*p,*max,*min;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&s[i]);
		len[i]=strlen(s[i]);
	}
	p=&len[0];
	max=&len[0];
	min=&len[0];
    for(i=0;i<n;i++)
    {
		if(*(p+i)>*max)
			max=p+i;
		else if(*(p+i)<*min)
			min=p+i;
	}
		for(i=0;i<n;i++)
		{
			if(*(p+i)==*max)
			{
				my_printf("%s\n",s[i]);
				break;
			}
		}

		for(i=0;i<n;i++)
		{
			if(*(p+i)==*min)
			{
				my_printf("%s",s[i]);
				break;
			}
		}


	return 0;
}