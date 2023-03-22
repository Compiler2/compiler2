#include <header.h>

int main_bench()
{
int n,e;
e=0;
int a[20000];
my_scanf("%d",&n);
for(int i=0;i<n;i++){
     my_scanf("%d",&a[i]);
        }
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
        a[j]=0;
                }
                }
                     }
for(int i=0;i<n;i++){
           if(e==0&&a[i]!=0){
           my_printf("%d",a[i]);
           e=1;
           }
           else if(e==1&&a[i]!=0){
                 my_printf(" %d",a[i]);
                             }
           
        }     
              
           
   
int hou;
my_scanf("%d",&hou);
return 0;
}
