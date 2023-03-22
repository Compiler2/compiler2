#define NUM_ITER 23908

#include <header.h>

int main_bench(){
    char s[256];
    int n;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%s",s);
        for(int j=0;j<strlen(s);j++){
            switch(s[j]){
                case'A':s[j]='T';
                break;
                case'T':s[j]='A';
                break;
                case'G':s[j]='C';
                break;
                case'C':s[j]='G';
                break;
            }
        }my_printf("%s\n",s);
    }
    return 0;
}