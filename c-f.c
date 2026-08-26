#include <stdio.h>

#define BASELINE_CHANGE 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)

int main(void)
{
    float fahrenheit, celsius;
    printf("Enter celsius temperature: ");
    scanf("%f",
          &celsius);
    fahrenheit = (celsius * SCALE_FACTOR) + BASELINE_CHANGE;
    printf("Fahrenheit temperature: %.2f\n", fahrenheit);
    return 0;
}
