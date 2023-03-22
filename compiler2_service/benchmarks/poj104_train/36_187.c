#define NUM_ITER 1032453

#include <header.h>

int length;
int tj(char str[],char x)
{	int i,count=0;
	for(i=0;i<length;i++)
		if(x==str[i]) count++;
	return(count);
}
int main_bench()
{	int i,p=1;
    char a[100],b[100];
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b)) p=0;
	else
	{length=strlen(a);
	for(i=0;i<length;i++)
		if(tj(a,a[i])!=tj(b,a[i]))
		{p=0;break;
		}
	}
	if(p==1) my_printf("YES\n");
	else my_printf("NO\n");
}