#include <stdio.h>
void thucHienBai3(int n){
	//1. khai báo mang diem lab cua SV co kich thuoc n
	float arrDiem[n];
	//2. nhap mang
	for(int i=0; i<n; i++){
		printf("Moi nhap diem LAB cua SV thu %d: ", i);
		scanf("%f", &arrDiem[i]);
	}
	//3. xuat mang
	for(int i=0; i<n; i++){
		printf("Diem LAB cua SV thu %d= %.2f\n", i, arrDiem[i]);
	}
	//4. tinh diem trung binh
	float tong= 0;
	for(int i=0; i<n; i++){
		tong += arrDiem[i];
	}
	printf("Diem trung binh = %.2f\n", tong/n);
	//5. tìm diem cao nhat
	float diemMax = arrDiem[0];
	for(int i=0; i<n; i++){
		if(arrDiem[i] >  diemMax){
			diemMax = arrDiem[i];
		}
	}
	printf("Diem cao nhat = %.2f\n", diemMax);
	//6. cac vi tri co diem cao nhat
	printf("Cac vi tri co diem cao nhat: ");
	for(int i=0; i<n; i++){
		if(arrDiem[i] == diemMax){
			printf("%d ", i);
		}
	}	
	//7. so luong SV co diem <5
	int dem = 0;
	for(int i=0; i<n; i++){
		if(arrDiem[i] < 5){
			dem++;
		}
	}
	printf("So luong SV co diem <5 la %d\n", dem);
}
int main(){
	int soLuongSV;
	printf("Moi nhap so luong SV: ");
	scanf("%d", &soLuongSV);
	thucHienBai3(soLuongSV);
	return 0;
}
