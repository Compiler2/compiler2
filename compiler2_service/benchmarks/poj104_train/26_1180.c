#define NUM_ITER 1321028

#include <header.h>

int main_bench(){    
char zfc[1000],cs[1000]; 
int n,e,j=0,i=0,a; 
gets(zfc);    
n=strlen(zfc); 
while(i<n){  
    e=0;  
    cs[j]=zfc[i];  
    if(zfc[i]==' '){   
        for(a=i+1;a<n;a++){    
            if(zfc[a]==' '){ e++; continue;  }    
            else{  break; }   
        }      
        i=i+e; }     
    j++;  i++; }
    cs[j]='\0';
my_printf("%s",cs);
return 0;
}
