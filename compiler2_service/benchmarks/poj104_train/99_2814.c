#include <header.h>

int main_bench(){
    int i=1;
    double n,num;
    double a=0,b=0,c=0,d=0;
    double w,x,y,z;
    my_scanf("%lf",&n);
   while(i<=n){
       my_scanf("%lf",&num);
       if(num<=18){
        a++;i++;}
        else if(num>=19&&num<=35){b++;i++;}
        else if(num>=36&&num<=60){c++;i++;}
        else if(num>=61){d++;i++;}
   }
       w=a/n*100;x=b/n*100;y=c/n*100;z=d/n*100;
       my_printf("1-18: %.2lf%%\n",w);
       my_printf("19-35: %.2lf%%\n",x);
       my_printf("36-60: %.2lf%%\n",y);
       my_printf("Over60: %.2lf%%\n",z);
        return 0;
}
        
        
   
    
