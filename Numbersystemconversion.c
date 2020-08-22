#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i,j,d;
	for(i=1;i<=80;i++)
	printf("*");
	printf("                                  NOSCIP  TECH\n");
	printf("                                  ************\n");
	printf("                           CONVERSIONS OF NUMBER SYSTEM\n");
	printf("                           ****************************\n");
	for(j=1;j<=68;j++)
	printf(" ");
	printf("HRITIK JAIN\n");
	for(i=1;i<=80;i++)
	printf("*");
	do{
	printf("\n\nSELECT FROM THE BELOW CHOICES:\n");
	printf("*01* FOR BINARY TO HEXA-DECIMAL\n");
	printf("*02* FOR BINARY TO DECIMAL\n");
	printf("*03* FOR BINARY TO OCTAL\n");
	printf("*04* FOR OCTAL TO BINARY\n");
	printf("*05* FOR OCTAL TO DECIMAL\n");
    printf("*06* FOR OCTAL TO HEXA-DECIMAL\n");
    printf("*07* FOR DECIMAL TO BINARY\n");
	printf("*08* FOR DECIMAL TO OCTAL\n");
    printf("*09* FOR DECIMAL TO HEXA-DECIMAL\n");
    printf("*10* FOR HEXA-DECIMAL TO DECIMAL\n");
    printf("*11* FOR HEXA-DECIMAL TO BINARY\n");
	printf("*12* FOR HEXA-DECIMAL TO OCTAL\n");
	printf("*13* FOR EXIT\n");
    scanf("%d",&d);
    switch(d)
    {
case 1:
//We are assuming here that Binary number is written for Positive number
binary2hexa();
break;

case 2:
binary2dec();
break;

case 3:
binary2octal();	
	break;
	
case 4:
 octal2binary();
break;

case 5:
octal2dec();
	break;
	
case 6:
	octal2hexa();
break;

case 7:
dec2binary();
	break;
	
case 8:
dec2octal();
	break;
	
case 9:
dec2hexa();
	break;
	
case 10:
hexa2dec();
break;

case 11:
	printf("I DON'T KNOW %c%c%c%c%c",1,1,1,1,1);
	break;
case 12:
//IT can convert atmost an 8 bit Hexadecimal number
hexa2octal();
break;

case 13:
exit(0);

default:
printf("PLEASE ENTER CORRECT CHOICE\n");
}
}while(1);
getch();
}
int por(int k)
{	int i,p=1;
	for(i=k;i>=1;i--)
	{		p=p*16;	}
		return p;
}
int powe(int k)
{	int i,p=1;
	for(i=k;i>=1;i--)
		{		p=p*8;	}
		return p;
}
int power(int k)
{
	int i,p=1;
	for(i=k;i>=1;i--)
	{
		p=p*2;
	}
	return p;
}
void binary2hexa()
{
	unsigned long long int n1;
int r1,k1=0,sum1=0;
printf("ENTER ANY BINARY NUMBER\n");
scanf("%lld",&n1);
printf("\nHEXADECIMAL NUMBER:\n");
while(n1!=0)
{
r1=n1%10;
n1=n1/10;
sum1=sum1+r1*power(k1);
k1++;
}

printf("%x",sum1);
}
void binary2dec()
{
		unsigned long long int n2;
//We are assuming here that Binary number is written for Positive number
int r2,k2=0,sum2=0;
printf("ENTER ANY NUMBER\n");
scanf("%lld",&n2);
printf("\nDECIMAL NUMBER:\n");
while(n2!=0)

{r2=n2%10;

n2=n2/10;
sum2=sum2+r2*power(k2);

k2++;}

printf("%d",sum2);
}
void binary2octal()
{
	unsigned long long int n3,sum3=0;
//We are assuming here that Binary number is written for Positive number
int i3=0,j3=0,temp3,r3,a3[100],k3=0;
printf("ENTER ANY BINARY NUMBER\n");
scanf("%lld",&n3);
printf("OCTAL NUMBER:\n");
while(n3!=0)
{
r3=n3%10;
n3=n3/10;
sum3=sum3+r3*power(k3);
k3++;
}
	while(sum3!=0)
	{
		r3=sum3%8;
		a3[j3]=r3;
		 sum3=sum3/8;
		i3++;
		j3++;
	}
	temp3=i3;
	for(j3=i3-1;j3>=0;j3--)
	{
		 printf("%d",a3[j3]);
	}
}
void octal2binary()
{
	unsigned long long int n4;
	int i4=0,j4=0,r41,temp4,r42,a4[50];
	printf("ENTER ANY OCTAL NUMBER\n");
	scanf("%lld",&n4);
	printf("BINARY NUMBER:\n");
	while(n4!=0)
	{
		r41=n4%10;
		while(i4<3)
		{
			r42=r41%2;
			r41=r41/2;
			a4[j4]=r42;
			i4++;
			j4++;
		}
		if(i4==3)
		{
			i4=0;
		}
		 n4=n4/10;
	}
	temp4=j4;
	for(j4=temp4-3;j4>=0;j4--)
	{
		printf("%d",a4[j4]);
	}
}
void octal2dec()
{
	unsigned long long int n5;
//it can give solution of utmost 15 bit octal no.
int r5,k5=0,sum5=0;
printf("ENTER ANY OCTAL NUMBER\n");
scanf("%lld",&n5);
printf("\nDECIMAL NUMBER:\n");
while(n5!=0)
{r5=n5%10;
n5=n5/10;
sum5=sum5+r5*powe(k5);
k5++;}
printf("%d",sum5);
}
void octal2hexa()
{
	unsigned long long int n6;
int r6,k6=0,sum6=0;
//it can give solution of utmost 15 bit octal no.
printf("ENTER ANY OCTAL NUMBER\n");
scanf("%lld",&n6);
printf("\nHEXA-DECIMAL NUMBER:\n");
while(n6!=0)
{r6=n6%10;
n6=n6/10;
sum6=sum6+r6*powe(k6);
k6++;}
printf("%x",sum6);
}
void dec2binary()
{
		int n7,i7=0,r7,temp7,a7[50];
	printf("ENTER ANY DECIMAL NUMBER\n");
	scanf("%d",&n7);
	while(n7!=0)
	{ r7=n7%2; 
	  n7=n7/2;		
	  a7[i7]=r7;
	  i7++;
	}	
	temp7=i7;
	for(i7=temp7-1;i7>=0;i7--)	
	{
	printf("%d",a7[i7]);
	}
}
void dec2octal()
{
		unsigned long long int n8;
	int i8=0,j8=0,temp8,sum8,r8,a8[50];
	printf("ENTER ANY DECIMAL NUMBER:\n");
	scanf("%lld",&n8);
	printf("\nOCTAL NUMBER:\n");
	while(n8!=0)
	{
		r8=n8%8;
		a8[j8]=r8;
		 n8=n8/8;
		i8++;
		j8++;
	}
	temp8=i8;
	for(j8=i8-1;j8>=0;j8--)
	{
		 printf("%d",a8[j8]);
	}
}
void dec2hexa()
{
	unsigned long long int n9;
	printf("ENTER ANY DECIMAL NUMBER\n");
	scanf("%d",&n9);
	printf("HEXADECIMAL NUMBER:\n");
	printf("%x",n9);
}
void hexa2dec()
{
	unsigned long long int n0;
	int r0,k0=0,sum0=0;
//IT can convert atmost an 8 bit Hexadecimal number
printf("ENTER ANY HEXADECIMAL NUMBER\n");
scanf("%x",&n0);
printf("\nDECIMAL NUMBER:\n");
while(n0!=0)
{r0=n0%10;
n0=n0/10;
sum0=sum0+r0*por(k0);
k0++;}
printf("%x",sum0);
}

void hexa2octal()
{
	unsigned long long int n11;
printf("ENTER ANY HEXADECIMAL NUMBER\n");
scanf("%x",&n11);
printf("\nOCTAL NUMBER:\n");
printf("%o",n11);
}
