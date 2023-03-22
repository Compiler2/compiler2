#define NUM_ITER 34820

#include <header.h>

int main_bench()
{   
    int i,n,ssy[100],szy[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&ssy[i],&szy[i]);
    }
    int m=0,j=0;
    int lx[100];
    for(i=0;i<n;i++)
    {
        if(ssy[i]>=90&&140>=ssy[i]&&szy[i]>=60&&90>=szy[i])
        {
            lx[j]=i;
            j++;
        } else lx[j]=-1;
    }
    int x=0,t=0,max=0;
    if(j>0)
    {
		m=1;
	for(t=0;t<=j;t++)
	{
	  if(lx[t+1]-lx[t]==1)
		  m++;
          if(lx[t+1]-lx[t]!=1)
          {
              if(max<=m)
              max=m;
              m=1;
          }
	}
    my_printf("%d",max);
    }
    else{my_printf("0");}
	return 0;
}




