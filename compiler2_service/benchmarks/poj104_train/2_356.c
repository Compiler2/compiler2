#define NUM_ITER 887

#include <header.h>


struct book
{   int  num;
    char peo[26];
} book[999];

int main_bench()
{   char zm,max;
	int n,i,k,num,cishu=-1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
                my_scanf("%d %s",&book[i].num,&book[i].peo);
	}
   for(zm='A';zm<='Z';zm++){
	  	 num=0;
	     	 for(i=0;i<n;i++){
		     for(k=0;k<26;k++){
		     if(book[i].peo[k]==zm)
			 num++;
			 }
		   }
		     if(num>cishu){
		     cishu=num;
		     max=zm;	 
		   }
		}
	my_printf("%c\n",max);
	my_printf("%d\n",cishu);
         for(i=0;i<n;i++){
            for(k=0;k<26;k++){
                   if(book[i].peo[k]==max)
           	   my_printf("%d\n",book[i].num);
		}
	}
	return 0;
}