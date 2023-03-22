#include <header.h>

int main_bench()
{
int n,i,sum=0,len=0;
char word[40];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%s",word);
len=strlen(word);
if(len+sum>80)
{
 my_printf("\n");
 my_printf("%s",word);
 sum=len;
}
else 
{ if(sum==0)
 {my_printf("%s",word);
 sum=sum+len;}
 else
{ sum=sum+len+1;
  if(sum>80)
 {my_printf("\n");
 my_printf("%s",word);
 sum=len;}
else
my_printf(" %s",word);
}}
}
return 0;
}
