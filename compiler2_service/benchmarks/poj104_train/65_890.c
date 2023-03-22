#include <header.h>

int main_bench(){
    int m,n=0,o=0,p,q,j;
     my_scanf("%d",&m);
  for(j=0;j<m;j++){
      my_scanf("%d%d",&p,&q);
      if((p==0&&q==1)||(p==1&&q==2)||(q==p-2))n++;
      else if(p>q||(q==p+2))o++;
      }
  if(n>o){my_printf("A");}
  if(n<o){my_printf("B");}
  if(n==o){my_printf("Tie");}
  return 0;
}
  