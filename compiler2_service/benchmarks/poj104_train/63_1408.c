#define NUM_ITER 28

#include <header.h>

main_bench()
{
      int x1,x2,y1,y2,m,s,n;
      my_scanf("%d %d",&x1,&y1);
      int i[x1][y1];
      for(m=0;m<x1;m++){
      for(s=0;s<y1;s++)
      my_scanf("%d",&i[m][s]);}
      my_scanf("%d %d",&x2,&y2);
      int j[x2][y2];
      for(m=0;m<x2;m++){
      for(s=0;s<y2;s++)
      my_scanf("%d",&j[m][s]);}
      int c[x1][y2];
      for(m=0;m<x1;m++){
      for(s=0;s<y2;s++){
      c[m][s]=0;
      for(n=0;n<y1;n++){
      c[m][s]=c[m][s]+(i[m][n])*(j[n][s]);}
      my_printf("%d",c[m][s]);
      if(s==(y2-1))my_printf("\n");
      else my_printf(" ");
      }}
}