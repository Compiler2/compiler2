#include <header.h>

int main_bench(){  
 int n,k,j,i,a,s; 
 int sz[1000];  
my_scanf("%d %d",&n,&k); 
 for(i=0;i<n;i++)  {       
my_scanf("%d",&(sz[i]));  }  
for(j=0;j<n;j++)  {      
   if( s ==  1 )                 break;     
for(a=n-1;a>=0;a--)         {       
 if( (a!=j) && (sz[a]+sz[j]==k) )                {           
s=1;         
  break;                }         }    } 
if(s==1) { 
 my_printf("yes"); }
 else {  my_printf("no"); }  
 return 0;
}