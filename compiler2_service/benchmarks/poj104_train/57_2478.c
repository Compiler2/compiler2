#include <header.h>




int main_bench(){
    int n;
    char s[40];
    char local[3][5] = {
         "er", "ly", "ing"
         }; 
    char res[40];
    my_scanf("%d", &n);
    
    while(n--){
        
         my_scanf("%s", s);
         int len = strlen(s);
         if(len > 2 && strcmp(s + len - 2, local[0]) == 0){
                for(int i = 0; i < len - 2; ++i){
                        my_printf("%c", s[i]);
                }
                my_printf("\n");
         }
         else if(len > 2 && strcmp(s + len - 2, local[1]) == 0){
              for(int i = 0; i < len - 2; ++i){
                        my_printf("%c", s[i]);
                }
                my_printf("\n");
         }
         else if(len > 3 && strcmp(s + len - 3, local[2]) == 0){
              for(int i = 0; i < len - 3; ++i){
                        my_printf("%c", s[i]);
                }
                my_printf("\n");
         }
         else{
              my_printf("%s\n", s);
         }
    }
    
}
