#define NUM_ITER 723614

#include <header.h>



int main_bench()
{
    char c[100];
    int num=0;
    int a[256]={0},b[256]={0},i,j;
    my_scanf("%s",c);
    for(i=0;i<strlen(c);i++){
                             a[c[i]]++;
                             }
    my_scanf("%s",c);
    for(i=0;i<strlen(c);i++){
                             b[c[i]]++;
                             }
    for(i=0;i<256;i++){
                       if(a[i]!=b[i]){
                                      my_printf("NO\n");
                                      break;
                                      }
    else{
         num++;
         }
    }
    if(num==256){
                 my_printf("YES\n");
                 }
    

    return 0;
    }