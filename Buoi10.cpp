#include <stdio.h>
//2. Ham khong tra ve, co tham so truyen vao
void tinhGiaiThua(int n){
	//tính giai thua cua tham so n
	int giaiThua = 1;
	if(n >= 0){
		for(int i = 1; i<= n; i++){
			giaiThua *= i;
		}
		printf("Ket qua %d ! = %d\n", n, giaiThua);//0!=1
	}else{
		printf("So phai >= 0!!!\n");
	}
}
//3. Ham co tra ve, khong tham so truyen vao
float tinhLuong(){//kieu du lieu ham tra ve la: float
	float gio, bac;
	printf("Moi nhap so gio = ");
	scanf("%f", &gio);
	printf("Moi nhap so bac = ");
	scanf("%f", &bac);
	float luong = gio * bac;
	return luong;//gia tri tra ve la: luong -> có kieu du lieu la float
}
int main(){
	//2. Ham khong tra ve, co tham so truyen vao
	int n;
	printf("Moi nhap so tinh giai thua cua n = ");
	scanf("%d", &n);
	tinhGiaiThua(n);//dua n vao la tham so cua ham
	tinhGiaiThua(10);
	tinhGiaiThua(0);
	//3. Ham co tra ve, khong tham so truyen vao
	float luong = tinhLuong(); //tao bien luong= giá tri tra ve cua ham
	printf("Luong cua ban la: %.2f\n", luong);
	return 0;
}
