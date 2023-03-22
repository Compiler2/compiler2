#include <header.h>

int main_bench(){
    int n,m;
    int i;
    int a=0,b=0,c=0,d=0;
    double e,f,g,h;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
        my_scanf("%d",&m);
        if(m<=18){
            a++;
        }
        else if(m>18&&m<=35){
            b++;
        }
        else if(m>35&&m<=60){
            c++;
        }
        else{
            d++;
        }
    }
    e=a*1.0*100/n;
    f=b*1.0*100/n;
    g=c*1.0*100/n;
    h=d*1.0*100/n;
    my_printf("1-18: ");
    my_printf("%.2lf%%\n",e);
    my_printf("19-35: ");
    my_printf("%.2lf%%\n",f);
    my_printf("36-60: ");
    my_printf("%.2lf%%\n",g);
    my_printf("Over60: ");
    my_printf("%.2lf%%\n",h);
    return 0;
}
    
    
    

