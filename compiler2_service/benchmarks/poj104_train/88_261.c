#include <header.h>



int main_bench()
{
    char zifu[30];
    int i;

    gets(zifu);              

    for(i=0;i<strlen(zifu);i++){        
	if(zifu[i]>='0'&&zifu[i]<='9'){    
	    my_printf("%c",zifu[i]);
	}else{
	    if((zifu[i]<'0'||zifu[i]>'9')&&(zifu[i-1]>='0'&&zifu[i-1]<='9')){
		my_printf("\n");	
	    }
	}
    }
    return 0;

}
