#define NUM_ITER 881546

#include <header.h>

int main_bench()
{
	char s[2][501];
	double n;
	double sum=0,x,Len;
	int len,i,len2,j;
	my_scanf("%lf",&n);
	my_scanf("%s%s",s[0],s[1]);
	len=strlen(s[0]);
	len2=strlen(s[1]);
	if(len!=len2) 
	{
		my_printf("error");
		return 0;
	}
	else
	{
		for(i=0;i<2;i++){
			for(j=0;j<len;j++){
				if(s[i][j]!='A'&&s[i][j]!='T'&&s[i][j]!='G'&&s[i][j]!='C')
				{
					my_printf("error");
					return 0;
				}
				else continue;
			}
		}
	}


	for(i=0;i<len;i++)
	{
		if(s[0][i]==s[1][i]) sum=sum+1;
	}
	Len=(double)len;
	x=sum/Len;
	if(x>=n)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}
