#define NUM_ITER 1510684

#include <header.h>

int main_bench()
{
   char a[100];
   gets(a);
   for(int i=0;a[i]!='\0';i++){
		   my_printf("%c",a[i]);
		   if(a[i]==' '){
	           for(int j=i+1;a[j]==' ';j++){
	                i++;	
			   }
		   }
   }
    return 0;
}

