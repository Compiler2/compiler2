#define NUM_ITER 1622776

#include <header.h>

 main_bench()
{int m,n,a,b,c,d=0,i,j,e;
 my_scanf("%d %d",&m,&n);
 for(i=m;i<=n;i++)
 {for(j=2;j<i;j++)
   {if(i%j==0) break;}
  if(j==i)
  {a=i;c=0;
   while(a!=0)
    {b=a%10;a=a/10;c=10*c+b;}
   if(c==i) d++;
   }

  }
  if(d==0) my_printf("no\n");
  else 
{  e=1;
  for(i=m;i<=n;i++)
 {for(j=2;j<i;j++)
   {if(i%j==0) break;}
  if(j==i)
  {a=i;c=0;
   while(a!=0)
    {b=a%10;a=a/10;c=10*c+b;} 
    
   if(c==i&&e<d) {my_printf("%d,",i);e++;}
   else if(c==i&&e==d) my_printf("%d",i);
   }
}
}
 }  

