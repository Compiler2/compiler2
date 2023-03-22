#define NUM_ITER 798959

#include <header.h>

int main_bench(){
    int b=0,i;
    char a[100][100],e[210];
    double n;
    gets(e);
    n=atof(e);
    gets(a[0]);
    gets(a[1]);
    int p=strlen(a[0]);
    int q=strlen(a[1]);
    if (p!=q){
        my_printf("error");
        return 0;
    }
    else { 
        for (i=0;i<p;i++){
            if(!(a[0][i]=='A'||a[0][i]=='T'||a[0][i]=='G'||a[0][i]=='C'&&a[1][i]=='A'||a[1][i]=='T'||

                a[1][i]=='G'||a[1][i]=='C')){
                my_printf("error");
                return 0;
            }
            else{
                if(a[0][i]==a[1][i]){
                    b++;
                }
            }
        }
    }
    if(1.0*b/p>n){
        my_printf("yes");
    }
    else  {
        my_printf("no");
    }



    
        return 0;
        }
