#include <stdio.h>
void thucHienBai1(){
	//1. nhap so luong SV n
	int n;
	printf("Moi nhap so luong Sv n= ");
	scanf("%d", &n);
	//2. khai bao mang Tuoi có kich thuoc n
	int arrTuoi[n];
	//3. nhap mang
	for (int i=0; i<n; i++){
		printf("Moi nhap tuoi SV thu %d: ", i);
		scanf("%d", &arrTuoi[i]);
	}
	//4. xuat mang
	for (int i=0; i<n; i++){
		printf("Tuoi SV thu %d = %d\n", i,arrTuoi[i]);
	}
	//5. tinh tong gia tri cua phan tu tai vi tri le
	int tong = 0;
	for (int i=0; i<n; i++){
		if(i % 2 != 0){// i là vi tri -> chan/le
			tong += arrTuoi[i];
		}
	}
	printf("Tong cac phan tu tai vi tri le= %d\n", tong);
	//6. tim tuoi lon nhat trong mang
	int max = arrTuoi[0];//gan max = gtri phan tu dau tien
	for(int i=0; i<n; i++){
		if(arrTuoi[i] > max){//neu nhu phan tu tai i lon hon max
			max = arrTuoi[i];//gan lai gia tri max
		}
	}
	printf("Tuoi max= %d\n", max);
	//7. kiem tra su ton tai cua tuoi trong mang
	int tuoi;
	printf("Moi nhap tuoi can tim: ");
	scanf("%d", &tuoi);
	int count = 0;// bien dem => giai quyet dc bai toan dem so luong
	for(int i=0; i<n; i++){
		if(arrTuoi[i] == tuoi){
			count++;//tim thay -> tang count 1 don vi
		}
	}
	if(count > 0){
		printf("Ton tai tuoi = %d\n ", tuoi);
	}else{
		printf("Khong ton tai tuoi = %d\n ", tuoi);
	}
}
int main(){
 	thucHienBai1();	
	return 0;
}
