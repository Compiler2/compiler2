#include <header.h>

int main_bench()
{
  int n,a[200],b[200],i,A=0,B=0;
  my_scanf("%d\n",&n);
  for(i=0;i<n;i++)
  my_scanf("%d %d\n",&a[i],&b[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]-b[i]==-1||a[i]-b[i]==2)
    A++;
    else{
           if(a[i]-b[i]==0);
           else
           B++;
        }
  }
  if(A<B)
  my_printf("B");
  else{
        if(A>B)
        my_printf("A");
        else
        my_printf("Tie");
      }
  return 0;
}

