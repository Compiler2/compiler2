#define NUM_ITER 1063730

#include <header.h>



int main_bench()
{
int len,i,P=0;
int panel=0;
char a[100];
int b[100];
int p[100];

my_scanf("%s",a);
len=strlen(a);

for(i=0;i<=len-1;i++)
                   {
                   b[i]=a[i]-'0';
                   
                   }
for(i=0;i<=len-1;i++)
                   {
                   panel=10*panel+b[i];
                   p[i]=panel/13;
                   if(p[i]!=0)
                   P=1;
                   panel=panel-p[i]*13;
                   if(P==0)
                              continue;
                   else
                       my_printf("%d",p[i]);
                   }
if(P==0)
my_printf("0");
my_printf("\n%d",panel);

}
