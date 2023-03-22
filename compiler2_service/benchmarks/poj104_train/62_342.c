#define NUM_ITER 1296083

#include <header.h>

int main_bench() {
    int i,m,k;
    char kg[200];
    gets(kg);
    m=strlen(kg);
    for(i=0;i<m-1;i++){
        if(kg[i]==' '){
            if(kg[i+1]!=' '){continue;}
            else{k=i;
                while(i<m-1){kg[i]=kg[i+1];
                             i++;
                }
                i=k-2;
                m--;
            }
        }
    }
    kg[m]='\0';
    my_printf("%s",kg);
    return 0;
}