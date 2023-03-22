#define NUM_ITER 125002

#include <header.h>

int main_bench()
{
	int a[500]={0},m,n,i,l,q,max=0;
	char s[501],b[500][5]={0};
	my_scanf("%d\n",&n);
	gets(s);
	l=strlen(s);
	for(m=0;m<l-1;m++)
	for(i=0;i<n;i++)
	b[m][i]=s[m+i];
	for(m=0;m<l-1;m++)
	{
		a[m]=1;
	    for(q=m+1;q<l-1;q++)
	    {
		   if(strcmp(b[m],b[q])==0)  
		   {
			  a[m]=a[m]+1;
		   }
	    }
	    if(a[m]>max) max=a[m];
    }
    if(max==1) my_printf("NO");
    if(max!=1) my_printf("%d\n",max);
    for(m=0;m<l-2;m++)
    {
    	if(a[m]==max&&max!=1) 
		 my_printf("%s\n",b[m]);
    }
    
}
