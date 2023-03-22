#include <header.h>

int main_bench(){
  int n,m,i,j,a,b,len;
  int sz[6000][2];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%d%d",&(sz[i][0]),&(sz[i][1]));
  }
  a=sz[0][0];b=sz[0][1];
  for(i=0;i<n;i++){
    if(a>=sz[i][0]){a=sz[i][0];}
    if(b<=sz[i][1]){b=sz[i][1];}
  }
  len=b-a;
  for(j=0;j<len;j++){
    if(m==0){break;}
    m=0;
    for(i=0;i<n;i++){
      if(sz[i][0]<sz[i][1]){
        if(sz[i][0]<=a+j&&a+j+1<=sz[i][1]){m++;}
      }
    }}
  if(m==0){my_printf("no");}
  else {my_printf("%d %d",a,b);}
  return 0;
}