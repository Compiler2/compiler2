#include <header.h>

int main_bench(){  
int n,i;  
my_scanf("%d",&n);  
i=n;  
while(i>1)  {		   	
if(i%2!=0){				
my_printf("%d*3+1=%d\n",i,i*3+1);				
i=i*3+1;}		
if(i%2==0){			
my_printf("%d/2=%d\n",i,i/2);			
i=i/2;}			   
}   
my_printf("End");	
return 0;
}
