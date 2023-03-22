#define NUM_ITER 808699

#include <header.h>

char s[101],a[101],b[101],temp[101];
void judge(void)
{
	if(strcmp(temp,a)==0)
	{
		my_printf("%s",b);
	}
	else
	{
		my_printf("%s",temp);
	}
}
void check(void)
{
	int i,n=strlen(s),p=0,j;
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			temp[p]=s[i];
			p++;
		}
		else
		{
			temp[p+1]='\0';
			judge();
			my_printf(" ");
			for(j=0;j<p+2;j++)
				temp[j]=0;
			p=0;
		}
	}
	temp[p+1]='\0';
	judge();
}
int main_bench()
{
	gets(s);
	gets(a);
	gets(b);
	check();
	my_printf("\n");
	return 0;
}