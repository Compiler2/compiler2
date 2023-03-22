#include <header.h>


int main_bench()
{
  char word[40];
  int n,m,i,j,k,p,q,sum=0,flag=0;
  my_scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
       my_scanf("%s",word);
       if(sum==0)
       {
         my_printf("%s",word);
                
       }
      
       if(sum!=0&&sum<=80&&(sum+strlen(word))<=80)
       {
         my_printf(" %s",word);
                                            
       }
       
       if(sum!=0&&sum<=81&&(sum+strlen(word))>80)
       {
         my_printf("\n%s",word);sum=0;
                                           
       }
        sum+=strlen(word)+1;                         
  }
  	
  return 0;
}
