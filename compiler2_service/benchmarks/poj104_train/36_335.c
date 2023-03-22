#include <header.h>

int main_bench()
{char a[100],b[100];
 int i,j,k,t,p;
 my_scanf("%s %s",a,b);
 k=strlen(a);
 t=strlen(b);
 if(k!=t)
  my_printf("NO\n");
 else
  {for(i=0;i<k;i++)
    for(j=0;j<t;j++)
     if(a[i]==b[j])
     {b[j]=' ';p=1;break;}
     else p=0;
    if(p==1) my_printf("YES\n");
    if(p==0) my_printf("NO\n");}
}
 