#define NUM_ITER 1

#include <header.h>

int main_bench()
{
int c,r,s,a[100][100];
s=0;
my_scanf("%d %d",&r,&c);
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                my_scanf("%d",&a[i][j]);
                }
        }
while(c*r>=s){
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(i+j==s){
                     my_printf("%d\n",a[i][j]);
                     }    
                }
        }
        s++;
        }
int hou;
my_scanf("%d",&hou);
return 0;
}
