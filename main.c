#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer1()
{
	int n;
	printf("n을 입력하시오:\n");
	scanf("%d",&n);
	return n; 
}
int get_integer2()
{
	int r;
	printf("r을 입력하시오:\n");
	scanf("%d",&r);
	return r; 
}
int factorial(int n)
{
	int i;
	int res=1;
	for (i=1;i<n+1;i++)
	    res=res*i;
	return res;
}
int combination()
{
	int n;
	int r;
	n=get_integer1();
    r=get_integer2();
	int a,b,c;
	a=factorial(n);
	b=factorial(n-r);
	c=factorial(r);
	return(a/(b*c));
}
int main(void)
{
    int x;
    x=combination();
    printf("%d",x);
	return 0;
}

    

