#include <header.h>

int main_bench(){
    int n,i,s1[200],s2[200],a=0,b=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&s1[i],&s2[i]);
        if((s1[i]-s2[i])==1)b++;
        else if((s2[i]-s1[i])==1)a++;
        else if(s2[i]>s1[i])b++;
        else if(s2[i]<s1[i])a++;  
    }
    if(a<b)my_printf("B");
    else if(a==b)my_printf("Tie");
    else if(a>b)my_printf("A");
    return 0;
}

