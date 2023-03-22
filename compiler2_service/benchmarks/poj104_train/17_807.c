#define NUM_ITER 14016

#include <header.h>

int main_bench()
{
	int n,a;
	my_scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	char s[101];
	my_scanf("%s",s);
	int left[101]={0},right[101]={0},i,l=0,r=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='(')
		{
			left[l++]=i+1;
		}
		else
		{
			if(s[i]==')')
			{
				if(l!=0)
				{
					l--;
					left[l]=0;
				}
				else
				{
					right[r++]=i+1;
				}
			}
		}
	}
	int le=0,ri=0;
	my_printf("%s\n",s);
	for(i=0;i<strlen(s);i++)
	{
		if(left[le]==i+1)
		{
			my_printf("$");
			le++;
		}
		else
		{
			if(right[ri]==i+1)
			{
				my_printf("?");
				ri++;
			}
			else
			{
				my_printf(" ");
			}
		}
	}
	my_printf("\n");
	}
	return 0;
}