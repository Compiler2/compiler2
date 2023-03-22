#include <header.h>


char convert[100];

int main_bench(){
    int N,l,i,tt;
    char a[10000];
    
    convert['A'] = 'T';
    convert['T'] = 'A';
    convert['G'] = 'C';
    convert['C'] = 'G';
    
    my_scanf("%d",&N);
    for (tt = 1; tt <=N; tt++){
          my_scanf("%s",a);
          l = strlen(a);
          for (i=0;i<l;i++) my_printf("%c",convert[a[i]]);
          my_printf("\n");
    }

    return 0;
}
