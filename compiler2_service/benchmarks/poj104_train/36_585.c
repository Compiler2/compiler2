#define NUM_ITER 899561

#include <header.h>

void paixu(char s[])
{
	int i,j,t,n;
	n=strlen(s);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(s[j]<s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
}
main_bench()
{
	char a[100],b[100];
	int i,j,la,lb,k;
	my_scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
		paixu(a);
	   paixu(b);
	   k=strcmp(a,b);
	   if(k==0)
	   my_printf("YES");
	   else my_printf("NO");
	
}