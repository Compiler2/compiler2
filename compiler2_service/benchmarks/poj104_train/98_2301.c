#include <header.h>

int main_bench()
{
  int n;
  int i,j;
  int k;
  int end=0;;
  my_scanf("%d",&n);
  char dz[50];
  for(i=0;i<n;i++)
  {
     for (i = 0; i < n; i++) {   
    my_scanf("%s", dz);    
    k = strlen(dz);    
  
    if (end + k +1> 80) {
        my_printf("\n");       
        end = 0;             
    }
    else if (end > 0) {       
        my_printf(" ");        
        end++;               
    }
    my_printf("%s", dz);      
    end += k;            
}
  }
return 0;
}
