#include <header.h>

int main_bench()
{
    int i,j,l,sum,yes;
    char m[301],a;
    my_scanf("%s",m);
    l=strlen(m);
    for(i=0;i<l-1;i++){
                     for(j=0;j<l-i-1;j++)
                     if (m[j]>m[j+1]){
                                                a=m[j];
                                                m[j]=m[j+1];
                                                m[j+1]=a;
                                                }
                     } 
    sum=0;
    yes=0;
    for(i=0;i<l;i++){
                     if((m[i]>='A'&&m[i]<='Z')||(m[i]>='a'&&m[i]<='z')){
                                                                        sum++;
                                                                        if(m[i]!=m[i+1]){
                                                                                         my_printf("%c=%d\n",m[i],sum);
                                                                                         sum=0;
                                                                                         yes=1;
                                                                                         }
                                                                        }
                     }
    if(yes==0) my_printf("No");
    return 0;
}
