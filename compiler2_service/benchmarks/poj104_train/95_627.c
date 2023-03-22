#define NUM_ITER 1040223

#include <header.h>

char change(char a)
{
	if(a>='a'&&a<='z')
		a=a-'a'+'A';
	return a;
}
int main_bench()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int a1=strlen(a);
    int a2=strlen(b);
    int i=0;
    while(i<a1&&i<a2)
    {
    	a[i]=change(a[i]);
    	b[i]=change(b[i]);
    	if(a[i]<b[i])
    	{
    		my_printf("<\n");
    		break;
    	}
    	if(a[i]>b[i])
    	{
    		my_printf(">\n");
    		break;
    	}
    	i++;
    }
    if(i==a1&&i!=a2)    		my_printf("<\n");
    if(i==a2&&i!=a1)    		my_printf(">\n");
    if(i==a1&&i==a2)     		my_printf("=\n");
    return 0;
}