#define NUM_ITER 922459

#include <header.h>


int main_bench()
{
	int i,j;
	char a[80],b[80],c[80],d[80];
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			c[i]=a[i]-32;
		}
		else c[i]=a[i];
	}
	c[i]='\0';
	for(j=0;b[j]!='\0';j++)
	{
		if(b[j]>='a'&&b[j]<='z')
		{
			d[j]=b[j]-32;
		}
		else d[j]=b[j];
	}
	d[j]='\0';
	if(strcmp(c,d)==0) my_printf("=");
	if(strcmp(c,d)>0) my_printf(">");
	if(strcmp(c,d)<0) my_printf("<"); 
	return 0;
}