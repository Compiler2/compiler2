#define NUM_ITER 3840

#include <header.h>

int main_bench()
{

int e,n,p,q;
e=0;
my_scanf("%d",&n);
for(int c=3;c<n-1;c++){
    p=0;
q=0;
        for(int i=2;i<c;i++){
                if(c%i==0){
                           p=1;}
                }
if(p==0){  for(int j=2;j<c+2;j++){
                if((c+2)%j==0){
                           q=1;}
        }
        }
if(p==0&&q==0){
        e=1; 
        my_printf("%d %d\n",c,c+2);
        }
        }


if(e==0){
          my_printf("empty");
          }
        int hou;
        my_scanf("%d",&hou);
return 0;
}
