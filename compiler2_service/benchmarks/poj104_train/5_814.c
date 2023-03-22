#include <header.h>

int main_bench(){
    double rate,result;
    int p=2,num=0;
    my_scanf("%lf\n",&rate);
    char dna1[510],dna2[510];
    my_scanf("%s",dna1);
    my_scanf("\n");
    my_scanf("%s",dna2);
        for(int i=0;i<strlen(dna1);i++){
        if((dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='C'&&dna1[i]!='G')||(dna2[i]!='A'&&dna2[i]!='T'&&dna2[i]!='C'&&dna2[i]!='G')){
            p=0;
            break;
        }
    }
    if(strlen(dna1)!=strlen(dna2)){
        p=0;
    } 
    
    if(p==2){
        for(int i=0;i<strlen(dna1);i++){
            if(dna1[i]==dna2[i]){
                num++;
            }
        }
        result=1.0*num/strlen(dna1);
        if(result>=rate){
            my_printf("yes");
        }else my_printf("no");
    }
    if(p==0)
        my_printf("error");
    return 0;
}