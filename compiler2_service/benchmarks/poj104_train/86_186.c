#define NUM_ITER 1360

#include <header.h>


int main_bench(){
  int n;
  int miss,misspointer;
  int second = 0, time = 0;

  my_scanf( "%d", &n );
  for ( int i = 0; i < n; i++ ) {
      my_scanf( "%d", &miss );
      if ( miss == 0 ){
         my_printf( "60\n");
         continue;
      }
      int j = 0;
      do{
        my_scanf( "%d", &misspointer );
        if ( (second < 60)&&(misspointer < 60) ){
          second = misspointer + time * 3;
		 
          if ( (second + 2) < 60 ){
            time ++;
          }
        }
        j++;
      }while( j < miss );
	  if ( (second < 60)&&((second + 2)>60) ){
		  second -= time * 3;
	  }
	  else{
		second = 60 - time * 3;
	  }
      my_printf( "%d\n", second );
	  second = 0;
	  time = 0;
	
  }
  return 0;
}