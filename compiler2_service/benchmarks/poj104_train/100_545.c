#define NUM_ITER 304616

#include <header.h>

int main_bench()
{
    char a[300],*p;
    int c,i,j=0,k,b[26];
    for(i=0;i<26;i++)
        b[i]=0;
    p = a;
    my_scanf("%s",p);
    c = strlen(a);
    for(i=0;i<c+1;i++){
        for(k=0;k<26;k++){
             if(a[i] == k+'a'){
             b[k]++; }
        }
    }
    for(i =0;i<26;i++){
        if(b[i]!=0){
            my_printf("%c=%d\n",i+'a',b[i]);
            j++;
         }
     }
     if(j==0)
         my_printf("No");
     return 0;
}