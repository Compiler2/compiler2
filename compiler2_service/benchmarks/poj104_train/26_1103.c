#include <header.h>

int main_bench()
{
    char a[101];
    int i,t;
    gets(a);
    t=1;
    for(i=0;a[i]!='\0';i++)
    {	
	if(a[i]==' ')
	{
	    if(t==1)
	    {
		my_printf(" ");
		t++;
	    }
	}
	else
	{
	    my_printf("%c",a[i]);
	    t=1;
	}
    }
	return 0;
}

