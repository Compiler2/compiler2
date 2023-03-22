#define NUM_ITER 623022

#include <header.h>

int main_bench()
{  char a[50],b[50];
    int i,k,j,len;
   my_scanf("%s%s",a,b);
   len=strlen(a);
   for(k=0;k<50;k++){
	   if(b[k]==a[0]){
		   for(j=k+1;j<=k+1+len;j++){
			   for(i=0;i<len;i++){
				   
				   if(b[j]==a[i])
				   {
			   my_printf("%d\n",k);
			   break;
			   }
			   }break;
		   }break;
	   }
   
   }

	return 0;}
