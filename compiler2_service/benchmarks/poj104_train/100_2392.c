#define NUM_ITER 15659

#include <header.h>

int main_bench()
{
	int num,ii,jj,mm,pp,A[130]={0},a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	char fu;
	for(ii=0;ii<310;ii++)
	{
	my_scanf("%c",&fu);
	if(  (fu>=65&&fu<=90)  ||  (fu>=97&&fu<=122)  )
	{num=fu;
	
	A[num]++;
	if(fu==' ') break;

	}

	
	}

	if(A[65]!=0) my_printf("A=%d\n",A[65]);
	if(A[66]!=0) my_printf("B=%d\n",A[66]);
	 if(A[67]!=0) my_printf("C=%d\n",A[67]);
	 if(A[68]!=0) my_printf("D=%d\n",A[68]);
	 if(A[69]!=0) my_printf("E=%d\n",A[69]);
	 if(A[70]!=0) my_printf("F=%d\n",A[70]);
	 if(A[71]!=0) my_printf("G=%d\n",A[71]);
	if(A[72]!=0) my_printf("H=%d\n",A[72]);
	 if(A[73]!=0) my_printf("I=%d\n",A[73]);
	 if(A[74]!=0) my_printf("J=%d\n",A[74]);
	 if(A[75]!=0) my_printf("K=%d\n",A[75]);
	 if(A[76]!=0) my_printf("L=%d\n",A[76]);
	 if(A[77]!=0) my_printf("M=%d\n",A[77]);
	 if(A[78]!=0) my_printf("N=%d\n",A[78]);
	 if(A[79]!=0) my_printf("O=%d\n",A[79]);
	 if(A[80]!=0) my_printf("P=%d\n",A[80]);
	 if(A[81]!=0) my_printf("Q=%d\n",A[81]);
	 if(A[82]!=0) my_printf("R=%d\n",A[82]);
 if(A[83]!=0) my_printf("S=%d\n",A[83]);
	 if(A[84]!=0) my_printf("T=%d\n",A[84]);
	if(A[85]!=0) my_printf("U=%d\n",A[85]);
	 if(A[86]!=0) my_printf("V=%d\n",A[86]);
	 if(A[87]!=0) my_printf("W=%d\n",A[87]);
	 if(A[88]!=0) my_printf("X=%d\n",A[88]);
	 if(A[89]!=0) my_printf("Y=%d\n",A[89]);
	 if(A[90]!=0) my_printf("Z=%d\n",A[90]);
	 if(A[97]!=0) my_printf("a=%d\n",A[97]);
	  if(A[98]!=0) my_printf("b=%d\n",A[98]);
	  if(A[99]!=0) my_printf("c=%d\n",A[99]); 
	  if(A[100]!=0) my_printf("d=%d\n",A[100]);
	  	  if(A[101]!=0) my_printf("e=%d\n",A[101]);
	  if(A[102]!=0) my_printf("f=%d\n",A[102]);
	  if(A[103]!=0) my_printf("g=%d\n",A[103]);
	  if(A[104]!=0) my_printf("h=%d\n",A[104]);
	  if(A[105]!=0) my_printf("i=%d\n",A[105]);
	  if(A[106]!=0) my_printf("j=%d\n",A[106]);
	  if(A[107]!=0) my_printf("k=%d\n",A[107]);
	  if(A[108]!=0) my_printf("l=%d\n",A[108]);
	  if(A[109]!=0) my_printf("m=%d\n",A[109]);
	  if(A[110]!=0) my_printf("n=%d\n",A[110]);
	  if(A[111]!=0) my_printf("o=%d\n",A[111]);
 if(A[112]!=0) my_printf("p=%d\n",A[112]);
 if(A[113]!=0) my_printf("q=%d\n",A[113]);
 if(A[114]!=0) my_printf("r=%d\n",A[114]);

 if(A[115]!=0) my_printf("s=%d\n",A[115]); 
 if(A[116]!=0) my_printf("t=%d\n",A[116]);
 if(A[117]!=0) my_printf("u=%d\n",A[117]);
 if(A[118]!=0) my_printf("v=%d\n",A[118]);

 if(A[119]!=0) my_printf("w=%d\n",A[119]);
 if(A[120]!=0) my_printf("x=%d\n",A[120]);
 if(A[121]!=0) my_printf("y=%d\n",A[121]);
 if(A[122]!=0) my_printf("z=%d\n",A[122]);
 
 pp=0;for(mm=0;mm<130;mm++)
 {
 if(A[mm]!=0) pp=1;
 }
	if(pp==0) my_printf("No");	  	 
	

return 0;
}
