#define NUM_ITER 25397

#include <header.h>

int main_bench()
{
int n,i;
my_scanf("%d",&n);
for(i=0;i<=n;i++)
{
     char s[500],t[500];
     int j=0,l,n;
	 gets(s);
	 for(j=0,l=0;s[j]!='\0';j++)
	 {
	        if(s[j]=='A')
			{
			   t[j]='T';
			}
			else if(s[j]=='T')
			{
			   t[j]='A';
			}
			else if(s[j]=='C')
			{
			   t[j]='G';
			}
			else if(s[j]=='G')
			{
			   t[j]='C';
			}
			l++;
	 }
	 for(n=0;n<l-1;n++)
	 {
	 	my_printf("%c",t[n]);
	 }
	my_printf("%c\n",t[l-1]);
}
return 0;

}