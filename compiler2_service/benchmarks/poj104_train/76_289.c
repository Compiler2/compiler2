#include <header.h>


int main_bench(){
  int zuo[50000],you[50000],n,i,j,a,b;
  double q;
  my_scanf("%d",&n);
  my_scanf("%d%d",&zuo[0],&you[0]); 
  a=zuo[0];
  b=you[0];
  for(i=1;i<n;i++){
       my_scanf("%d%d",&zuo[i],&you[i]);
       if(a>zuo[i])a=zuo[i];
       if(b<you[i])b=you[i];
   }
   for(q=a+0.1;q<b;q++){
      for(j=0;j<n;j++){
    if(zuo[j]<q&&you[j]>q)break;
}
if(j==n){my_printf("no");return 0;}
}
     my_printf("%d %d",a,b);
   return 0;
}