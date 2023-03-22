#define NUM_ITER 2237

#include <header.h>

int qipa(int p,int q)    
{
    int i,l,s=0;
    if(p==1) return 1;
    for(i=p;i>1;i--)
      if(p%i==0 && i<=q)
        s+=qipa(p/i,i);
    return s;
}
int main_bench()
{
  int i,j,n,m,t;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    my_scanf("%d",&m);   
    t=qipa(m,m);
    my_printf("%d\n",t);    
  }
return 0;
}