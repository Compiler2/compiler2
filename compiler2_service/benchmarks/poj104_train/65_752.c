#define NUM_ITER 38054

#include <header.h>

int main_bench(){
int n,a[200],b[200],sa=0,sb=0,i;

my_scanf("%d\n",&n);
for(i=0;i<n;i++)
{
  my_scanf("%d%d",&(a[i]),&(b[i]));
}

for(i=0;i<n;i++)
{
  if(a[i]==0)
  {
    if(b[i]==1)
		sa++;
	if(b[i]==2)
		sb++;
  }
  if(a[i]==1)
  {
    if(b[i]==0)
	  sb++;
    if(b[i]==2)
	  sa++;
  }
  if(a[i]==2)
  {
    if(b[i]==0)
		sa++;
	if(b[i]==1)
		sb++;
  }
  
}
if(sa>sb)
my_printf("A");
if(sa<sb)
my_printf("B");
if(sa==sb)
my_printf("Tie");

return 0;
}