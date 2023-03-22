#define NUM_ITER 2159

#include <header.h>

int main_bench()
{
 int n,k,i,m,x,y=0,p;
 int sz[1000],s[1000],z[1000000];
 my_scanf("%d%d",&n,&k);
 for(i=0;i<n;i++){
     my_scanf("%d",&(sz[i]));
 }
 for(i=0;i<n;i++){
     s[i]=sz[i];
 }
 p=0;
 for(m=0;m<n;m++){
     for(x=m+1;x<n;x++){
             z[p]=sz[m]+s[x];
             p++;
         
     }
 }
 for(i=0;i<n*(n-1)/2;i++){
     if(z[i]==k){
         y=y+1;
     }
 }
 if(y!=0){
     my_printf("yes");
 }else if(y==0){
     my_printf("no");
 }
 return 0;
 
}

