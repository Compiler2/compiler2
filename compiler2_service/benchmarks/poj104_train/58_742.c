#define NUM_ITER 2883

#include <header.h>

int main_bench(){
    int i,j,l,n,o=1,count=0;
    char a[100];
    my_scanf("%d",&n);getchar();
    for(j=0;j<n;j++){
        gets(a);
        l=strlen(a);
        if(a[0]>='0'&&a[0]<='9') o=0;
        else{
            for(i=0;i<l;i++){
                if((a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='_')){
                    count++;                    
                    } 
                }
            }
        if(count==l) o=1;
        else o=0;
        my_printf("%d\n",o);
        count=0;       
        for(i=0;i<100;i++) a[i]=' ';
        }
    
    
    my_scanf("%d",&i);
    return 0;
    }