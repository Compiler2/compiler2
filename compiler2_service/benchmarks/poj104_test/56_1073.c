#include <header.h>


int main_bench()
{  
	 
       int number;

 

      

       int reversed_number = 0;

       

     

       int remainder = 0;

       

       my_scanf("%d",&number);


       while(number != 0){

              remainder = number % 10;

              reversed_number *= 10;

              reversed_number += remainder;

              number /= 10;

       }

 

     

       my_printf("%d\n",reversed_number);

       



	return 0;
}
    