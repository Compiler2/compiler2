#define NUM_ITER 22571

#include <header.h>

int main_bench()
{
    int n,m,i,j;
    char s[256];
    my_scanf("%d",&n);
    my_scanf("\n");
    for(i=0;i<n;i++){
        my_scanf("%s",&s);
        my_scanf("\n");
        m=strlen(s);
        for(j=0;j<m;j++){
            if(s[j]=='A'){
                s[j]='T';
                continue;
            }
            else if(s[j]=='T'){
                s[j]='A';
                continue;
            }
            else if(s[j]=='C'){
                s[j]='G';
                continue;
            }
            else if(s[j]=='G'){
                s[j]='C';
                continue;
            }
        }
        my_printf("%s",s);
        my_printf("\n");
    }
    return 0;
}