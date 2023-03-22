#define NUM_ITER 7873

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int sz[300],jg[300];
    int i,k,j,m=0;
    for(i=0;i<n;i++){
       my_scanf("%d",&sz[i]);}
    for(i=0;i<n;i++){
     for(k=0;k<i;k++){
      if(sz[i]==sz[k]){
        sz[i]=0;
        break;}
      else{
        continue;}}}
    for(i=0;i<n;i++){
      if(sz[i]!=0){
      jg[m]=sz[i]; 
      m++;}}
    for(j=0;j<m-1;j++){
      my_printf("%d,",jg[j]);}
    my_printf("%d",jg[m-1]);
return 0;
}