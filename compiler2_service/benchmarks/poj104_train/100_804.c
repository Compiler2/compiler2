#define NUM_ITER 814992

#include <header.h>

int main_bench()

{
	char b[300];
int l,i,a[26]={0},p=0;
my_scanf("%s",b);
l=strlen(b);
for(i=0;i<l;i++)
{
switch(b[i])
{
case 'a':a[0]++;break;
case 'b':a[1]++;break;
case 'c':a[2]++;break;
case 'd':a[3]++;break;
case 'e':a[4]++;break;
case 'f':a[5]++;break;
case 'g':a[6]++;break;
case 'h':a[7]++;break;
case 'i':a[8]++;break;
case 'j':a[9]++;break;
case 'k':a[10]++;break;
case 'l':a[11]++;break;
case 'm':a[12]++;break;
case 'n':a[13]++;break;
case 'o':a[14]++;break;
case 'p':a[15]++;break;
case 'q':a[16]++;break;
case 'r':a[17]++;break;
case 's':a[18]++;break;
case 't':a[19]++;break;
case 'u':a[20]++;break;
case 'v':a[21]++;break;
case 'w':a[22]++;break;
case 'x':a[23]++;break;
case 'y':a[24]++;break;
case 'z':a[25]++;break;
}
}
for(i=0;i<26;i++)
{
if(a[i]!=0) p=1; 
}
if(p==0) my_printf("No");

if(p==1)
{
if(a[0]!=0) my_printf("a=%d\n",a[0]);
if(a[1]!=0) my_printf("b=%d\n",a[1]);
if(a[2]!=0) my_printf("c=%d\n",a[2]);
if(a[3]!=0) my_printf("d=%d\n",a[3]);
if(a[4]!=0) my_printf("e=%d\n",a[4]);
if(a[5]!=0) my_printf("f=%d\n",a[5]);
if(a[6]!=0) my_printf("g=%d\n",a[6]);
if(a[7]!=0) my_printf("h=%d\n",a[7]);
if(a[8]!=0) my_printf("i=%d\n",a[8]);
if(a[9]!=0) my_printf("j=%d\n",a[9]);
if(a[10]!=0) my_printf("k=%d\n",a[10]);
if(a[11]!=0) my_printf("l=%d\n",a[11]);
if(a[12]!=0) my_printf("m=%d\n",a[12]);
if(a[13]!=0) my_printf("n=%d\n",a[13]);
if(a[14]!=0) my_printf("o=%d\n",a[14]);
if(a[15]!=0) my_printf("p=%d\n",a[15]);
if(a[16]!=0) my_printf("q=%d\n",a[16]);
if(a[17]!=0) my_printf("r=%d\n",a[17]);
if(a[18]!=0) my_printf("s=%d\n",a[18]);
if(a[19]!=0) my_printf("t=%d\n",a[19]);
if(a[20]!=0) my_printf("u=%d\n",a[20]);
if(a[21]!=0) my_printf("v=%d\n",a[21]);
if(a[22]!=0) my_printf("w=%d\n",a[22]);
if(a[23]!=0) my_printf("x=%d\n",a[23]);
if(a[24]!=0) my_printf("y=%d\n",a[24]);
if(a[25]!=0) my_printf("z=%d\n",a[25]);
}
return 0;
}





