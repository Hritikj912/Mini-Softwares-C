#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void lychrel();
void un();
void UnHappy(int);
void pronic();
void automorphic();
void ncatalan();
void perfect();
void lucus();
void ndn();
void armstrong();
void divide(long long int,int,int);
void harshad();
void amicable();
void strong();
void karperker();
void cube();
void happy();
int sumofdivisorexceptnumber(int);
void abundant();
void deficient();
void Happy(int);
void ugly();
void duck();
void main()
{	int i,j;
	for(i=1;i<=80;i++)
	printf("*");
	printf("                                  NOSCIP TECH\n");
	printf("                                  ***********\n");
	printf("                              SPECIAL NUMBERS FINDER\n");
	printf("                              **********************\n");
		for(j=1;j<=68;j++)
	printf(" ");
	printf("HRITIK JAIN\n");
	for(i=1;i<=80;i++)
	printf("*");
	do{
	int choice;
	printf("\n\nSELECT FROM BELOW CHOICES:\n");
	printf("*01* TO CHECK NARCISSISTIC DECIMAL NUMBER\n");
	printf("*02* TO CHECK AUTOMORPHIC NUMBER\n");
	printf("*03* TO CHECK Nth CATALAN NUMBER\n");
	printf("*04* TO CHECK AMICABLE NUMBERS\n");
	printf("*05* TO CHECK ARMSTRONG NUMBER\n");
	printf("*06* TO CHECK DEFICIENT NUMBER\n");
	printf("*07* TO CHECK KARPERKER NUMBER\n");
	printf("*08* TO CHECK ABUNDANT NUMBER\n");
	printf("*09* TO CHECK HARSHAD NUMBER\n");
	printf("*10* TO CHECK LYCHREL NUMBER\n");
	printf("*11* TO CHECK PERFECT NUMBER\n");
	printf("*12* TO CHECK DUCK NUMBER\n");
	printf("*13* TO CHECK CUBE NUMBER\n");
	printf("*14* TO CHECK HAPPY NUMBER\n");
	printf("*15* TO CHECK LUCUS NUMBER\n");
	printf("*16* TO CHECK PRONIC NUMBER\n");
	printf("*17* TO CHECK STRONG NUMBER\n");
	printf("*18* TO CHECK UGLY NUMBER\n");
	printf("*19* TO CHECK UNHAPPY NUMBER\n");
	printf("*20* FOR EXIT\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			ndn();
			break;
		case 2:
			automorphic();
			break;
		case 3:
			ncatalan();
			break;
		case 4:
			amicable();
			break;
		case 5:
			armstrong();
			break;
		case 6:
			deficient();
			break;
		case 7:
			karperker();
			break;
		case 8:
			abundant();
			break;
		case 9:
			harshad();
			break;
		case 10:
		lychrel();
			break;
		case 11:
			perfect();
			break;
		case 12:
			duck();
			break;
		case 13:
			cube();
			break;
		case 14:
			happy();
			break;
		case 15:
			lucus();
			break;
		case 16:
			pronic();
			break;
		case 17:
			strong();
			break;
		case 18:
			ugly();
			break;
		case 19:
			un();
			break;
		case 20:
		exit(0);
			
		default :
			printf("ENTER CORRECT CHOICE\n");	
	}
}while(1);
}

int static count=0;
void happy()
{
int n;
printf("Enter any number");
scanf("%d",&n);
Happy(n);
}

void Happy(int n1)
{	int r,s;
while(n1!=0)
{r=n1%10;
	n1=n1/10;
	s=s+r*r;
}
if(s==1)
{
	printf("Happy number");
}

else 
{
	 if(count>4)
printf("Not A Happy Number");

else 
	{ count++;	 	 
		Happy(s);
	}
}

}
void un()
{
int n;
printf("Enter any number");
scanf("%d",&n);
UnHappy(n);
}

void UnHappy(int n1)
{	int count=0,r,s=0,n,n2;
n=n1;
n2=n;
printf("%d",n2);
while(n1!=0)
{count++;
	n1=n1/10;
}
while(n!=0)
{
	r=n%10;
	s=s+pow(r,count);
	count--;
}
printf("%d\n",s);
if(s==n2)
printf("Disarium Number");
else
printf("Not A Disarium Number");
}
 
