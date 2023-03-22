#include <header.h>

int main_bench()
{
	char first[50],second[50];
	char *p,*q;
	int i,court;
	p=first;
	q=second;
	my_scanf("%s %s",p,q);
	for(i=0;*q!='\0';i++,q++)
	{
		if(*q==*p)
			p++;
		else
			p=first;
		if(*p=='\0')
		{
            court=i;
			break;
		}
	}
	my_printf("%d\n",court-strlen(first)+1);
	return 0;
}