#define NUM_ITER 1088194

#include <header.h>

int main_bench()
{
   char str1[50],str2[50];
   my_scanf("%s %s",str1,str2);
   int len1,len2;
   len1=strlen(str1);
   len2=strlen(str2);
   int i,j;
   for(j=0;j<len2;j++){
	   if(str2[j]==str1[0])
		   for(i=0;i<len1;i++){
		
			   if(str2[j+i]!=str1[i])
				   break;
		   }
		   if ( i == len1){
				my_printf("%d\n",j);
				break;
		   }

   }
   return 0;
}