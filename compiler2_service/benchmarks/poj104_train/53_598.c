#include <header.h>

main_bench()
{
  int a[301],j,n,i,k,b,*p;
  my_scanf("%d %d",&n,&k);
  my_printf("%d",k);
  a[0]=k;
  p=a;
  b=1;
  for(i=1;i<n;i++)
  {	 my_scanf("%d",&k); 
	 for(j=0;j<b;j++)
     if(*(p+j)==k) break;
    if(j==b) 
	{
		my_printf(",%d",k);
        *(p+b)=k;
		b++;
	}


}
}