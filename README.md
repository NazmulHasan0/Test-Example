#include<stdio.h>

int main()
{
    int number[] = {5,3,7,14,25,13,56,90};
    int item = 13,position = -1,i;

    for(i=0; i<number; i++)
    {
        if(item==number[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
        printf("your item is not found !!!");
    else
        printf("your item position is %d\n",position);

    return 0;
}
