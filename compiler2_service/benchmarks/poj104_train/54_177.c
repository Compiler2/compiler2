#include <header.h>

int main_bench()
{
  int n,k,i,y,v,t,s,q;
  my_scanf("%d %d",&n,&k);
  for(i=1;;i++)
   {t=i*n+k;
     for(v=1,y=1;v<=n-1;)
    { q=t*n%(n-1);
      if(q!=0) 
       {y=0;break;}
      else{v=v+1;
           s=t*n/(n-1);
           t=s+k;}
     }
       if(y==1) {my_printf("%d",t);break;}
    }
}
