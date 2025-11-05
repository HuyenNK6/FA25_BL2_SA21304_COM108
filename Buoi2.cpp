#include <stdio.h>
#include <stdbool.h>
int main(){
	//so nguyen: short, int, long - %d
	//so thuc: float - %f , double - %lf
	//1. khai bao bien chieuCao, canNang
	float chieuCao = 152; 
	float canNang = 41.5;
	//%.0f lay 0 so sau dau phay- %.2f lay 2 so sau dau phay
	//-> tuong tu voi %lf- double
	printf("Chieu cao = %.0f va can nang = %.2f \n", chieuCao, canNang);
	//2. bool: boolean (java, C#,...) => #include <stdbool.h>
	//chi có 2 gia tri: true - 1 và false - 0
	bool gioiTinh = 1;
	printf("Gioi tinh = %d \n", gioiTinh); //su dung cau lenh If-else de xac dinh Nam/Nu
	//3. kieu ky tu: char - %c
	char bac = 'A';
	bac = 'B';
	printf("Bac cua ban là: %c\n", bac);
	//4. Hang so
	#define PI 3.14
	//PI = 5; -> error vì PI là hang so
	printf("PI = %.2f ", PI);
	return 0;
}
