#define NUM_ITER 1513640

#include <header.h>

    
    int main_bench()
    {
        char cc[101],dd[101],e;
        char *c,*d;  
        int i=0;
        gets(cc);
    
        d=dd;
        c=cc;
        for(;*c!='\0';c++,d++){
        *d=*c+*(c+1);                      
        }
        
        e=*(c-1);
        *d='\0';
        c=cc;
        *(d-1)=*c+e;
        
        d=dd;
        my_printf("%s",d);
        return 0;
    }
