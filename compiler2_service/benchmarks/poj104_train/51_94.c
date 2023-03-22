#define NUM_ITER 633114

#include <header.h>

int main_bench(){
    char a[600],b[600][6]={0};
    int n,i,j,k,l,o,p,count[600]={0},max;
    my_scanf("%d",&n);
    my_scanf("%s",a);
    l=strlen(a);
    
    for(k=0;k<=l-n;k++){
        o=0;
        for(i=k;i<k+n;i++){
            b[k][o++]=a[i];
            }
        
         
         
        }
    
    for(i=0;i<k;i++){
        for(j=i+1;j<=k;j++){
            if(strcmp(b[i],b[j])==0){
                
                count[i]++; 
                
                }
            }
        }
    max=count[i]+1;
    for(i=0;i<=l-n;i++){
        if(count[i]>max-1){
            max=count[i]+1;            
            }
        }
    if(max==1) my_printf("NO");
    else{
        my_printf("%d\n",max);
        for(i=0;i<=l-n;i++){
            if(max==count[i]+1)  my_printf("%s\n",b[i]);            
            }
        }
    my_scanf("%d",&i);
    return 0;
    }
