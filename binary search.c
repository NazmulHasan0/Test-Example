#include<stdio.h>

int main()
{
    int number[] = {3,6,8,16,19,20,25,30,50,60,70};
    int first, last, middle, search;

    first = 0;
    last = 10;
    middle = (first+last)/2;
    search = 16;

    while(first<=last)
    {
    {
        if(number[middle]==search)
        {
            printf("%d\n",middle+1);
            break;
        }
        else if(number[middle]<search)
        {
            first = middle+1;
        }
        else
        {
            last = middle-1;
        }
        middle = (first+last)/2;
        if(first>last)
        {
            printf("Can not found !!!");
        }
    }

    return 0;
}
