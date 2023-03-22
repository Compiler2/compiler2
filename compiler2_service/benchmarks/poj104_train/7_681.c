#define NUM_ITER 924649

#include <header.h>

int main_bench(){
   char s[257],a[257],b[257];
   int n,m;
   int i,j,k=0;
   gets(s);
   my_scanf("%s%s",a,b);
   n=strlen(s);
   m=strlen(a);
   for(i=0;i<n;i++)
   {
	   if(s[i]==a[0]&&s[i+m-1]==a[m-1]){
		   for(j=i;j<i+m;j++)
		   {
			   if(s[j]==a[j-i])  
			   {
				   k++;
			   }
		   }
		   
		   if(k==m)
		   {
			 	   my_printf("%s",b);
				   i+=m-1;
		   }else
		   {
			   my_printf("%c",s[i]);
		   }
		 
		}else
	  {
			my_printf("%c",s[i]);
	}
   }
   my_printf("\n");


  
   return 0;
}