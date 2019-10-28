// 19<= . . . . . . . . . .<=42     sum=180
// 19< . . . . . . . . . .<42       sum=161
#include<stdio.h>

int main()
{
    int first,last,i,j,check,sum=0,swap;

    printf("Enter first value: ");
    scanf("%d",&first);
    printf("Enter last value: ");
    scanf("%d",&last);

    if(first>last)
    {
        swap=first;
        first=last;
        last=swap;
    }
    for(i=first; i<=last; i++)     //for(i=first+1; i<last; i++)
    {
        check=0;
        for(j=2; j<=sqrt(i); j++)   //for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                check++;
                break;
            }
        }
        if(check==0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
