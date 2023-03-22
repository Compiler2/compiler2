#include <header.h>

int main_bench()
{
    int n,i,j,k,e,age[100],six[100];
j=0;    
char id[100][10];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",&id[i]);
        my_scanf("%d",&age[i]);
        if(age[i]>=60){
           six[j]=i;
           j++;
           }
        }
    for(i=j;i>=0;i--){
        for(k=0;k<i-1;k++){
            if(age[six[k]]<age[six[k+1]]){
               e=six[k+1];
               six[k+1]=six[k];
               six[k]=e;
               }
            }
        }
    for(i=0;i<j;i++)
        my_printf("%s\n",id[six[i]]);
    for(i=0;i<n;i++){
        if(age[i]<60)
           my_printf("%s\n",id[i]);
        }
    return 0;
}

