#include <header.h>

int main_bench()
{int n,n1;
 my_scanf("%d",&n);
 A:for(n1=1;n1<=n;n1++)
 {
  char a[21];
  int i,z=0;
  my_scanf("%s",a);
 
  

  for(i=0;i<=strlen(a)-1;i++)
   {if((a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>=91&&a[i]<=96)||a[i]>122)&&a[i]!='_')            
                         {z=1;my_printf("no\n");break;}
    }
   if(a[0]<65) {if(z==0) {my_printf("no\n");z=1;}}
  if(z==0) my_printf("yes\n");
  }
}