#include <stdio.h>
int main()
{
    int n, sum = 0, avg=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    avg = sum / n;
    printf("Average: %d\n", avg);
    return 0;
}