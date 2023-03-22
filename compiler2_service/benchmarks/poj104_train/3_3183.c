#define NUM_ITER 54379

#include <header.h>

int main_bench(){
 int n,i,m,k,s[1000],q[1000];
 my_scanf("%d%d",&n,&m);
 for(i=0;i<n;i++){my_scanf("%d",&s[i]);}
 for(k=1;k<n;k++){q[k]=s[k];}
 int c=0;
 for(i=0;i<n;i++){if(c==m)break;else{
   for(k=1;k<n;k++){c=s[i]+q[k];if(c==m){my_printf("yes");break;}}}}
  if(c!=m){my_printf("no");}
  return 0;}

