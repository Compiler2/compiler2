#define NUM_ITER 822814

#include <header.h>

int main_bench()
{
    int p,q,i,flag=1;double m,c=0,d=0;char a[10086],b[10086];
    my_scanf("%lf",&m);
    my_scanf("%s",a);my_scanf("%s",b);
    p=strlen(a);q=strlen(b);if(p!=q){flag=0;}
    for(i=0;a[i]!='\0';i++)
    {
                           if((a[i]=='A')||(a[i]=='G')||(a[i]=='C')||(a[i]=='T')){}else{flag=0;}
                           }
     for(i=0;b[i]!='\0';i++)
    {
                           if((b[i]=='A')||(b[i]=='G')||(b[i]=='C')||(b[i]=='T')){}else{flag=0;}
                           }
    for(i=0;a[i]!='\0';i++)
    {
                           if(a[i]==b[i]){c++;}d++;
                           }
    if(flag==0){my_printf("error");}
    if(flag==1){
    if(c/d>=m){
    my_printf("yes");}else{my_printf("no");}}
    
    return 0;
}