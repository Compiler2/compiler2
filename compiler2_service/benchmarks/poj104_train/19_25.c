#define NUM_ITER 838795

#include <header.h>


int main_bench()
{
	char s[100],a[100],b[100];
	gets(s);
	gets(a);
	gets(b);

	int i,j,k,ls,la,lb,r;
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<ls;i++)
	{
		if(s[i]==a[0] && (s[i-1]==32 || i==0) 			&& (s[i+la]==32 || i==ls-1))
		{
			r=1;
			for(k=i,j=0;j<la;j++,k++)
			{
				
				if(s[k]!=a[j])
				{
					r=0;
					break;
				}
			}
			if(r==1)
			{
				for(k=0;k<lb;k++)
				{
					my_printf("%c",b[k]);
				}
					i=i+la-1;
					r=0;
					
				
			}
		}
		else
		{
			my_printf("%c",s[i]);
		}
	}

	return 0;
}