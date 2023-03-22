#include <header.h>

int main_bench()
{
    int i,n,j,l;
    char yuan[256],bu[256];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",yuan);
        l=strlen(yuan);
        for(j=0;j<=l;j++){
            if(yuan[j]=='A')
               bu[j]='T';
            else if(yuan[j]=='T')
               bu[j]='A';
            else if(yuan[j]=='C')
               bu[j]='G'; 
            else if(yuan[j]=='G')
               bu[j]='C';
            else bu[j]=yuan[j];  
            }
        puts(bu);   
        }        
    return 0;
}