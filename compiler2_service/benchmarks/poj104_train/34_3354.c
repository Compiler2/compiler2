#define NUM_ITER 306704

#include <header.h>

int main_bench()
{ int n;
  int print(int n);
  my_scanf("%d\n",&n);
  if (n!=1)  print(n);
  my_printf("End");
}
int print(int n)
{ int a,b;
  if (n%2==0) {a=(n/2);my_printf("%d/2=%d\n",n,a);}
     else {a=(n*3+1);my_printf("%d*3+1=%d\n",n,a);}
  if (a!=1) {b=print(a);}
return(0);
}