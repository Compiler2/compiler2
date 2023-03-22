#define NUM_ITER 32680

#include <header.h>

int main_bench(){
    char zfc[256],*a;
    int n,i,j,k,s;
    my_scanf("%d",&n);
    for(k=0;k<n;k++){
        my_scanf("%s",zfc);
        for(a=zfc;*a!='\0';a++){
            if(*a=='A') *a='T';
            else if(*a=='T') *a='A';
            else if(*a=='C') *a='G';
            else *a='C';
        }
        my_printf("%s\n",zfc);
    }
    return 0;
}
