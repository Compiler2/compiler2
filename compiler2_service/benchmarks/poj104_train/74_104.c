#define NUM_ITER 1644109

#include <header.h>

int sushu(int x)
{int i,j;
 j=0;
 for(i=2;i<x;i++)
     if(x%i==0)
          break;
 if(i==x) j=1;
 return(j);
}

int huiwenshu(int x)
{int i,j,k,p,t;
 k=0;
 p=0;
 for(i=1;x/i!=0;i=i*10)
continue;
 i=i/10;
 j=1;
 t=x;
 for(i=i;i>=1;i=i/10)
  {k=k+x/i*j;
   x=x-x/i*i;
   j=j*10;
   }
 if(t==k)
   p=1;
 return(p);
}
 
int main_bench()
{int m,n,i,j;   
 my_scanf("%d%d",&m,&n);
 j=0;
 for(i=m;i<=n;i++)
  {if(sushu(i)==1&&huiwenshu(i)==1)
      {if(j==0)
       {my_printf("%d",i);
        j++;}
       else 
         my_printf(",%d",i);
        }
   }
  if(j==0)
   my_printf("no");
}