void ugly()
{
	int n;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
	if(n%2==0||n%3==0||n%5==0)
	{
		printf("%d IS AN UGLY NUMBER",n);
}
	}
void strong()
{
	int n,fact=1,sum=0,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR STRONG NUMBER*/
	temp=n;
	while(n!=0)
	{
		fact=1;
		r=n%10;
		n=n/10;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=fact+sum;
	}
	
	//SUM OF FACTORIAL OF DIGITS OF STRONG NUMBER IS EQUAL TO STRONG NUMBER
	if(temp==sum)
	{
		printf("%d IS A STRONG NUMBER",temp);
	}
	else
	printf("%d IS NOT A STRONG NUMBER",temp);
}
void pronic()
{
int n,c,i=0,j, flag=0;
printf("Enter any number\n");
scanf("%d",&n);
while(i!=n/2)
{
 if(i*(i+1)==n)
	{
		flag=1;
		j=i;
    }
  i++;
}
if(flag==1)
printf("\n%d is a pronic number since %d*%d=%d",n, j,j+1,n);
else

printf("\n%d is not a pronic number",n) ;
}
void duck()
{int count,r,flag=0;
	long long int n,n1,n2;
printf("ENTER ANY NUMBER:\n");
scanf("%lld",&n);
n1=n;
n2=n;
while(n!=0)
{
	n=n/10;
	count++;
}
while(count!=1)
{
	r=n1%10;
	if(r==0)
	{flag=1;break;
	}
	n1=n1/10;
	count--;
}
if(flag==0)
{
	printf("%lld IS NOT A DUCK NUMBER",n2);
}
else
printf("%lld IS A DUCK NUMBER",n2);
}
void perfect()
{
	int n,sum=0,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR PERFECT NUMBER*/
	temp=n;
	//PERFECT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS EQUALS TO NUMBER...
	while(n!=0)
	{
	    r=n-n/2;
		n=n/2;
		sum=(r)+sum;
	}
	if(temp==sum)
	printf("%d IS A PERFECT NUMBER",temp);
	else
	printf("%d IS NOT A PERFECT NUMBER",temp);
	getch();
}
void harshad()
{
int n;
printf("Enter any number");
scanf("%d",&n);
	int n2,s=0,r;
	n2=n;
	while(n2!=0)
	{
		r=n2%10;
		n2=n2/10;
		s=s+r;
	}
	if(n%s==0)
	printf("\n%d IS A HARSHAD NUMBER",n);
	else
	 printf("\n%d IS NOT A HARSHAD NUMBER",n);

}
int sumofdivisorexceptnumber(int n);
void abundant()
{
	int n,c,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR ABUNDANT NUMBER*/
	temp=n;
	//ABUNDANT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS GREATER THAN NUMBER...
    c=sumofdivisorexceptnumber(n);
    if(temp<c)
	printf("%d IS AN ABUNDANT NUMBER",temp);
	else
	printf("%d IS NOT AN ABUNDANT NUMBER",temp);
}
int sumofdivisorexceptnumber(int n)
{
	int i=1,sum=0;
	while(i!=n)
	{
		if(n%i==0)
		{
			sum=sum+i;	
		}
		i++;
	}
	return sum;
}
void karperker()
{ long long int count=0,n,sn,snn,snn1,sum=0,n1,s;
  printf("ENTER ANY NUMBER\n");
  scanf("%lld",&n);
  n1=n;
  sn=n*n;
  snn=sn;
  while(n!=0)
  {
  	count++;
  	n=n/10;
  }
 divide(snn,count,n1);

}
void divide(long long int snn,int count,int n1)
{ int s,d,sum=0;
d=pow(10,count);
while(snn!=0)
{s=snn%d;
snn=snn/d;
sum=sum+s;
}
if(sum==n1)
{printf("YEH! IS A KARPERKER NUMBER");
}
else
{printf("NOT A KARPERKER NUMBER");
}
}
void deficient()
{
	int n,c,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR DEFECIENT NUMBER*/
	temp=n;
	//DEFECIENT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS LESS THAN NUMBER...
    c=sumofdivisorexceptnumber(n);
    if(temp>c)
	printf("%d IS DEFECIENT NUMBER",temp);
	else
	printf("%d IS NOT DEFECIENT NUMBER",temp);
}
void armstrong()
{
	int n,r,a=0,temp;
	/*PROGRAM FOR ARMSTRONG NUMBER*/
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	//SUM OF CUBES OF DIGITS OF ARMSTRONG NUMBER IS EQUAL TO ARMSTRONG NUMBER
	temp=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		a=r*r*r+a;
	}
	if(a==temp)
	{
		printf("%d IS AN ARMSTRONG NUMBER",temp);
	}
	else
	printf("%d IS NOT AN ARMSTRONG NUMBER",temp);
}
void amicable()
{
	long int n1,n2;
	int i,s1=0,s2=0;
	printf("*****PROGRAM TO FIND AMICABLE NUMBERS*****\n");
	printf("ENTER ANY TWO NUMBERS\n");
	scanf("%ld",&n1);
	scanf("%ld",&n2);
for(i=1;i<n1;i++)
{
	if(n1%i==0)
	{
		s1=s1+i;
	}
}
for(i=1;i<n2;i++)
{
	if(n2%i==0)
	{
		s2=s2+i;
	}
}
	if(s2==n1&&s1==n2)
	{
		printf("\n%d & %ld ARE AMICABLE NUMBERS",n1,n2);
	}
	else
		printf("\n%d & %ld ARE NOT AMICABLE NUMBERS",n1,n2);
}
void ncatalan()
{
int i,c,n,g,e,d;
	printf("Enter Nth term\n");
	scanf("%d",&n);
	d=fact(2*n-2);
	i=fact(n);
	e=fact(n);
	g=d/(i*e);
	printf("%d",g);
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}    
void automorphic()
{
	long long int n,sn,sn1,count=0,count1=0,s=0,s2=0,s3=0,r2,r3,r,r1,k,s1=0,sn2;
	printf("ENTER ANY NUMBER\n");
	scanf("%lld",&n);
	sn=n*n;
	sn1=sn;
	sn2=sn1;
	while(sn1!=0)
	{
		sn1=sn1/10;
		count++;
	}
	k=count;
	while(count!=0)
	{
		r=sn2%10;
		s=(s*10)+r;
		sn2=sn2/10;
		count--;
	}
	while(s!=0)
	{
		r1=s%10;
		s1=r1+(s1*10);
		s=s/10;
}
		while(count1!=k/2)
		{
			r2=s1%10;
			s1=s1/10;
			s2=s2*10+r2;
			count1++;
		}
			while(s2!=0)
			{
				r3=s2%10;
				s2=s2/10;
				s3=s3*10+r3;
			}
	if(s3==n)
	{
		printf("%lld IS AN AUTOMORPHIC NUMBER",n);
		
	}
	else
	printf("%lld IS NOT AN AUTOMORPHIC NUMBER",n);
}
void lucus()
{int i=0,a=2,b=1,c,n;
	printf("ENTER NUMBER OF TERMS\n");
	scanf("%d",&n);
	printf("\nFIRST %d TERMS :\n",n);
	 printf("%d\n",a);
printf("%d\n",b);
	while(i!=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		i++;
	}
}
void lychrel()
{
	int n;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
int i,n1,n2=0,n4=0,n5,n3,k=0,a[10],b[10],l,t,j;
n1=n;
	while(n!=0)
	{   a[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	{
		n2=n2*10+a[j];
	}

	n3=n2+n1;
	n5=n3;
		while(n3!=0)
	{   b[k]=n3%10;
		n3=n3/10;
		k++;
	}
for(l=0;l<k;l++)
{
	n4=n4*10+b[l];
}
	if(n5!=n4)
	{
		printf("%d IS A LYCHREL NUMBER",n1);
	}
	else
		printf("%d IS NOT A LYCHREL NUMBER",n1);
}
void ndn()
{
	int n1,n,r,a=0,count=0,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	temp=n;
	n1=n;
	while(n1!=0)
	{	n1=n1/10;
	count++;
	}
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		a=pow(r,count)+a;
	}
	if(a==temp)
	{
		printf("%d IS A NARCISSITIC DECIMAL NUMBER",temp);
	}
	else
	printf("%d IS NOT A NARCISSITIC DECIMAL NUMBER",temp);
}
void cube()
{
	int i,flag=0,n;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		if((i*i*i)==n)
		flag=1;
		else
		continue;
	}
	if(flag==0)
	printf("%d IS NOT A CUBE NUMBER",n);
	else
	printf("%d IS A CUBE NUMBER",n);
}
