#include <header.h>

int main_bench(){
    int n,i;
    my_scanf("%d",&n);
    char a[33];
    for(i=0;i<n;i++){
        my_scanf("%s",a);
      int l=strlen(a);
     if(a[l-1]=='r'||a[l-1]=='y'){
         a[l-2]=0;
     }
     else if(a[l-1]=='g'){
         a[l-3]=0;
     }
          my_printf("\n%s",a);
      }
    return 0;
}


