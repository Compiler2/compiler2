#define NUM_ITER 721

#include <header.h>

int main_bench()
{
int t,a[27]={0},i,j,k;
char str[100000];
my_scanf("%d",&t);
for(i=0;i<t;t++)
{
    memset(str,'\0',100000*sizeof(char)); 
    memset(a,0,27*sizeof(int));
    my_scanf("%s",str);
    for(j=0;j<strlen(str);j++)
     {
      k=str[j]-96;
      a[k]++;                          
     } 
     for(j=0;j<strlen(str);j++)
     {
       k=str[j]-96;   
      if(a[k]==1)
      {   my_printf("%c\n",str[j]);
          break;}   
      }     
     if(j==strlen(str))
     {my_printf("no\n");
      break;}  
}   
    

return 0;    
} 