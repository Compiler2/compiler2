#include <header.h>

main_bench()
{ int n,k=0,i,j,r,c,t,*a,p;
  my_scanf("%d%d",&r,&c);
  a=(int*)calloc(r*c,sizeof(int));
  for(i=0;i<r*c;i++)
  my_scanf("%d",a+i);
  for(i=0;i<c;i++)
  { j=0;t=i;
    while(t>=0&&j<r)
    { my_printf("%d",*(a+j*c+t));
      my_printf("\n");
      t--;j++;
    }
  }

  for(i=1;i<r;i++)
  { j=c-1;t=i;
    while(t<r&&j>=0)
    {   my_printf("%d",*(a+t*c+j));
	if(!(j==c-1&&t==r-1))my_printf("\n");
	j--;t++;
    }
  }
}