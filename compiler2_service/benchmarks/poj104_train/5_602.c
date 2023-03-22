#include <header.h>

int main_bench()
{
    double w;
    char s1[600],s2[600];
    int l1,l2,i,a;
    a=0;
    my_scanf("%lf\n",&w);
    my_scanf("%s\n",s1);
    my_scanf("%s\n",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1!=l2){
               my_printf("error");}
    else{
         for(i=0;i<l1;i++){
                           if(!(s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')){
                                                                                    my_printf("error");
                                                                                    return 0;}}
         for(i=0;i<l1;i++){
                           if(!(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G')){
                                                                                    my_printf("error");
                                                                                    return 0;}}
         
         for(i=0;i<l1;i++){
                           if(s1[i]==s2[i]){
                                            a++;}
                                            }
         if((1.0*a)/l1>w){
                               my_printf("yes");}
         else{
               my_printf("no");}}
    return 0;
}