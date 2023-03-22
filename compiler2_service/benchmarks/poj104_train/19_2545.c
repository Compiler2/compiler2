#define NUM_ITER 811346

#include <header.h>

int main_bench()
{
    char a[100],b[100],c[100],d[100];
    int i,j,k;
    gets(a);
    gets(b);
    gets(c);
    k=strlen(a);
	for(i=0;i<k;i++)
    {
        j=0;
        while(a[i]!=' '&& a[i]!='\0')
        d[j++]=a[i++];
        d[j]='\0';
        if(strcmp(b,d)==0)
		{
			my_printf("%s",c);
		}
        else
        {
			my_printf("%s",d);
        }
		if(i==k)
		{
			my_printf("\0");
		}
		else 
		{
			my_printf(" ");
		}
	}
	return 0;
}
