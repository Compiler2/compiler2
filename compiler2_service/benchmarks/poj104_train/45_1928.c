#define NUM_ITER 1056686

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int i,j,p,sLen,wLen,test=0;
	my_scanf("%s%s",s,w);
	sLen=strlen(s);
	wLen=strlen(w);

	for(j=0;j<wLen;j++)
	{
		p=j;
		if(s[0]==w[j])
		{
			for(i=1;i<sLen;i++,p++)
			{
				if(s[i]!=w[p+1])
				{
					break;
				}
				if(i==sLen-1)
				{
					my_printf("%d\n",j);
					test=1;
					break;
				}
			}
		}
		if(test==1)
		{
			break;
		}

	}
	return 0;
}