#define NUM_ITER 37432

#include <header.h>


int main_bench()
{
	int max(int a,int b);
	int n,m[100],i,m1=-32768,m2=-32768;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
    my_scanf("%d",&m[i]);
	for (i=0;i<n;i++)
		m1=max(m[i],m1);
  	for (i=0;i<n;i++)
		if(m[i]==m1)
			m[i]=-32768;
    for (i=0;i<n;i++)
		m2=max(m[i],m2);
	my_printf("%d\n%d",m1,m2);

}
  int max(int a,int b)
  {
	  int c;
	  c=a>b?a:b;
      return(c); 
  }