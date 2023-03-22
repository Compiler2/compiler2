#include <header.h>


int main_bench()
{
  int b,i,k;
  i=0;
  k=1;
  int a[100];
  int maxindex,c;
  c=0;
  my_scanf("%d",&b);
  for(i=0; i < 100; i++)
           a[i] = 0;
  if(b>1 && b<100){
     for(i=0;i<b;i++){
         my_scanf("%d",&(a[i]));
         }
     for(k=1;k<=2;k++){
        for(i=0;i<=100-k-1;i++){
           if(a[i]>a[i+1]){
 c=a[i];
           a[i]=a[i+1];
           a[i+1]=c;
       
           }
        }
    my_printf("%d\n",a[100-k]);
      }
  }else{
  my_printf("error");
  }	
  return 0;
}