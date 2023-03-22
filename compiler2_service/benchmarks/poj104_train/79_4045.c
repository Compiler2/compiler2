#define NUM_ITER 36

#include <header.h>

int main_bench()
{
  int dawang(int n,int m);
  int a,b,boss;
  my_scanf("%d %d",&a,&b);
  while (a!=0)
  {
     boss=dawang(a,b);
  my_printf("%d\n",boss);
  my_scanf("%d %d",&a,&b);
  }

}
int dawang(int n,int m)
{
 int after[400];
 int i,j,pre,t;
 for (i=0;i<n;i++) after[i]=i+1;
 after[n]=1;
 pre=n;
 t=1;
 while (after[pre]!=pre)
 {
    for (i=1;i<m;i++)
    {
      pre=t;
      t=after[pre];
    }
    after[pre]=after[t];
	t=after[pre];
 }
return(t);
}