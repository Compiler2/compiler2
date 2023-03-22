#include <header.h>

int main_bench()
{
int n,i,j;
char c;
my_scanf("%d",&n);
c=getchar();
for(i=0;i<n;i++)
{
for(j=0;;j++)
{
c=getchar();
if(c=='A'){my_printf("T");continue;}
if(c=='C'){my_printf("G");continue;}
if(c=='T'){my_printf("A");continue;}
if(c=='G'){my_printf("C");continue;}
if(c=='\n'){my_printf("\n");break;}


}
}
}