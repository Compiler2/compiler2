#define NUM_ITER 881168

#include <header.h>

int main_bench(){
    double x,y;
    int m,n,i,c=0;
    int r=0;
    char a[505],b[505];
    my_scanf("%lf",&x);
    my_scanf("%s",a);
    my_scanf("%s",b); 
    n=strlen(a);
    m=strlen(b);
    if(m!=n){
             c=3;         
    }
    for(i=0;i<n;i++){
                     if(a[i]==b[i]){
                                    r++;               
                     }
                     if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='T'&&b[i]!='A'&&b[i]!='C'&&b[i]!='G')){
                                                                                                                c=3;
                                                                                                                break;                                                                                           
                     }
                                      
    }
    y=1.0*r/n;
    if((y>x)&&(c==0)){
                        my_printf("yes");                    
    }
    if((y<=x)&&(c==0)){
                        my_printf("no");                    
    }
    if(c==3){
             my_printf("error");         
    }

    return 0;
}