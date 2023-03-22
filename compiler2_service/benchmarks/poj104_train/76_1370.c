#define NUM_ITER 2994

#include <header.h>

int main_bench()
{
    int n,sz[50000],d[50000],a[50000],b[50000],t=0,s=0,max,min;
    double k;
    my_scanf("%d", &n);
    int e, i;
    for (i=0; i<n; i++){
	    my_scanf("%d%d", &(sz[i]),&(d[i]));
        a[i]=sz[i];
        b[i]=d[i];
    }
    for (i=0;i<n-1;i++)
    {
		if (a[i]<a[i+1])
		{
			e=a[i+1];
			a[i+1]=a[i];
			a[i]=e;
		};
	}
	min=a[n-1];
     for (i=0;i<n-1;i++)
    {
    	if (b[i]>b[i+1])
		{
			e=b[i+1];
			b[i+1]=b[i];
			b[i]=e;
		};
	}
	max=b[n-1];
     for (k=min+0.5;k<=max;k=k+1){
         t=0;
         for (i=0;i<n;i++){
             if(k>sz[i]&&k<d[i]){t++;}
         }
         if(t>0){s++;}
    }
   if(s==max-min){my_printf("%d %d",min,max);}
      else{my_printf("no");}
   return 0;
}


      

