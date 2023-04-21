#define NUM_ITER 493003

#include <header.h>

int convert_1(char a){
   if (a >= '0' && a<= '9') return a - '0';
   if (a >= 'a' && a<= 'z') return a - 'a' + 10;
   if (a >= 'A' && a<= 'Z') return a - 'A' + 10;
}
char convert_2(int a){
    if (a < 10) return a + '0';
     else return a - 10 +'A';
}
void convert(int a,int n){
    if (a >= n) convert(a / n,n);
    my_printf("%c",convert_2(a % n));
}
int main_bench(){
    int a,n = 0,b,k = 1,i;
    char str[500];
    my_scanf("%d %s %d",&a,str,&b);
    for(i = strlen(str) - 1;i >= 0;i --){
        n += convert_1(str[i]) * k;
        k *= a;
    }
    convert(n,b);
    my_printf("\n");
    return 0;
}
