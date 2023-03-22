#include <header.h>

int main_bench()
{char a[50],b[50];int c[256]={0},d[256]={0};
 my_scanf("%s",a);
 my_scanf("%s",b);
 int i,j,k;
 for(i=0;a[i]!='\0';i++)
  {j=a[i];
   c[j]=c[j]+1;}
 for(i=0;b[i]!='\0';i++)
  {k=b[i];
   d[k]=d[k]+1;}
 for(i=0;i<256;i++)
  if(c[i]!=d[i])
    break;
 if(i<255)
  my_printf("NO");
 else
  my_printf("YES");
}