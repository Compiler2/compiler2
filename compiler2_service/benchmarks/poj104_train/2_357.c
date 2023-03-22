#define NUM_ITER 13075

#include <header.h>


int main_bench(){
    struct book {
           char z[27];
           int no;
           };
           
           struct book a[1000];
           
    int m, i, x, p, j  ; 
    my_scanf("%d", &m);
    
    for (i=0; i<m; i++){
        my_scanf("%d%s", &a[i].no, a[i].z);
        } 
    
    int memo[26]={0};
    
    for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            x=(a[i].z[j])-65;
            memo[x]++;
            }
        } 
        x=0;
        p=0;
    for (i=0; i<26; i++){
       
        if (memo[i]>x){x=memo[i];
                       p=i;
                       }
        }
     
     my_printf("%c\n", p+65); 
      
     int n=0;
        
     for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            if (a[i].z[j]==p+65)
            n++;  
            }
        } 
        
     my_printf("%d\n", n);
     
     for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            if (a[i].z[j]==p+65){
            my_printf("%d\n", a[i].no);
            break;}  
            }
        } 
        
        
    return 0;    
    
    }
