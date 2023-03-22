#define NUM_ITER 901139

#include <header.h>

int main_bench()
{
    char da[501],db[501];
    double s,ss,l;
    int l1,l2,i,m=0;
    my_scanf("%lf",&s);
    my_scanf("%s%s",da,db);
    
    l1=strlen(da);
    l2=strlen(db);
    if(l1!=l2){
               my_printf("error");
               return 0;
               }
    for(i=0;i<l1;i++){
        if((da[i]!='A'&&da[i]!='C'&&da[i]!='T'&&da[i]!='G')||(db[i]!='A'&&db[i]!='C'&&db[i]!='T'&&db[i]!='G')){
               my_printf("error");
               return 0;
               }                                                                                                   
        if(da[i]==db[i])m++;
        }   
    l=l1;
    ss=m/l;
    if(ss>s)my_printf("yes");
    else my_printf("no");
    
    return 0;
}