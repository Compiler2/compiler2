#define NUM_ITER 453976

#include <header.h>

int main_bench()
{
    char a[30];
    int i;
    gets(a);
    for(i=0;i<30;i++){
                      if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'){
                                                                                                                   my_printf("%c",a[i]);
                                                                                                                   }
                      else my_printf("\n");
                      }
    return 0;
}