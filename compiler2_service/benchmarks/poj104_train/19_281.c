#define NUM_ITER 864215

#include <header.h>

int main_bench()
{
	int n=0,i,k,x,h=0;
	char a[100],b[10],c[10];
	gets(a);gets(b);gets(c);
	x=strlen(b);




	for(i=0;i<x;i++)
	{
		if(a[i]!=b[i])break;
		h++;
	}
	if(h==x)
	{
		for(i=0;i<x;i++)a[i]='0';
		n=1;
	}




	h=0;
	for(i=1;a[i+2]!='\0';i++)
	{
		h=0;
		if(a[i]==' ')
			for(k=0;k<x;k++)
			{
				if(a[i+k+1]!=b[k])break;
				h++;
			}
		if(h==x)
			for(k=0;k<x;k++)a[i+k+1]='0';
	}



	if(n)
	{
		my_printf("%s",c);
		for(i=x;a[i]!='\0';i++)
		{
		   if(a[i]>='A'&&a[i]<='z')my_printf("%c",a[i]);
		   else if(a[i]=='0')continue;
		   else 
		   {
			if(a[i]==' '&&a[i+1]=='0')my_printf(" %s",c);
			else my_printf(" ");
		   }
		}
	}



	else
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='z')my_printf("%c",a[i]);
		else if(a[i]=='0')continue;
		else
		{
			if(a[i]==' '&&a[i+1]=='0')my_printf(" %s",c);
			else my_printf(" ");
		}
	}
	return 0;
}
