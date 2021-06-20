#include <stdio.h>
int main()
{
    int a,b,x,s,p,d;
    float q;
    printf("Enter the Operation\n");
    printf("1.Add\n2.Subtract\n3.Divide\n4.Multiply");
    scanf("%d",&x);
    if(x==1)
    {
    printf("Enter the Numbers to add");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("The Sum is %d",s);
    }
    else if(x==2){
        printf("Enter the two no.s to subtract");
        scanf("%d%d",&a,&b);
        d=a-b;
        printf("The difference is %d",d);
    }
    else if(x==3)
    {
        printf("Enter the two no.s to Divide");
        scanf("%d%d",&a,&b);
        q=(float)a/(float)b;
        printf("The Quotient is %f",q);
    }
    else if(x==4)
    {
        printf("Enter the two no.s to Multiply");
        scanf("%d%d",&a,&b);
        p=a*b;
        printf("The Product is %d",p);
    }
    else
    printf("Invalid Option");
        return 0;
    
}



