#include <stdio.h>
#include <stdlib.h>
//tao ham khong tra ve, khong tham so truyen vao
void thucHienBai1(){
	printf("1. Bai 1\n");
	//tinh tong so nguyen duong 1-n, su dung vong lap for
	int n;
	do{
		printf("Moi nhap so nguyen duong n= ");
		scanf("%d", &n);
	}while( n <= 0);
	int sum = 0;
	for (int i = 0; i <= n; i++){
		sum += i; //sum = sum +i
	}
	printf("Tong so 1 den %d = %d\n", n, sum);
}
void thucHienBai2(){
	printf("2. Bai 2\n");
	//tinh tong so chan tu 1-n
	int n;
	do{
		printf("Moi nhap so nguyen duong n= ");
		scanf("%d", &n);
	}while( n <= 0);
	int sum = 0;
	for (int i = 0; i <= n; i++){
		if( i % 2 == 0){
			sum += i; //sum = sum +i
		}		
	}
	printf("Tong so 1 den %d = %d\n", n, sum);
}
void thucHienBai3(){
	printf("3. Bai 3\n");
	//nhap tuoi 18-50, sai nhap lai
	int tuoi;
	do{
		printf("Moi nhap tuoi = ");
		scanf("%d", &tuoi);
		if(tuoi < 18 || tuoi > 50){
			printf("Moi nhap lai tuoi (18-50)!!!\n");
		}
	}while(tuoi < 18 || tuoi > 50); //dkien hop le: (tuoi >= 18 && tuoi <=50)
	printf("Tuoi cua ban la %d\n", tuoi);
}

int main(){
	//tao menu switch case co vong lap
	int luaChon;
	do{
		printf("--------MENU------");
		printf("1. Bai 1\n");
		printf("2. Bai 2\n");
		printf("3. Bai 3\n");
		printf("4. Bai 4\n");
		printf("5. Bai 5\n");
		printf("0. Thoat CT\n");
		printf("------------------\n");
		printf("Moi ban nhap lua chon (1-5): ");
		scanf("%d", &luaChon);
		switch(luaChon){
			case 1:
				//goi ham qua ten ham -> ctrl + space
				thucHienBai1();
				break;
			case 2:
				thucHienBai2();
				break;	
			case 3:
				thucHienBai3();
				break;
			case 4:
				
				break;
			case 0:
				exit(0);//them #include <stdlib.h>
			default:
				printf("Moi ban nhap lai (1-5)!!!!!\n");
		}
	}while(luaChon!=0);
	return 0;
}
