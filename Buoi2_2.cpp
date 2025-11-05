#include <stdio.h>

int main () {
	//NHAP - XUAT DU LIEU TU BAN PHIM
	//1. nhap so luong NYC tu ban phim- in ra màn hình
	int soLuongNYC;
	printf("Moi nhap so luong NYC = ");
	scanf("%d", &soLuongNYC);//nhap tu ban phim
	getchar();//loai bo ky tu thua -> chi trong truong hop bi troi lenh
	//2. nhap chu cai dau tien trong ten NYC
	char kyTu;
	printf("Moi nhap chu cai dau tien ten NYC= ");
	scanf("%c", &kyTu);//nhap tu ban phim
	//IN RA MÀN HÌNH
	printf("So luong NYC= %d\n", soLuongNYC);
	printf("Chu cai dau tien ten NYC= %c\n", kyTu);
	return 0;
}
