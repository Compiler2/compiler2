#define NUM_ITER 31151

#include <header.h>

int main_bench()
{int n,i,count[1000]={0},max=0,t=0,m=0;
my_scanf("%d",&n);
int g[n],d[n],z[n];
for(i=0;i<n;i++){
  my_scanf("%d %d",&g[i],&d[i]);
}
for(i=0;i<n;i++){ 
   if(g[i]>=90&&g[i]<=140&&d[i]>=60&&d[i]<=90){
    z[i]=1;
   }else{
    z[i]=0;}
}
for(i=0;i<n;i++){
 if(z[i]==1){
    count[m]++;}
 else {
    m++;
    count[m]=0;}
 if(i==n-1)
    t=m+1;
}
for(i=0;i<t;i++){
 if(count[i]>max){
   max=count[i];}
}
my_printf("%d",max);
return 0;
}
  
      