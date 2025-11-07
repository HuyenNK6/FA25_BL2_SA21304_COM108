#include <stdio.h>

int main(){
	int mssv;
	double diemTB;
	char xepLoai;
	printf("Moi nhap mssv= ");
	scanf("%d", &mssv);
	printf("Moi nhap diemTB= ");
	scanf("%lf", &diemTB);
	getchar();//loai bo ky tu thua
	printf("Moi nhap xepLoai= ");
	scanf("%c", &xepLoai);
	printf("\n MSSV= %d | DiemTB = %lf | Xep loai= %c", mssv, diemTB, xepLoai);
	return 0;
}
