#define NUM_ITER 28422

#include <header.h>

int main_bench(){
    int n,i,k,l;
    my_scanf("%d",&n);
    char jj[256];
    for(i=0;i<n;i++){
        my_scanf("%s",jj);
        l=strlen(jj);
        for(k=0;k<l;k++){
            if(jj[k]=='A'){
                jj[k]='T';
                continue;
            }
            if(jj[k]=='T'){
                jj[k]='A';
                continue;
            }if(jj[k]=='C'){
                jj[k]='G';
                continue;
            }
            if(jj[k]=='G'){
                jj[k]='C';
                continue;
            }
        }
        my_printf("%s\n",jj);
    }
    
    
return 0;
}


