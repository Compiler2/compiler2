#define NUM_ITER 926261

#include <header.h>

int main_bench()
{
	char s1[100]={0},s2[100]={100};
	int len1,len2,i,j,f[100]={0},flag;
	my_scanf("%s%s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1!=len2)
	{
		my_printf("NO");
		return 0;
	}
	for(i=0;i<len1;i++)
	{
		flag=0;
		for(j=0;j<len2;j++)
		{
			if(s2[j]==s1[i] && f[j]==0)
			{
				f[j]=1;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			my_printf("NO");
			return 0;
		}
	}
	my_printf("YES\n");
	return 0;
}