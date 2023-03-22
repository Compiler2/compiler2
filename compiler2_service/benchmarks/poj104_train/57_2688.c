#include <header.h>

int main_bench(){
    int n,i,j,s,k;
    char c[40];
    my_scanf("%d",&n);
    for (i=0;i<n;i++){
        my_scanf("%s",c);
        s=strlen(c);
        if (c[s-2]=='e'&&c[s-1]=='r'){
           for (k=0;k<s-2;k++)  my_printf("%c",c[k]);
           my_printf("\n");
        }
        if (c[s-2]=='l'&&c[s-1]=='y'){
           for (k=0;k<s-2;k++)  my_printf("%c",c[k]);
           my_printf("\n");
        }
        if (c[s-3]=='i'&&c[s-2]=='n'&&c[s-1]=='g'){
           for (k=0;k<s-3;k++)  my_printf("%c",c[k]);
           my_printf("\n");
        }
    }
    return 0;
}
