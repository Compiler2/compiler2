#define NUM_ITER 24549

#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d",&n);
    int len[n];
    char sz[n][300];
    for(i=0;i<n;i++){
    my_scanf("%s\n",sz[i]);
    }
    int j;
    for(i=0;i<n;i++){
        len[i]=strlen(sz[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<len[i];j++){
           if(sz[i][j]=='A'){
             sz[i][j]='T';
           }
           else if(sz[i][j]=='T'){
              sz[i][j]='A';
           }
           else if(sz[i][j]=='C'){
              sz[i][j]='G';
           }
           else if(sz[i][j]=='G'){
              sz[i][j]='C';          
           }
        }
        my_printf("%s\n",sz[i]);
     }
     return 0;
}

    