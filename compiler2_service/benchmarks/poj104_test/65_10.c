#define NUM_ITER 34682

#include <header.h>

int main_bench(){
    int a[200],b[200],s1=0,s2=0,n,i;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
    }
 for(i=0;i<n;i++){
       if(a[i]==b[i]){s1++;s2++;}
       if(a[i]==0){if(b[i]==1)s1++;
                   if(b[i]==2)s2++;
       }
        if(a[i]==1){if(b[i]==2)s1++;
                   if(b[i]==0)s2++;
       }
        if(a[i]==2){if(b[i]==0)s1++;
                   if(b[i]==1)s2++;
       }
    }
    if(s1>s2)my_printf("A");
    if(s1<s2)my_printf("B");
     if(s1==s2)my_printf("Tie");
     return 0;
}