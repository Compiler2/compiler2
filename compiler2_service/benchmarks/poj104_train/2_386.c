#define NUM_ITER 13011

#include <header.h>

int main_bench()
{
struct book
{
    int No;
    char name[27];
}b[1000];
    int i,j,m;
    my_scanf("%d",&m);
    my_printf("\n");
    for(i=0;i<m;i++){
        my_scanf("%d ",&b[i].No);
        my_scanf("%s",b[i].name);
    }
    int n,l,a[26]={0};
    for(i=0;i<m;i++){
        l=strlen(b[i].name);             
        for(j=0;j<l;j++){
            n=b[i].name[j];a[n-65]++;             
        }             
    }
    int max=0,x;
    for(i=0;i<26;i++){
        if(a[i]>max){max=a[i];x=i;}              
    }
    my_printf("%c\n%d",x+65,max);
    for(i=0;i<m;i++){
        l=strlen(b[i].name);             
        for(j=0;j<l;j++){
            if(b[i].name[j]==x+65){my_printf("\n%d",b[i].No);break;}                          
        } 
    }                
    return 0;
}
