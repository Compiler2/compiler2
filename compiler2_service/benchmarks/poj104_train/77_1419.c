#define NUM_ITER 942929

#include <header.h>

int i=0,j=0;
int a[200];
char c,d;
int solve()
{
 
 my_scanf("%c",&c);
 if(c==d) {
            a[i]=j;
            j++;
            i++;
            solve();
            return 0;
            }
   if(c!=d){
            my_printf("%d %d\n",a[i-1],j);
            i--;
            j++;
            if(i==0) return 0;
            solve();
            }
}
int main_bench()
{  
my_scanf("%c",&c);
  d=c;
  a[i]=j;
  j++;
  i++;
  solve();
 
}