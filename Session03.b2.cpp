#include <stdio.h>

int main() {
    float celsius, fahrenheit;
     printf("Nhap nhiet do theo Celsius: ");
     scanf("%f", &celsius);
     fahrenheit = (celsius * 9 / 5) + 32;
     printf("%.2f do Celsius bang %.2f do Fahrenheit.\n", celsius, fahrenheit);
}
