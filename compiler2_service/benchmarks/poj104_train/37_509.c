#define NUM_ITER 9586

#include <header.h>

int main_bench()
{
	char a[100000];
	int t,i,b[26],len,flag=0;
	my_scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<26;i++)
		{
			b[i]=0;
		}
		my_scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			b[a[i]-'a']++;
		}
		for(i=0;i<len;i++)
		{
			if(b[a[i]-'a']==1)
			{
				flag=1;
				my_printf("%c\n",a[i]);
				break;
			}
		}
		if(flag==0)
		{
			my_printf("no\n");
		}
		flag=0;
	}
}