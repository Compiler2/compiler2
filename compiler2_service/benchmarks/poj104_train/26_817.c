#define NUM_ITER 1547182

#include <header.h>

int main_bench(){
char t[150],x[150];
char *pt=t,*px=x;
gets(t);
for (;*pt!='\0';pt++,px++){
	if ((*pt!=' ')||((*pt=' ')&&(*(pt-1)!=' '))){
		
	*px=*pt;	
	}
	else {px--;}

}
*px='\0';
my_printf ("%s",x);
return 0;
}