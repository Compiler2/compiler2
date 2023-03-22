#define NUM_ITER 24296

#include <header.h>

int main_bench()
{
	char s[100005],*p,*q;
	int n,i,k,t;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		t=strlen(s);
		k=0;
		for(p=s;p<s+t&&k==0;p++)
		{
			k=1;
			if(*p!='0'&&*p!='\0')
			{
				q=p+1;
				while(q<s+t)
				{
					if(*q!=*p)
						q++;
					else 
					{
						*q='0';
						k=0;
						q++;
					}
				}
				if(k)
					my_printf("%c\n",*p);
			}
			else k=0;
		}
	}
		if(k==0)
			my_printf("no");
}