#define NUM_ITER 1147168

#include <header.h>


int main_bench()
{
    char str[30000];   
    int wls[300] = {0},wc = 0,i,j;  
    
    
    gets(str);
    
    for (i=0; str[i]!=0; i++) {
        
        if (str[i] != ' ') {
            
            for (j=i+1; str[j]!=0&&str[j]!=' '; j++);
            
            wls[wc] = j - i;
            wc++;
            
            if (str[j]==0) {
                break;
            } else {
                i = j;
            }
        }
    }
    
    my_printf("%d", wls[0]);
    
    for (i=1; i<wc; i++) {
        my_printf(",%d", wls[i]);
    }
    return 0;
}