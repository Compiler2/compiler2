#define NUM_ITER 22155

#include <header.h>

main_bench()
{
  int n,i,l,j,k;
  char a[100000];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {int count=0;
   my_scanf("%s",a);
   l=strlen(a);
   for(j=0;j<l-1;j++)
   {
     for(k=0;k<l;k++)
     {if(a[j]==a[k]&&j!=k)
       break;
        }
     if(k==l)
     {count++;
      if(count==1)
      my_printf("%c\n",a[j]);}
   }
   if(count==0)
   my_printf("no\n");
}
   getchar();
   getchar();
   getchar();
}
