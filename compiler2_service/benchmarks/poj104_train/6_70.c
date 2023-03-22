#define NUM_ITER 32

#include <header.h>

main_bench()
{
  int *a,i,m,n,k,s=0,*b,j;
  my_scanf("%d",&k);
  b=(int *)calloc(k,sizeof(int));
  for(i=0;i<k;i++)
  {
     my_scanf("%d %d",&m,&n);
     a=(int *)calloc(m*n,sizeof(int));
     for(j=0;j<m*n;j++)my_scanf("%d",a+j);
     for(j=0;j<m;j++)
     { s=s+*(a+j*n)+*(a+j*n+n-1);
     }
     for(j=1;j<n-1;j++)
      s=s+*(a+j)+*(a+(m-1)*n+j);

     *(b+i)=s;
     free(a);
     s=0;
  }
  for(i=0;i<k;i++){
  my_printf("%d",*(b+i));
  if(i<k-1)my_printf("\n");}

}