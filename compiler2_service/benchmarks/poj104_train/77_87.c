#define NUM_ITER 928401

#include <header.h>

int main_bench()
{
int n,sp,st[100]={0};
char ch,boy;
my_scanf("%c",&boy);
for(n=sp=1;sp>0;n++)
{
     my_scanf("%c",&ch);
     if(ch==boy){
         st[sp]=n;
         sp++;
         }
     else{
         sp--;
        my_printf("%d %d\n",st[sp],n);}
 }
    return 0;
}