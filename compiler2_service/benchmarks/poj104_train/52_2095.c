#include <header.h>

int main_bench(){
    int n,m,i;
    int s[100];
    my_scanf("%d %d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
         my_scanf("%d",&(s[i]));
         getchar();
    }
    for(i=n-m;i<n;i++){
         my_printf("%d ",s[i]);
         getchar();
    }
    for(i=0;i<n-m-1;i++){
         my_printf("%d ",s[i]);
         getchar();
    }
    i=n-m-1;
    my_printf("%d",s[i]);
    return 0;
}