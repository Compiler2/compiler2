#define NUM_ITER 1497521

#include <header.h>

int main_bench() {
    char data[31];
    int n,i;
    gets(data);
    for(n=0;data[n]!='\0';n++);
    for(i=0;i<n;i++) {
        if(data[i]<='9'&&data[i]>='0') {
            my_printf("%c",data[i]);
        } else {
            my_printf("\n");
        }
    }
    return 0;
}