#define NUM_ITER 28994

#include <header.h>

int main_bench()
{
 int n,i,j;
 char a[1000][255];
my_scanf("%d",&n);
 for(i=0;i<n;i++)
{
 my_scanf("%s",a[i]);
for(j=0;a[i][j]!='\0';j++)
{
  if(a[i][j]=='A')
  my_printf("%c",'T');
if(a[i][j]=='T')
  my_printf("%c",'A');
  else if(a[i][j]=='G')
  my_printf("%c",'C');
 else  if(a[i][j]=='C')
  my_printf("%c",'G');
 
}my_printf("\n");
 }
return 0;
}

  
 

 
