#include <stdio.h>

int main()
{
    float phy, che, m, eng, hin, total, average, percentage;
    printf("Enter the marks");
    scanf("%f %f %f %f %f", &phy, &che, &m, &eng, &hin);
    total = phy + che + m + eng + hin;
    average = total / 5;
    percentage = total * 100 / 500;
    printf("\nTotal=%f", total);
    printf("\nAverage=%f", average);
    printf("\nPercentage=%f", percentage);
    return 0;
}
