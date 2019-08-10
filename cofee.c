#include<stdio.h>
int main()
{
    int X,P;
    scanf("%d %d",&X,&P);
    int t=X;
    while(1)
    {
        t=t-((P*t)/100);
        X=X+t;
        if(t<=1)
        {
            break;
        }

    }
    printf("%d\n",X);
    return 0;
}
