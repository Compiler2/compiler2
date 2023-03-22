#include <header.h>

main_bench()
{int i,m,n,k,j;
 my_scanf("%d",&n);
 int *p=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  my_scanf("%d",&p[i]);
 for(i=0;i<(n-1);i++)
  for(j=i+1;j<n;j++)
  { if(p[i]<p[j]) {k=p[i];p[i]=p[j];p[j]=k;}}
 my_printf("%d\n%d",p[0],p[1]);

}
