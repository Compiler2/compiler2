#include <header.h>


int main_bench()
{
 int number, largest, second, counter,n;
 counter = 1;

 my_scanf("%d",&n);
 largest=-10000000; second=largest;
 while ( counter <= n )
 {
  
  my_scanf ( "%d", &number );

  if ( number >= largest )
  {
      second  = largest;
      largest = number;
  }
  else if (second< number&&number < largest)
   second =number;
  else if(number<= second)
	  second=second;
  
  counter++;
 }
 my_printf ( "%d\n", largest );
 my_printf ( "%d\n", second);
} 