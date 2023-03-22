#define NUM_ITER 762746

#include <header.h>

main_bench()
{
  int a[99],b[99],c[99],d[99],e[99],x[99],i;
 for(i=1;i<=4;i++)
  	my_scanf("%d",&x[i]);
 for(i=1;i<=4;i++)
 {  
    if(x[i]>9999)
    {
      a[i]=x[i]/10000;b[i]=(x[i]-a[i]*10000)/1000;c[i]=(x[i]-a[i]*10000-b[i]*1000)/100;d[i]=(x[i]-a[i]*10000-b[i]*1000-c[i]*100)/10;e[i]=(x[i]-a[i]*10000-b[i]*1000-c[i]*100-d[i]*10);
      my_printf("%d%d%d%d%d\n",e[i],d[i],c[i],b[i],a[i]);
    }
    if(x[i]>999&&x[i]<=9999)
    {
      b[i]=(x[i])/1000;c[i]=(x[i]-b[i]*1000)/100;d[i]=(x[i]-b[i]*1000-c[i]*100)/10;e[i]=(x[i]-b[i]*1000-c[i]*100-d[i]*10);
      my_printf("%d%d%d%d\n",e[i],d[i],c[i],b[i]);
    }
    if(x[i]>99&&x[i]<=999)
    {
      c[i]=(x[i])/100;d[i]=(x[i]-c[i]*100)/10;e[i]=(x[i]-c[i]*100-d[i]*10);
      my_printf("%d%d%d\n",e[i],d[i],c[i]);
    }
    if(x[i]>9&&x[i]<=99)
    {
      d[i]=(x[i])/10;e[i]=(x[i]-d[i]*10);
      my_printf("%d%d\n",e[i],d[i]);
    }
    if(x[i]<=9)
    {
      e[i]=x[i];
      my_printf("%d\n",e[i]);
    }
 } return 0;
}
