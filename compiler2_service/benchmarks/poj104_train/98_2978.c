#include <header.h>

int main_bench(){
  int i,n,t;
  char a[1000][40];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%s",a[i]);
  }
  t=0;
  for(i=0;i<n-1;i++){
    if(strlen(a[i])+t>80){
      my_printf("\n%s",a[i]);
      t=strlen(a[i])+1;
    }
    else if(strlen(a[i])+t<=80){
      if(t+strlen(a[i])+1+strlen(a[i+1])<=80){
        my_printf("%s ",a[i]);
        t=t+strlen(a[i])+1;
      }else{
        my_printf("%s\n",a[i]);
        t=0;
      }
    }
  }
  my_printf("%s",a[n-1]);
  return 0;
}