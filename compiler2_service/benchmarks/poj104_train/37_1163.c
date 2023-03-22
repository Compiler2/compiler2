#include <header.h>


int main_bench()  {
  int n,i,k,m,t,l,q,p;
  
  char a[100001],c[27];
  char zm[]={'0','a','b','c','d','e','f','g','h','i','j','k','l','m',
	             'n','o','p','q','r','s','t','u','v','w','x','y','z'};
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
	  my_scanf("%s",a);
	  int b[27]={0};
      t=0;
	  l=0;
	  p=0;
      for(k=0;a[k];k++){
		  for(m=1;m<=26;m++){
			  if(a[k]==zm[m])  {b[m]++;}
		  }
	  }
	  for(m=1;m<=26;m++){
		  if(b[m]!=1)  {t++;}
		  else {c[l]=zm[m];l++;}
	  }
	  if(t==26)   {my_printf("no\n");}
      else{
		  for(k=0;a[k];k++){
			  for(q=0;q<l;q++){
				  if(a[k]==c[q]) {my_printf("%c\n",a[k]);p++;break;}
			  }
			  if(p==1)   {break;}
		  }
	  }

  }

return 0;
}




