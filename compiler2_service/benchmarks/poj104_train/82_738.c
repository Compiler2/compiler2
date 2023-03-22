#include <header.h>

int main_bench(){
   int i, a=0, s=0,n, sz[100], ss[100];
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%d",&ss[i]);
      my_scanf("%d",&sz[i]);
      if(ss[i]>=90&&ss[i]<=140&&sz[i]<=90&&sz[i]>=60){
      a=a+1;
      }
      else {
		  a=0;}
      if(a>=s){
		  s=a;}
    }
     my_printf("%d",s);
     return 0;
 }
