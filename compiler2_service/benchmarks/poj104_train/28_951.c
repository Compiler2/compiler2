#define NUM_ITER 1172045

#include <header.h>


int main_bench()
{
    char str[300*100];   
    int wls[300] = {0};  
    int wc = 0;          
    int i, j;

    
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






int main_e5_3()
{
    char str[101];
    int i, j;
    
    my_scanf("%s", str);
    
    for (i=0,j=strlen(str)-1; i<j; i++,j--) {
        if (str[i] != str[j]) {
            
            my_printf("no");
            return 0;
        }
    }
    
    my_printf("yes");
    return 0;
}
