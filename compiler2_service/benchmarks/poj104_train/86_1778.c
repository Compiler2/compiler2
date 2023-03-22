#define NUM_ITER 1363

#include <header.h>

int main_bench(){
  int n,i,m,j,x=60;
  my_scanf("%d",&n);
  for(i=0;i<n;i++,x=60){
    my_scanf("%d",&m);if(m==0){my_printf("60\n");continue;}
    int p[m];
    for(j=0;j<m;j++){
      my_scanf("%d",&p[j]);
    }
    for(j=0;j<m;j++){
      if(p[j]>=x){my_printf("%d\n",x);break;}
      if(p[j]<x&&p[j]>=x-3){my_printf("%d\n",p[j]);break;}
      if(p[j]<x-3){x-=3;}
    }
    if(j==m){my_printf("%d\n",x);}
  }
  return 0;
}
