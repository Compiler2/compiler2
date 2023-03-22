#define NUM_ITER 188180

#include <header.h>

int main_bench()
{
    char ch[350];
	int i,j,n;
	int a[123];
	my_scanf("%s",ch);
	n=strlen(ch);
    
	for(i=0;i<123;i++)
		a[i]=0;
	for(i=0;i<n;i++)
		if((ch[i]>64)&&(ch[i]<123))
		  a[ch[i]]++;
    
    j=1;
    for(i=65;i<=90;i++)
		if(a[i]>0)
		{
		  my_printf("%c=%d\n",i,a[i]);
		  j=0;
		}
    for(i=97;i<=122;i++)
		if(a[i]>0)
		{
		  my_printf("%c=%d\n",i,a[i]);
		  j=0;
		}
    if(j)
		my_printf("No");
		
	return 0;
}
