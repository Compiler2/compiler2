#define NUM_ITER 31566

#include <header.h>

int main_bench(){
    int n,i,j,len;
    char a[33],b[33];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     len=0;
                     my_scanf("%s\n",a);
                     len=strlen(a);
                     if(a[len-1]=='r'){
                                       for(j=0;j<len-2;j++){
                                                            b[j]=a[j];}
                                       b[len-2]='\0';}
                     if(a[len-1]=='y'){
                                       for(j=0;j<len-2;j++){
                                                            b[j]=a[j];}
                                       b[len-2]='\0';}
                     if(a[len-1]=='g'){
                                       for(j=0;j<len-3;j++){
                                                            b[j]=a[j];}
                                       b[len-3]='\0';}
                     my_printf("%s\n",b);
                     }
    return 0;
}
