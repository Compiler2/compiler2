#define NUM_ITER 359517

#include <header.h>

int main_bench()
{
	char a[300];
	char b[52];
	int i=0,j=0;
	int p,q,t,s;
	my_scanf("%s",a);
	while(j<52)
	{
		b[j]=0;
		j++;
	}
	while(a[i]!='\0')
	{
		if (a[i]=='a')
			b[0]=b[0]+1;
		else if (a[i]=='b')
			b[1]=b[1]+1;
		else if (a[i]=='c')
			b[2]=b[2]+1;
		else if (a[i]=='d')
			b[3]=b[3]+1;
		else if (a[i]=='e')
			b[4]=b[4]+1;
		else if (a[i]=='f')
			b[5]=b[5]+1;
		else if (a[i]=='g')
			b[6]=b[6]+1;
		else if (a[i]=='h')
			b[7]=b[7]+1;
		else if (a[i]=='i')
			b[8]=b[8]+1;
		else if (a[i]=='j')
			b[9]=b[9]+1;
		else if (a[i]=='k')
			b[10]=b[10]+1;
		else if (a[i]=='l')
			b[11]=b[11]+1;
		else if (a[i]=='m')
			b[12]=b[12]+1;
		else if (a[i]=='n')
			b[13]=b[13]+1;
		else if (a[i]=='o')
			b[14]=b[14]+1;
		else if (a[i]=='p')
			b[15]=b[15]+1;
		else if (a[i]=='q')
			b[16]=b[16]+1;
		else if (a[i]=='r')
			b[17]=b[17]+1;
		else if (a[i]=='s')
			b[18]=b[18]+1;
		else if (a[i]=='t')
			b[19]=b[19]+1;
		else if (a[i]=='u')
			b[20]=b[20]+1;
		else if (a[i]=='v')
			b[21]=b[21]+1;
		else if (a[i]=='w')
			b[22]=b[22]+1;
		else if (a[i]=='x')
			b[23]=b[23]+1;
		else if (a[i]=='y')
			b[24]=b[24]+1;
		else if (a[i]=='z')
			b[25]=b[25]+1;
		else if (a[i]=='A')
			b[26]=b[26]+1;
		else if (a[i]=='B')
			b[27]=b[27]+1;
		else if (a[i]=='C')
			b[28]=b[28]+1;
		else if (a[i]=='D')
			b[29]=b[29]+1;
		else if (a[i]=='E')
			b[30]=b[30]+1;
		else if (a[i]=='F')
			b[31]=b[31]+1;
		else if (a[i]=='G')
			b[32]=b[32]+1;
		else if (a[i]=='H')
			b[33]=b[33]+1;
		else if (a[i]=='I')
			b[34]=b[34]+1;
		else if (a[i]=='J')
			b[35]=b[35]+1;
		else if (a[i]=='K')
			b[36]=b[36]+1;
		else if (a[i]=='L')
			b[37]=b[37]+1;
		else if (a[i]=='M')
			b[38]=b[38]+1;
		else if (a[i]=='N')
			b[39]=b[39]+1;
		else if (a[i]=='O')
			b[40]=b[40]+1;
		else if (a[i]=='P')
			b[41]=b[41]+1;
		else if (a[i]=='Q')
			b[42]=b[42]+1;
		else if (a[i]=='R')
			b[43]=b[43]+1;
		else if (a[i]=='S')
			b[44]=b[44]+1;
		else if (a[i]=='T')
			b[45]=b[45]+1;
		else if (a[i]=='U')
			b[46]=b[46]+1;
		else if (a[i]=='V')
			b[47]=b[47]+1;
		else if (a[i]=='W')
			b[48]=b[48]+1;
		else if (a[i]=='X')
			b[49]=b[49]+1;
		else if (a[i]=='Y')
			b[50]=b[50]+1;
		else if (a[i]=='Z')
			b[51]=b[51]+1;
		i++;
	}
		if (b[26]!=0)
			my_printf("A=%d\n",b[26]);
		if (b[27]!=0)
			my_printf("B=%d\n",b[27]);
		if (b[28]!=0)
			my_printf("C=%d\n",b[28]);
		if (b[29]!=0)
			my_printf("D=%d\n",b[29]);
		if (b[30]!=0)
			my_printf("E=%d\n",b[30]);
		if (b[31]!=0)
			my_printf("F=%d\n",b[31]);
		if (b[32]!=0)
			my_printf("G=%d\n",b[32]);
		if (b[33]!=0)
			my_printf("H=%d\n",b[33]);
		if (b[34]!=0)
			my_printf("I=%d\n",b[34]);
		if (b[35]!=0)
			my_printf("J=%d\n",b[35]);
		if (b[36]!=0)
			my_printf("K=%d\n",b[36]);
		if (b[37]!=0)
			my_printf("L=%d\n",b[37]);
		if (b[38]!=0)
			my_printf("M=%d\n",b[38]);
		if (b[39]!=0)
			my_printf("N=%d\n",b[39]);
		if (b[40]!=0)
			my_printf("O=%d\n",b[40]);
		if (b[41]!=0)
			my_printf("P=%d\n",b[41]);
		if (b[42]!=0)
			my_printf("Q=%d\n",b[42]);
		if (b[43]!=0)
			my_printf("R=%d\n",b[43]);
		if (b[44]!=0)
			my_printf("S=%d\n",b[44]);
		if (b[45]!=0)
			my_printf("T=%d\n",b[45]);
		if (b[46]!=0)
			my_printf("U=%d\n",b[46]);
		if (b[47]!=0)
			my_printf("V=%d\n",b[47]);
		if (b[48]!=0)
			my_printf("W=%d\n",b[48]);
		if (b[49]!=0)
			my_printf("X=%d\n",b[49]);
		if (b[50]!=0)
			my_printf("Y=%d\n",b[50]);
		if (b[51]!=0)
			my_printf("Z=%d\n",b[51]);
		if (b[0]!=0)
			my_printf("a=%d\n",b[0]);
		if (b[1]!=0)
			my_printf("b=%d\n",b[1]);
		if (b[2]!=0)
			my_printf("c=%d\n",b[2]);
		if (b[3]!=0)
			my_printf("d=%d\n",b[3]);
		if (b[4]!=0)
			my_printf("e=%d\n",b[4]);
		if (b[5]!=0)
			my_printf("f=%d\n",b[5]);
		if (b[6]!=0)
			my_printf("g=%d\n",b[6]);
		if (b[7]!=0)
			my_printf("h=%d\n",b[7]);
		if (b[8]!=0)
			my_printf("i=%d\n",b[8]);
		if (b[9]!=0)
			my_printf("j=%d\n",b[9]);
		if (b[10]!=0)
			my_printf("k=%d\n",b[10]);
		if (b[11]!=0)
			my_printf("l=%d\n",b[11]);
		if (b[12]!=0)
			my_printf("m=%d\n",b[12]);
		if (b[13]!=0)
			my_printf("n=%d\n",b[13]);
		if (b[14]!=0)
			my_printf("o=%d\n",b[14]);
		if (b[15]!=0)
			my_printf("p=%d\n",b[15]);
		if (b[16]!=0)
			my_printf("q=%d\n",b[16]);
		if (b[17]!=0)
			my_printf("r=%d\n",b[17]);
		if (b[18]!=0)
			my_printf("s=%d\n",b[18]);
		if (b[19]!=0)
			my_printf("t=%d\n",b[19]);
		if (b[20]!=0)
			my_printf("u=%d\n",b[20]);
		if (b[21]!=0)
			my_printf("v=%d\n",b[21]);
		if (b[22]!=0)
			my_printf("w=%d\n",b[22]);
		if (b[23]!=0)
			my_printf("x=%d\n",b[23]);
		if (b[24]!=0)
			my_printf("y=%d\n",b[24]);
		if (b[25]!=0)
			my_printf("z=%d\n",b[25]);
		if (b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0&&b[4]==0&&b[5]==0&&b[6]==0&&b[7]==0&&b[8]==0&&b[9]==0&&b[10]==0)
			j=0;
		if (j==0&&b[11]==0&&b[12]==0&&b[13]==0&&b[14]==0&&b[15]==0&&b[16]==0&&b[17]==0&&b[18]==0&&b[19]==0&&b[20]==0)
			q=0;
		if (q==0&&b[21]==0&&b[22]==0&&b[23]==0&&b[24]==0&&b[25]==0&&b[26]==0&&b[27]==0&&b[28]==0&&b[29]==0&&b[30]==0)
			p=0;
		if (p==0&&b[31]==0&&b[32]==0&&b[33]==0&&b[34]==0&&b[35]==0&&b[36]==0&&b[37]==0&&b[38]==0&&b[30]==0&&b[40]==0)
			t=0;
		if (t==0&&b[41]==0&&b[42]==0&&b[43]==0&&b[44]==0&&b[45]==0&&b[46]==0&&b[47]==0&&b[48]==0&&b[49]==0&&b[50]==0)
			s=0;
		if (s==0&&b[51]==0)
			my_printf("No");
}

