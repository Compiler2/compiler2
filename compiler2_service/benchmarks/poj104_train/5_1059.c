#define NUM_ITER 786294

#include <header.h>

int main_bench()
{
	int i;
	double a,len,cd,s=0,b=0,c;
	char s1[501],s2[501];
	my_scanf("%lf",&a);
	my_scanf("%s%s",&s1,&s2);
	len=strlen(s1);
	cd=strlen(s2);
	if(len!=cd)
	{
		my_printf("error");
	}
	if(len==cd)
	{
		for(i=0;i<len;i++)
		{
			if((s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')&&(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G'))
			{
				b++;
				if(s1[i]==s2[i])
				{
					s++;
				}
			}
		}
		if(b==len)
		{
			c=s/len;
			if(c>a)
			{
				my_printf("yes");
			}
			else
			{
				my_printf("no");
			}
		}
		if(b!=len)
		{
			my_printf("error");
		}
	}
	return 0;
}
			

