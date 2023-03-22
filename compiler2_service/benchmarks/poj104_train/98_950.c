#include <header.h>

int main_bench()
{char s[43];
int m,n,sum=0,i,k;
char *p=s;
my_scanf("%d\n",&n);
my_scanf("%s",s);
my_printf("%s",s);
sum=strlen(s);
for(i=2;i<=n;i++)
   {my_scanf("%s",s);
   m=strlen(s);
   sum=sum+m+1;
   if(sum<=80)
      {my_printf(" %s",s);
			}
	else
	{my_printf("\n%s",s);
	sum=strlen(s);}
	for(k=0;k<=41;k++)
	{*p='\0';
	p=p+1;}
	p=s;
   }
  return 0;
}