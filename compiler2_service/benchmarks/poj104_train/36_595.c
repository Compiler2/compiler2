#define NUM_ITER 971889

#include <header.h>

int main_bench()
{
	char a[50],b[50],c;
	int i,j=0,l1,l2;
	my_scanf("%s%s",a,b);
	l1=strlen(a);l2=strlen(b);
	if(l1!=l2)my_printf("NO");
	else if(l1==l2)
	{
	for(j=0;j<l1;j++)
		for(i=j;i<l2;i++)
	{   
		if(a[j]==b[i])
		{c=b[i];
		b[i]=b[j];
		b[j]=c;  
		}
		
	
		
	}
	if(strcmp(a,b)==0)
		my_printf("YES");
	else my_printf("NO");
	}
}