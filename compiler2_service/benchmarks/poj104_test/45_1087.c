#include <header.h>

int main_bench()
{
int  j,n,len2;
char a[100],b[100];     
my_scanf("%s %s",a,b);

len2=strlen(b);

for(j=0;j<len2;j++)
  {
if(a[0]==b[j]&&a[1]==b[j+1]&&j!=6)
{               
my_printf("%d",j);
}
}

return 0;
} 