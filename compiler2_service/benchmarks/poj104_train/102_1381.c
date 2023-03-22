#include <header.h>

int cmp( const void *a , const void *b )
{
return (*(float *)a) > (*(float *)b) ? 1 : -1;
}
main_bench()
{
      int n,b=0,g=0;
      my_scanf("%d",&n);
      int i;
      char sex[8];
      float B[n],G[n];
      for(i=0;i<n;i++)
      {
                      my_scanf("%s",sex);
                      if(sex[0]=='m'){
                         my_scanf("%f",&B[b]);
                         b++;
                         }
                      else{
                        my_scanf("%f",&G[g]);
                        g++;}

      }
      qsort(B,b,sizeof(B[0]),cmp);
      qsort(G,g,sizeof(B[0]),cmp);
      for(i=0;i<b;i++)
      {
                      my_printf("%.2f ",B[i]);
                      }
      for(i=g-1;i>0;i--)
      {
                      my_printf("%.2f ",G[i]);}
      my_printf("%.2f\n",G[i]);
      }