#define NUM_ITER 1351070

#include <header.h>


int main_bench()
{
    char input[50];
    int output=0,i,k=0,l;
    gets(input);
    l=strlen(input);
    for(i=0;i<=l-1;i++){
                        if(input[i]>=48&&input[i]<=57){
                                                    output=10*output+(input[i]-48);
                                                    k++;
                                                     }
                        else{
                             if(k>0&&input[i-1]>=48&&input[i-1]<=57)
                             {my_printf("%d\n",output);
                             output=0;}
                             }
                        }
    if(output!=0){my_printf("%d", output);}
    return 0;
}