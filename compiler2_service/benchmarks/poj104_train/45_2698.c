#define NUM_ITER 1110948

#include <header.h>










int compare(char s[50],char w[50],int i)
{
    int i1,k=1;
    long len;
    len=strlen(s);
    for (i1=0; i1<len; i1++) {
        if (s[i1]!=w[i+i1]) {
            k=0;
            break;
        }
    }
    if (k==0) {
        return 0;
    }
    else
        return 1;
}

int main_bench()
{
    char s[50];
    char w[50];
    int i;
    long len;
    my_scanf("%s",s);
    my_scanf("%s",w);
    
    len=strlen(w);
    for (i=0; i<len; i++) {
        if (s[0]==w[i]) {
            if (compare(s,w,i)==1) {
                my_printf("%d",i);
                break;
            }
        }
    }
}