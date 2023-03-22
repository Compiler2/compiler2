#define NUM_ITER 953958

#include <header.h>


int main_bench()
{int i=1;
	int n,w;
	my_scanf("%d",&w);w+=12;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=28;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)my_printf("%d",i);i++;
	w+=31;
	if(w%7==5)my_printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)my_printf("%d\n",i);i++;}