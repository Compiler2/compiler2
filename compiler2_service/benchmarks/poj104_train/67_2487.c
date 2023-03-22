#define NUM_ITER 24302

#include <header.h>

main_bench()
{     int n;my_scanf("%d",&n);
      float* a=(float*)malloc(n*sizeof(float));
      float* b=(float*)malloc(n*sizeof(float));
      float* c=(float*)malloc(n*sizeof(float));
      for(int i=0;i<n;i++)
     {my_scanf("%f %f",&a[i],&b[i]);
      c[i]=b[i]/a[i];
     }
      for(int i=1;i<n;i++)
      {if(c[i]-c[0]>0.05)
       my_printf("better\n");
       else if(c[0]-c[i]>0.05)
       my_printf("worse\n");
       else 
       my_printf("same\n");
      }      
      
      
      
     
}