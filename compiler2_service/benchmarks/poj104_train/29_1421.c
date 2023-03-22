#include <header.h>

main_bench()
{
      int m;
      my_scanf("%d",&m);
      int n[m];
      int i;
      for(i=0;i<m;i++)
      {
                      my_scanf("%d",&n[i]);
      }
      for(i=0;i<m;i++)
      {
                      int xi;
                      xi=n[i];
                      if(xi==1)
                      my_printf("2.000\n");
                      if(xi==2)
                      my_printf("3.500\n");
                      if(xi>2)
                      {
                      float ai[xi];
                      float bi[xi];
                      float ci[xi];
                      int j;
                      ai[0]=2;
                      ai[1]=3;
                      bi[0]=1;
                      bi[1]=2;
                      float sumi;
                      sumi=3.5;
                      for(j=2;j<xi;j++)
                      {
                                       ai[j]=ai[j-1]+ai[j-2];
                                       bi[j]=bi[j-1]+bi[j-2];
                                       ci[j]=ai[j]/bi[j];
                                       sumi+=ci[j];
                      }
                      my_printf("%.3f\n",sumi);
                      }
      }
}