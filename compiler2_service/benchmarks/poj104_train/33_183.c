#define NUM_ITER 19790

#include <header.h>

int main_bench()
{
  int n,i,j;
  my_scanf("%d",&n);
  char str[1000][256];
  char a='A',b='T',c='C',d='G';
  for(i=0;i<n;i++){
    my_scanf("%s",str[i]);
  }
  for(i=0;i<n;i++){
	  for(j=0;j<strlen(str[i]);j++){
		  if(str[i][j]==a){
		    str[i][j]=b;
		  }
          else if(str[i][j]==b){
		   str[i][j]=a;
		  }	  
		  else if(str[i][j]==c){
			  str[i][j]=d;
		  }
		  else if(str[i][j]==d){
		      str[i][j]=c;
		  }
	  }
  }
   for(i=0;i<n;i++){
	   
		   my_printf("%s\n",str[i]);
   }
	   return 0;
}