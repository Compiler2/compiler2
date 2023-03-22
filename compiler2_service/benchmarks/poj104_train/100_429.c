#include <header.h>

int main_bench()
{
	char a[301],c;
	int t[26]={0},n,i,j,b=0;
	my_scanf("%s",a);
	n=strlen(a);
	c='a';
	for(i=0;i<n;i++)
	{
        for(j=0;j<26;j++)
		{
			if(a[i]==(char)(c+j))
			{
				t[j]+=1;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(t[i]!=0)
		{
			my_printf("%c=%d\n",(char)(c+i),t[i]);
		}
		else{b++;}
	}
	if(b==26)
	{
		my_printf("No");
	}
	return 0;
}
