#define NUM_ITER 970394

#include <header.h>

int main_bench()
{
	int i, j, k;
	char a[81], b[81];
gets(a);
gets(b);
for(i=0;a[i];i++)
{
	if(a[i]>='A'&&a[i]<='Z')
	{
		a[i]=a[i]-'A'+'a';
	}
}
for(i=0;b[i];i++)
{

	if(b[i]>='A'&&b[i]<='Z')
	{
		b[i]=b[i]-'A'+'a';
	}
}

k=strcmp(a,b);
if(k>0)
{
	my_printf(">");
}
else if(k<0)
{

	my_printf("<");
}
else
{
	my_printf("=");

}
return 0;
}