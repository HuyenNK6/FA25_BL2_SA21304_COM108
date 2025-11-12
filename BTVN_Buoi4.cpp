#include <stdio.h>
int main(){
	//Tuyen Thai: khai bao & nhap diemToan, diemVan, diemAnh
	float diemToan, diemVan, diemAnh;
	printf("Moi nhap so diemToan = ");
	scanf("%f", &diemToan);
	printf("Moi nhap so diemVan = ");
	scanf("%f", &diemVan);
	printf("Moi nhap so diemAnh = ");
	scanf("%f", &diemAnh);
	float diemTB;
	diemTB = (diemToan + diemVan + diemAnh)/3;
	printf("Diem trung binh la: %.2f\n", diemTB);
	if (diemTB>= 9){
		printf("Xep loai xuat sac\n");
		
	}else if (diemTB >=8) {
		printf("xep loai gioi\n");
	}else if (diemTB >=7) {
		printf("xep loai kha\n");
	}else if (diemTB >=5) {
		printf("xep loai TB\n");
	}else if (diemTB >=3) {
		printf("xep loai yeu\n");
	}else {
	    printf("xep loai kem\n");
	
	}
	
	
    
	
	return 0;
}
