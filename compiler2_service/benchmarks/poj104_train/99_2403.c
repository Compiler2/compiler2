#define NUM_ITER 53021

#include <header.h>

int main_bench()
{
 int n;
 int sz[100];
 int i;
 int a=0,b=0,c=0,d=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
      my_scanf("%d",&sz[i]);
      if(sz[i]>=1&&sz[i]<=18){
       a+=1;
      }else if(sz[i]>18&&sz[i]<=35){
       b+=1;
      }else if(sz[i]>35&&sz[i]<=60){
          c+=1;
      }else {
           d+=1;
      }

 }

 my_printf("1-18: %.2lf%%\n",(double)a*100/n);
 my_printf("19-35: %.2lf%%\n",(double)b*100/n);
 my_printf("36-60: %.2lf%%\n",(double)c*100/n);
 my_printf("60??: %.2lf%%",(double)d*100/n);
 return 0;
}
