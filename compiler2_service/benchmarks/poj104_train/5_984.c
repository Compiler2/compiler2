#define NUM_ITER 918495

#include <header.h>

int main_bench(){
    int i,j,m=0,n=0,total=0,zong=0,A=1;
    double bl,suande;
    char z1[100];
    char z2[100];
    my_scanf("%lf",&bl);
    my_scanf("%s",&z1);
    my_scanf("%s",&z2);
    for(i=0;z1[i]!='\0';i++){
        m++;
    }
    for(i=0;z2[i]!='\0';i++){
        n++;
    }
    if(m!=n){
        my_printf("error");
    }
    else{
        for(i=0;z1[i]!='\0';i++){
            zong++;
            if(((z1[i]!='A')&&(z1[i]!='T')&&(z1[i]!='C')&&(z1[i]!='G'))||((z2[i]!='A')&&(z2[i]!='T')&&(z2[i]!='C')&&(z2[i]!='G'))){
                A=0;
                break;
            }
            else{
                if(z1[i]==z2[i]){
                    total++;
                }
            }
        }
        suande=1.0*total/zong;
        if((A==1)&&(suande<=bl)){
            my_printf("no");
        }
        else if((A==1)&&(suande>bl)){
            my_printf("yes");
        }
        else if(A==0){
            my_printf("error");
        }
        else{my_printf("a");}
    }
    
    
    return 0;
}







