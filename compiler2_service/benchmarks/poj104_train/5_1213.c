#define NUM_ITER 785038

#include <header.h>


int main_bench(){ 
	int i,q;
    char a[501],b[501],c[10];
	double n,t=0;
	gets (c);
	n = atof(c);
	gets (a);
	gets (b);
	q=strlen(a);
	if (strlen(a)!=strlen(b)){
my_printf("error");
return 0;
	}
else {
   for (i=0;a[i]!='\0';i=i+1){
	   if (a[i]>97||b[i]>97){

		   my_printf("error");
	   return 0;
	   }
	     else {
           if (a[i]==b[i])
              t=t+1;
	   
          
          
		 }
   }
}
	      



          if (n<0)
                my_printf ("yes");
          else{
			  if (t/(q*1.00)>n)
                my_printf ("yes");
              else 
                my_printf ("no");
		  }

return 0;
}
