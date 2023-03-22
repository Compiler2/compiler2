#define NUM_ITER 18877

#include <header.h>

int main_bench(){
    int n,i,j;
    char zfc[1000][1000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%s",zfc[i]);  
for(i=0;i<n;i++){
for(j=0;j<strlen(zfc[i]);j++){
            if(zfc[i][j]=='A'){
                my_printf("T");
            }
            else if(zfc[i][j]=='T'){
                my_printf("A");
            }
            else if(zfc[i][j]=='G'){
                my_printf("C");
            }           
            else if(zfc[i][j]=='C'){
                my_printf("G");
            }

        }
my_printf("\n");        

    }
    return 0;
}


