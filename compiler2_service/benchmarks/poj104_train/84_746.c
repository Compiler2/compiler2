#define NUM_ITER 49253

#include <header.h>

int main_bench()
{
    int a[100];
    int i;
    int n;
    int e=0,f=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
    my_scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
    if(e<=a[i])
	{
    e=a[i];
	}

	}
    for(i=0;i<n;i++)
	{
    if(f<=a[i])
	{
     if(a[i]==e)
	 {
      continue;
	 }
      f=a[i]; 
	}
	}
    my_printf("%d\n%d\n",e,f);
    return 0;
}
