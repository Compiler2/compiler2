#define NUM_ITER 541472

#include <header.h>

int main_bench()
{char *a,*s1;
a=(char *)malloc(101*sizeof(char));
s1=(char *)malloc(101*sizeof(char));
gets(a);
int i,l;
for(i=0;*(a+i+1);i++)
(*(s1+i))=*(a+i)+*(a+i+1);
(*(s1+(i++)))=*(a+i)+*a;
(*(s1+i))='\0';
my_printf("%s",s1);
return 0;}