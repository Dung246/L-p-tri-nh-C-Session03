#include <stdio.h>

int main() {
   float diemVan,diemToan,diemAnh,sum,avrNumber;
   printf("Moi nhap diem mon Van :");
    scanf("%f",&diemVan);
   printf("Moi nhap diem mon Toan :");
    scanf("%f",&diemToan);
   printf("Moi nhap diem mon TA :");
    scanf("%f",&diemAnh);
    sum=diemVan + diemToan + diemAnh;
    avrNumber=sum/3;
    printf("Tong diem cua ba mon la : %.3f\n-Diem trung binh cua ba mon la : %.3f ",sum,avrNumber);
}

