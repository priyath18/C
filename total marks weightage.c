#include <stdio.h>

int main()
{
    float pMo, mMo, total;
    
    printf("Enter the obtained marks of Physics: ");
    scanf("%f", &pMo);
    
    printf("Enter the obtained marks of Maths: ");
    scanf("%f", &mMo);
    
    total = (0.30 * pMo) + (0.70 * mMo);
    
    printf("The total marks is: %.2f\n", total);
    
    return 0;
}