#define NUM_ITER 1353917

#include <header.h>

int main_bench(){
    char juzi[200];   
    int i,j,m;
    gets(juzi);
    m=strlen(juzi);
    for(i=1;i<m-1;i++){
        if(juzi[i-1]!=' '&&juzi[i]==' '&&juzi[i+1]==' '){
            for(j=i+1;j<m-1;j++){
                juzi[j]=juzi[j+1];
            }
            m=m-1;
            juzi[m]='\0';
            i=i-1;
        }
    }
    my_printf("%s",juzi);
    return 0;
}

