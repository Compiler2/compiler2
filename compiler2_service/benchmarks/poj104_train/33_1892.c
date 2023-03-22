#define NUM_ITER 21335

#include <header.h>


int main_bench()
{
	int n,i,j,len[1000]={0};
  char a[1000][260];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
	  my_scanf("%s",&a[i]);
	  len[i]=strlen(a[i]);
  }
  for(i=0;i<n;i++){
	  for(j=0;j<len[i];j++){
		  if(a[i][j]=='A'){
			  a[i][j]='T';
		  }
		  else if(a[i][j]=='T'){
			   a[i][j]='A';
		  }
		  else if(a[i][j]=='C'){
			   a[i][j]='G';
		  }
		  else if(a[i][j]=='G'){
			   a[i][j]='C';
		  }
	  }
	  
  }
  for(i=0;i<n;i++){
	 my_printf("%s\n",a[i]);
		  }
	return 0;   
}
