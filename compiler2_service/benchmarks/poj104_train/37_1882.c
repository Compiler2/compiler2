#define NUM_ITER 15550

#include <header.h>

int main_bench()
{
	int n,m,i,a,j,b[27],fl;
	char s[1000001],c[27];
	my_scanf("%d",&n);
	while(n>0)
	{
		my_scanf("%s",s);
		a=strlen(s);
		for(i=0;i<27;i++)
		b[i]=1;
		for(i=0,j=0;i<a;i++){
			if(s[i]=='0')
			continue;
			else
			{
				c[j]=s[i];
				for(m=i+1;m<a;m++)
				{
					if(s[m]==s[i])
					{
						s[m]='0';
						b[j]++;
					}
				}
				j++;
			}
		}
		for(i=0,fl=0;i<j;i++)
		{
			if(b[i]==1)
			{
				my_printf("%c\n",c[i]);
				fl++;
				break;
			}	
		}
		if(fl==0)
			my_printf("no\n");
			n--;
	}
} 