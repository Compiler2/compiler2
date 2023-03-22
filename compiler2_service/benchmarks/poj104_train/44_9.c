#define NUM_ITER 244825

#include <header.h>

int reverse(char*);
int main_bench()
{
	int i;
	char a[6][10];
    for(i=0;i<6;i++)
	{
		my_scanf("%s",a[i]);
	}
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",reverse(a[i]));
	}
	return 0;
}
int reverse(char* n)
{
    char a[10],b[10],c[10];
	int m,i;
	strcpy(a,n);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
        b[i]=a[m-i-1];
	}
	b[m]='\0';
	if(b[m-1]=='-')
	{
		c[0]='-';
		for(i=1;i<m;i++)
		{
			c[i]=b[i-1];
		}
		c[m]='\0';
	}
	else
		strcpy(c,b);
	return atoi(c);
}