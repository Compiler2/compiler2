#include <header.h>

char word[200][41];
void pb(char* a,int p,int t)
{
    t += strlen(a);
    if(t > 80)
    {
      my_printf("\n");
      t=0;
      t += strlen(a);
    }
    else if(t - strlen(a))
     my_printf(" "); 
    my_printf("%s",a);
    t++;
    if(p) 
    pb(word[p-1],p-1,t);
}
int main_bench()
{   
  int n,i;
  char m;
  my_scanf("%d",&n);
  for(i = n-1;i >= 0; i--)
  {
   my_scanf("%s",word[i]);
   getchar(); 
  }
  pb(word[n-1],n-1,0);
 return 0;    
}
