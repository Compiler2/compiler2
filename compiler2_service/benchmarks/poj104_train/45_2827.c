#include <header.h>


int main_bench()
{
	char a[50],b[50];
	int i,j=0,la,lb,p;
	my_scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<lb;i++)
	{
		if(a[j]==b[i])
		{
			if(j==la-1)  break;
			j++;
		}
		else
		{
			j=0;
		}
	}
	p=i-la+1;
	my_printf("%d", p);
}