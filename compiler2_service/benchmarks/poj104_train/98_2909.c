#include <header.h>


int main_bench()
{
    
    
    
    int n,i,l[300],line=0,f;
    char word[300][30];
    my_scanf("%d", &n);
    for(i=1;i<=n;i++){
                      my_scanf("%s", word[i]);
                      l[i]=strlen(word[i]);
                      }
    for(i=1;i<=n;i++){
                        f=0;
                        
                        if(line+l[i]<=80)
                        {
                            my_printf("%s", word[i]);line+=l[i];
                            
                            if(i != n && line+l[i+1]+1<=80){my_printf(" ");line+=1;f=1;}
                        }
                            
                        if(line>80||f==0)
                        {my_printf("\n");line=0;}
                        
                        
                    }
    
    return 0; 
    }
