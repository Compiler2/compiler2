#define NUM_ITER 825080

#include <header.h>


int main_bench()
{
    char s[101],a[101],b[101],word[100][101];
    int n,k,i;
    gets(s);
    gets(a);
    gets(b);
    
    
    n = 0; k = 0;
    for (i = 0; s[i]!=0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(word[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(word[n], (s + k));
    n++;
    
    
    for(i=0;i<n;i++){  
                     if(strcmp(a,word[i])==0){
                                              strcpy(word[i],b);
                                              }
                                              }
                                              
     for(i=0;i<n-1;i++){ 
                      my_printf("%s ",word[i]); 
                      }
                      
     my_printf("%s",word[n-1]);
    
    
      return 0;
}
