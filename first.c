#include<stdio.h>
int main()
{
	int a,b,c;
    float d;
    printf("\n Enter two number : ");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("\nSum of %d and %d is %d ",a,b,c);
    c = a - b;
    printf("\nSub of %d  and %d is %d",a,b,c);
    c = a * b;
    printf("\nProduct of %d and %d is %d",a,b,c);
    if(a>=0 && b != 0)
    {
        d = (float)a/b;
        printf("\nDivision of %d and %d is %.2f",a,b,d);
    }
    else
    {
        printf("\nZero and negative number are not allowed in denominator");
    }
    return 0;
}
	