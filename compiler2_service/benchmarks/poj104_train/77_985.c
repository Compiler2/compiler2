#define NUM_ITER 1148347

#include <header.h>

int main_bench()
{
	char c[100];
	int boy[100]={0},girl[100]={0};
	int i,j,k=0,r;
    my_scanf("%s",c);
	r=strlen(c);
	for(i=0;i<r;i++)
	{
		if(c[i]!=c[0])
		{
			girl[k]=i;
            for(j=i-1;j>=0;j--)
			{
				if(c[j]==c[0])
				{
					boy[k]=j;
					break;
				}
			}
			c[j]='0';
			k++;
		}
	}
	for(i=0;i<k;i++)
		my_printf("%d %d\n",boy[i],girl[i]);
}