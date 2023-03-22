#include <header.h>

 
int main_bench() 
{ 
    int days[] = {    0, 31, 28, 31, 30, 31, 30, 
                31, 31, 30, 31, 30, 31    }; 
    char * weekdays[] =  
        { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"}; 
 
    int y, m, d, w, i; 
    my_scanf("%d%d%d", &y, &m, &d); 
 
 w = y % 7 + y / 4 - y / 100 + y / 400; 
 
     for (i = 1; i < m; i++) 
        w += days[i]; 
    w += d - 1; 
 
   
    if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && (m <= 2)) 
        w--; 
    if(w%7==0) my_printf( "Sun."); 
 if(w%7==1) my_printf( "Mon."); 
 if(w%7==2) my_printf( "Tue."); 
 if(w%7==3) my_printf( "Wed."); 
 if(w%7==4) my_printf("Thu.");  
 if(w%7==5) my_printf("Fri.");  
if(w%7==6) my_printf( "Sat."); 
    return 0; 
}