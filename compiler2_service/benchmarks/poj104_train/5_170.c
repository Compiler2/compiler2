#define NUM_ITER 868768

#include <header.h>

int main_bench(){
    int i,j,l1,l2,count=0,o=1;
    double r;
    char a[1000],b[1000];
    my_scanf("%lf",&r);
    my_scanf("%s",a);
    my_scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2){
        my_printf("error");
        o=0;
        }
    else{
        for(i=0;i<l1;i++){
            if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){ 
                my_printf("error");  
                o=0;
                break;             
                }
             else{
                    if(a[i]==b[i]) count++;
                    }
            }
        if(1.0*count/l1>r&&o==1) my_printf("yes");
        else if(o==1) my_printf("no");    
        }
    
    
    my_scanf("%d",&i);
    return 0;
    }
