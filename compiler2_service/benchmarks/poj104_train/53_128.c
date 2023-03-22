#include <header.h>

int main_bench()
{
 int a[300],*pa,*pb,b[300],i,j,k=1,m,n,t;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 pb=b;pa=a;
 b[0]=a[0];
 for(i=0;i<n;i++)
 { m=0;
  for(j=0;j<k;j++)
  { 
    if(*(pa+i)!=*(pb+j))
	m=m+1;
  }
  if(m==k)
  {
	 *(pb+k)=*(pa+i);k++;
  }
 }
 pb=b;
     for(i=0;i<k-1;i++)
		my_printf("%d,",*(pb+i));
	my_printf("%d",*(pb+k-1));
 
}