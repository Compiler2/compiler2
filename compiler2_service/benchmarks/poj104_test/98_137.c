#include <header.h>



int main_bench()
{
	int n,i,m=0,j=0;
	int a[10000];
	char word[10000][40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",word[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(word[i]);
	for(i=0,m=a[0]+1;i<n;)
	{m=m+a[i+1]+1;
    if(m>81)
	{my_printf("%s\n",word[i]);
	m=a[i+1]+1;i++;continue;}
	else if(m==81)
	{my_printf("%s%c",word[i],(i<n-1)?' ': '\n');
	my_printf("%s\n",word[i+1]);
	m=a[i+2]+1;
	i=i+2;
	continue;}
	else if(m==80)
	{my_printf("%s%c",word[i],(i<n-1)?' ':'\n');
	my_printf("%s\n",word[i+1]);
    m=a[i+2]+1;
	i=i+2;continue;
	}
	else
	{my_printf("%s%c",word[i],(i<n-1)?' ': '\n');
	i++;
	}
	}
return 0;
}
	
	
	