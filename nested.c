#include <stdio.h>

int main() 
{
    int x, y;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    
    if (x!=y)
    {
        printf("The numbers are not equal to y \n");
    
        if (x > y)
        {
            printf("The number x is greater than y \n");
        }
        else
        {
            printf("The number x is less than y \n");
        }
    }
    else
    {
        printf("The numbers are equal");
    }
    return 0;
}