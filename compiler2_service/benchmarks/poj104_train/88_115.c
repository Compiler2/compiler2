#define NUM_ITER 1285878

#include <header.h>

int main_bench()
{
	char s[100],a[100];
	int nege,deci,k,i,r,x;
	gets(s);
	x=strlen(s);
	nege=1;
	deci=1;
	r=-1;
	for (i=0;i<=x;i++)
	{	
		if (s[i]=='-') nege=0;
		if (s[i]=='.'&&r>-1) deci=0;
		if (!((s[i]<='9'&&s[i]>='0')||(s[i]=='-')||(s[i]=='.'))) 
		{
			nege=1;
			deci=1;
			r=-1;
		}
		if ((s[i]<='9'&&s[i]>='0')&&(nege&&deci))
		{
			r++;
			a[r]=s[i];
			if (!((s[i+1]<='9'&&s[i+1]>='0')||(s[i+1]=='.')))
			{
				if (r==0) my_printf("%c\n",a[0]);
				else
				{
					k=-1;
					do
					{
						k++;
					}
					while (a[k]=='0');
					for(;k<=r;k++)
						my_printf("%c",a[k]);
					my_printf("\n");
					nege=1;
					deci=1;
					r=-1;
				}
			}
		}
	}
	return 0;
}