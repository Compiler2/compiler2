#include <header.h>

char s[10010];
int main_bench()
{
	int a[26],i,n,j,x,t,flag;
	char ch,set[26];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
			a[j]=0;
		j=0;
		x=0;
		flag=0;
		while((ch=getchar())!='\n')
		{
			a[ch-'a']++;
			s[j++]=ch;
		}
		for(t=0;t<26;t++)
			if(a[t]==1)
				set[x++]=t+'a';
		if(x==0)
			my_printf("no\n");
		else
		{
			for(j=0;s[j];j++)
			{	
				for(x=0;set[x];x++)
					if(s[j]==set[x])
					{
						my_printf("%c\n",s[j]);
						flag=1;
						break;
					}
				if(flag)
					break;
			}
		}
	}
	return 0;
}
