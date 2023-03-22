#define NUM_ITER 893154

#include <header.h>

int main_bench()
{
	char s1[260],s2[260],s3[260];
	int i,j,a=0,b,c,d;
	gets(s1);
	gets(s2);
	gets(s3);
	c=strlen(s2);
	d=strlen(s1);
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]==s2[0])
		{
			for(j=0;s2[j]!=0;j++)
			{
				if(s1[j+i]==s2[j])
				{
					a=1;
				}
				else
				{
					a=0;
					break;
				}
			}
		}
		if(a==1)
		{
			b=i;
			break;
		}
	}
	if(a==1)
	{
			for(i=0;i<b;i++)
			{
				my_printf("%c",s1[i]);
			}
	        for(i=0;s3[i]!=0;i++)
			{
		        my_printf("%c",s3[i]);
			}
	        for(i=0;i<d-b-c;i++)
			{
				my_printf("%c",s1[i+c+b]);
			}
	}
	else
	{
		my_printf("%s",s1);
	}
	return 0;
}
