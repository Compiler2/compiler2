#define NUM_ITER 562189

#include <header.h>

int main_bench()
{
    int a,b,c,A,B,C;
    for(A=0;A<=2;A++)
      for(B=0;B<=2;B++)
        for(C=0;C<=2;C++)
        {
             a=b=c=0;
             if(B>A) a++;
             if(C==A) a++;
             if(A>B) b++;
             if(A>C) b++;
             if(C>B) c++;
             if(B>A) c++;
             if(A+a==2&&B+b==2&&C+c==2)
             {
                 if(A>B&&A>C)
                 {
                     if(B>C) my_printf("CBA");
                     if(C>B) my_printf("BCA");
                 }
                 if(B>A&&B>C)
                 {
                     if(A>C) my_printf("CAB");
                     if(C>A) my_printf("ACB");
                 }
                 if(C>B&&C>A)
                 {
                     if(B>A) my_printf("ABC");
                     if(A>B) my_printf("BAC");
                 }
             }
        }
}