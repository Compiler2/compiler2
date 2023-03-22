#define NUM_ITER 17659

#include <header.h>

int main_bench()
{
	int h,i,j,k,l,m,n,len,left=0,t=0,c[101]={0};
	char a[101],b[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int c[101]={0};
		left=0;
		t=0;
		my_scanf("%s",a);
		len=strlen(a);
		for(j=0;j<len;j++)
			b[j]=' ';
		b[len]='\0';
		for(j=0;j<len;j++)
		{
			if(a[j]!='('&&a[j]!=')')
				b[j]=' ';
			if(a[j]=='(')
			{
				left++;
				b[j]='$';
				c[t]=j;
				t++;
			}
			if(a[j]==')')
			{
				if(left==0)
				{
					b[j]='?';
				}
				else
				{
					t--;
					b[c[t]]=' ';
					left--;
				}
			}
			
		}
		my_printf("%s\n",a);
		for(h=0;h<len;h++)
		{
			my_printf("%c",b[h]);
		}
		my_printf("\n");
	}
	return 0;
}

			

