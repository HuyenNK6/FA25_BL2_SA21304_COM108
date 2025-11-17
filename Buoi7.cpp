#include <stdio.h>

int main(){
	printf("--------VONG LAP FOR----\n");
	for (int i = 0; i < 5; i ++){
		printf("Vong lap thu i =  %d\n", i);
	}
	for (int j = 10; j >= 0; j --){
		printf("Gia tri j= %d\n", j);
	}
	printf("--------VONG LAP WHILE-----\n");
	int n = 5;
	while(n < 10){
		printf("Gia tri n = %d\n", n);
		n++;
	}
	printf("--------VONG LAP DO-WHILE-----\n");
	int k = 20;
	do{
		printf("Gia tri k = %d\n", k);
	}while(k < 10);
	//vi du: nhap vao so nguyen duong a (a>0)
	//neu sai yeu cau nhap lai
	int a;
	do{
		printf("Moi nhap so a= ");
		scanf("%d", &a);	
		if(a < 0){
			printf("Ban nhap sai rui!! Nhap lai di!\n");
		}
	}while(a < 0);//neu a < 0 thi nhap lai lan nua
	return 0;
}
