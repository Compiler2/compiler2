#include <header.h>


int main_bench()
{
   int n,i,j,k;
   int a[300];
   int b[300];

   my_scanf ("%d",&n);
      
   for (i=0;i<n;i++){
   
        my_scanf ("%d",&a[i]);
   
   }
   b[0]=a[0];
   k=0;
   for (i=0;i<n;i++){
	   
	   for (j=i+1;j<n;j++){
	   
		   if (a[i]==a[j]){a[j]=0;}
        
	   }
	   if (a[i]!=0){b[k]=a[i];k+=1;}
   }


   for (i=0;i<k-1;i++)
   {
     my_printf ("%d,",b[i]);
   }
   my_printf ("%d\n",b[k-1]);

  return 0;

}