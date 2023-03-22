#include <header.h>

int main_bench(){
int n,k;
int sz[1000];
int a,b,c=0;
my_scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
        }
for(int p=0;p<n;p++){
        for(int i=1;i<=n;i++){
                a=sz[p];
                b=sz[i];
                if(a+b==k){c+=1;
                }
                }
                }
if(c==0){my_printf("no");}
else my_printf("yes");
return 0;
    }
