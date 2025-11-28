#include <stdio.h>
void thucHienBai1(){
	//1. khai bao 1 mang tuoi, co 6 phan tu, kieu so nguyen
	int arrTuoi[6]= {18,22,19,38,57,42};//ten mang : arr___
	//2. truy xuat phan tu -> thong qua vi tri -> bat dau tu 0
	printf("Gia tri tuoi tai vi tri 0: arrTuoi[0] = %d\n", arrTuoi[0]);
	printf("Gia tri tuoi tai vi tri 1: arrTuoi[1] = %d\n", arrTuoi[1]);
	printf("Gia tri tuoi tai vi tri 2: arrTuoi[2] = %d\n", arrTuoi[2]);
	printf("Gia tri tuoi tai vi tri 3: arrTuoi[3] = %d\n", arrTuoi[3]);
	printf("Gia tri tuoi tai vi tri 4: arrTuoi[4] = %d\n", arrTuoi[4]);
	printf("Gia tri tuoi tai vi tri 5: arrTuoi[5] = %d\n", arrTuoi[5]);
}
void thucHienBai2(){
	//DB: khai bao 1 mang so luong san phâm, gom 5 phan tu
	//các gia tri nhap tu ban phim
	//1. khai bao
	int arrSoLuong[5]; //-> vi tri: i = 0-1-2-3-4 (n-1)
//	printf("Moi nhap phan tu thu 0: ");
//	scanf("%d", &arrSoLuong[0]);
//	printf("Moi nhap phan tu thu 1: ");
//	scanf("%d", &arrSoLuong[1]);
	//2. nhap mang
 	for(int i= 0; i< 5; i++){ //i = 0-1-2-3-4
 		printf("Moi nhap phan tu thu %d: ", i);
		scanf("%d", &arrSoLuong[i]);
	}
	//3. xuat mang
	for (int i= 0; i< 5; i++){
		printf("So luong san pham tai vi tri %d = %d\n", i, arrSoLuong[i]);
	}
	
}
void thucHienBai3(){
	//nhap so luong san pham n (int)
	//nhap 1 mang gia tien (float) cua n san pham, sau do in ra man hình	
	int n;
	printf("Nhap so luong san pham:");
	scanf("%d" , &n);
	float arrGia[n];
    for (int i = 0; i < n; i++){
    	printf("Moi nhap gia san pham thu %d :", i + 1);
    	scanf("%f", &arrGia[i]);//arrGia[i]: phan tu Gia tai vi tri i trong mang.0
	}
	for (int i = 0; i < n; i++){
		printf("Gia cua san pham thu %d: %.2f\n", i+1, arrGia[i]);
	}
}
void thucHienBai4(){
	//nhap soLuongPhong, nhap mang arrDienTich (double)
	int soLuongPhong;
	printf ("Moi nhap so luong phong:");
	scanf ("%d", &soLuongPhong);
	double arrDienTich[soLuongPhong];
	for (int i=0; i < soLuongPhong; i++){
		printf ("Phong thu %d : ", i+1, soLuongPhong);
		scanf ("%lf", &arrDienTich[i] );
	}	
	printf ("Danh sach dien tich phong\n");
	for (int i=0; i < soLuongPhong; i++){
		printf ("Danh sach %.1lf\n", arrDienTich[i]);
	}
}
int main(){
	//tu tao menu switch-case
//	thucHienBai1();
//	thucHienBai2();
//	thucHienBai3();
     thucHienBai4();

	return 0;
}
