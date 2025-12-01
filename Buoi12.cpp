#include <stdio.h>

int main(){
	//chuoi - string -> mang ky tu
	//char - %c ; string - %s
	char tenMonHoc[10]= "COM108";
	printf("Ban dang hoc mon %s\n", tenMonHoc);
	char hoTen[50];
	printf("Moi nhap ho ten: ");
//	scanf("%s", &hoTen);
	gets(hoTen);//get chuoi
	printf("Xin chao ban %s\n", hoTen);
	char diaChi[50];
	printf("Moi nhap dia chi: ");
	gets(diaChi);
	printf("Dia chi ban o %s\n", diaChi);
	return 0;
}
