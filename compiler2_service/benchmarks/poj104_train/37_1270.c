#define NUM_ITER 1014

#include <header.h>

int main_bench(){
int n,j,i,m,k,r,d[30],x;char z,s[100000];
my_scanf("%d",&n);
for(j=0;j<n;j++){
  my_scanf("%s",s);
  r=0;
  for(z='a';z<='z';z++){
    m=0;
    for(i=0;i<strlen(s);i++){
      if(s[i]==z){
        k=i;
        m++;
      }
    }
    if(m==1){
      d[r]=k;r++;
    }
  }
  if(r==0){my_printf("no\n");}
  else if(r>0){
  x=d[0];
  for(i=0;i<r;i++){
    if(d[i]<x){x=d[i];}
  }
  my_printf("%c\n",s[x]);
  }
}
return 0;
}