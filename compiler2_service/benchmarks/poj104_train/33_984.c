#include <header.h>

int main_bench()
{
   int n;
   my_scanf("%d",&n);
   char zfc[256];
   for(int i=0;i<=n;i++){
          gets(zfc);
          for(int j=0;j<strlen(zfc);j++){
                  if(j==strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  my_printf("T\n"); 
                                  }
                                    if(zfc[j]=='T'){
                  my_printf("A\n"); 
                                  }
                                                    if(zfc[j]=='G'){
                  my_printf("C\n"); 
                                  }
                                                    if(zfc[j]=='C'){
                  my_printf("G\n"); 
                                  }
                                      }
                                         if(j!=strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  my_printf("T");
                                  }
                                    if(zfc[j]=='T'){
                  my_printf("A"); 
                                  }
                                                    if(zfc[j]=='G'){
                  my_printf("C"); 
                                  }
                                                    if(zfc[j]=='C'){
                  my_printf("G"); 
                                  }
                                      }
                  
                  }
                  }           
                                      
   int hou;
   my_scanf("%d",&hou);
    return 0;
}
