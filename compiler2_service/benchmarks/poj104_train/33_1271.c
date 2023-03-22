#define NUM_ITER 17508

#include <header.h>

int main_bench(){
    int n,m[1000],i;
    my_scanf("%d",&n);
    char a[1000][256];
    for(i=0;i<n;i++){
    my_scanf("%s",a[i]);
    m[i]=strlen(a[i]);}
    
    for(i=0;i<n;i++)
    {for(int j=0;j<m[i];j++){
             if(a[i][j]=='T') a[i][j]='A';
             else if(a[i][j]=='A') a[i][j]='T';
             else if(a[i][j]=='C') a[i][j]='G'; 
             else if(a[i][j]=='G') a[i][j]='C';}
             
             my_printf("%s\n",a[i]);}
    return 0;
}
