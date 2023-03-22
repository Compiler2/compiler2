#include <header.h>

int main_bench()
{
int N;
my_scanf("%d",&N);
int sz[N];
int i;
for(i=0;i<N;i++){
    my_scanf("%d ",&sz[i]);
}
int js[500];
int j=0,sum=0;
for(i=0;i<N;i++){
    if(sz[i]%2!=0){
     js[j]=sz[i];
     j++;
     sum++;
     }
}
int k,e;
for(k=1;k<sum;k++){
  for(j=0;j<=sum-k;j++){
     if(js[j]>js[j+1]){
      e=js[j];
      js[j]=js[j+1];
      js[j+1]=e;
      }
  }
}
for(j=0;j<sum;j++){
if(j!=sum-1)
my_printf("%d,",js[j]);
else
my_printf("%d",js[j]);
}
return 0;
}