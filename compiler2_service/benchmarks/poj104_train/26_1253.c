#define NUM_ITER 1413360

#include <header.h>

int main_bench(){
    char a[100],z;
    int n,q,w,e;
    gets(a);
    n=strlen(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
           if(a[i-1]==' '){
            for(w=i;a[w]!='\0';w++){a[w]=a[w+1];}i--;
            } 
            }
        }
    puts(a);
    return 0;
}

