#include <stdio.h>

int main() {
    float r,C,S;
    float pi=3.14;
    printf("Moi ban nhap ban kinh hinh tron :");
     scanf("%f",&r);
    C=2*pi*r;
    S=pi*(r*r);
    printf("Chu vi cua hinh tron la : %.2f \n",C);
    printf("Dien tich cua hinh tron la : %.2f \n ",S);
}
