#define NUM_ITER 271270

#include <header.h>

int main_bench()
{
	char str1[1000];
	char str2[27]="abcdefghijklmnopqrstuvwxyz";
	int sz[26];
	int i,j,exist=0;
	my_scanf("%s",str1);
for(i=0;i<26;i++)
{
sz[i]=0;
}
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i]==str2[j])
			{
				sz[j]+=1;
				exist=1;
			}
		}
	}
	if(exist==0)
	{
		my_printf("No");
	}
	else if(exist==1)
	{
		for(i=0;str2[i]!='\0';i++)
		{
			if(sz[i]!=0)
			{
				my_printf("%c=%d\n",str2[i],sz[i]);
			}
		}
	}
	return 0;
}