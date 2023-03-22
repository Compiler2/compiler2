#include <header.h>

int main_bench(){
	char a[1000];
	int i,j,k,n;
	gets(a);
	my_printf("%c",a[0]);
	for(i=1;a[i];i++)
	{
		if(a[i]!=' ')
		my_printf("%c",a[i]);
		else if(a[i]==' ')
		{
			if(a[i-1]!=' ')
		    {
		       my_printf("%c",a[i]);
		     }
	
	    }
	}

		return 0;
}