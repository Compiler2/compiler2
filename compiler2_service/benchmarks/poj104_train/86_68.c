#define NUM_ITER 1035

#include <header.h>



int main_bench()
{
  int i,n,nn,k,t,j,c;  
  my_scanf("%d",&n);
  for (i=0;i<n;i++){
      my_scanf("%d",&nn);
	  if(nn==0){
		  my_printf("60\n");
	  }
	  else{
		  c=0;
		  t=0;

        for (j=1;j<=nn;j++){
           my_scanf("%d",&k);
		   if (k<60){
			   c=k;
			   t=k+j*3;
		   }
		}
		if (t>=63)
			c=c-(t-63);
		else if (t<60)
			c=c+(60-t);
		my_printf("%d\n",c);
	  }
  }
	return 0;
}
