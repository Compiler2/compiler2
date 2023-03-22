#include <header.h>

int main_bench(){
    char sz[500];
    int i,n;
    my_scanf("%d",&n);
    for (i=0;i<n;i++){
        my_scanf("%s",sz);
        if (sz[strlen(sz)-1]=='r')  sz[strlen(sz)-2]='\0';
       if (sz[strlen(sz)-1]=='y') sz[strlen(sz)-2]='\0';
       if (sz[strlen(sz)-1]=='g')  sz[strlen(sz)-3]='\0';
      my_printf("%s\n",sz);
    }
    return 0;
}
