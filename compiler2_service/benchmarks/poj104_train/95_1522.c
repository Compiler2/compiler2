#define NUM_ITER 903963

#include <header.h>

int main_bench()
 {  int i=1,c=0;
	char a[82],b[82];
    gets(a);
	gets(b);
	for(i=0;i<=81;i++)
	{
		if(b[i]=='\0')
			break;
		else
		{	if(b[i]>='a'&&b[i]<='z')
				b[i]=b[i]-32;
           
		}
	}
	 for(i=0;i<=81;i++)
	{
		if(a[i]=='\0')
			break;
		else
		{	if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]-32;
           
		}
	}
	for(i=0;i<=81;i++)
	{
	if(a[i]=='\0')
			break;
	else	c+=a[i]-b[i];
	}
	if(c==0)
	my_printf("=");
   if(c>=1)
      	my_printf(">");
   if(c<=-1)
my_printf("<");
	 return 0; 
	
}