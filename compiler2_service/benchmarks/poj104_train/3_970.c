#define NUM_ITER 54788

#include <header.h>

int main_bench(){
int n,f,k,s;
int sz[1000];
f=0;
my_scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){
my_scanf("%d",&(sz[i]));
}




for(int j=0;j<n;j++){
 for(int m=j+1;m<n;m++){
  s=sz[j]+sz[m];
if((s==k)&&(f==0)){
f=1;
my_printf ("yes");
break;
 }}
if (f==1) break;
}
if(f==0)my_printf("no");

return 0;
}
