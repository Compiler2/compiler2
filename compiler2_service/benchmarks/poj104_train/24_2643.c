#include <header.h>

int main_bench()
{
	char s[200][100]={'\0'},*ps;
	int n,i,max=0,t[200]={0},min=1000,*p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",*(s+i));
	for(i=0;i<n;i++)
		t[i]=strlen(*(s+i));
	for(i=0;i<n;i++)
	{
		if(*(t+i)>max)
			max=*(t+i);
		if(*(t+i)<min)
			min=*(t+i);
	}
	for(i=0;i<n;i++)
		if(t[i]==max)
		{
			my_printf("%s\n",s[i]);
			break;
		}
	for(i=0;i<n;i++)
		if(t[i]==min)
		{
			my_printf("%s",s[i]);
			break;
		}
}
