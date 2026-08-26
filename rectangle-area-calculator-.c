#include <stdio.h>

int main(void)
{
    printf("Welcome to Rectangle Area Calculator! Please enter the following values for your answer.\n");
    int length, width, area;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    area = length * width;
    printf("Area: %d\n", area);
    return 0;
}
