#include <stdio.h>
int main(){
	printf("-------BAI 1: kiem tra so nguyen-----\n");
	int n;
	printf("Moi nhap so n = ");
	scanf("%d", &n);
	if ( n > 0 ){
		printf("n =  %d la so nguyen duong\n", n);
	} else {//neu (n>0) sai <-> n < 0
		printf("n =  %d la so nguyen am\n", n);
	}
	printf("-------BAI 2: kiem tra so chan/le-----\n");
	int x;
	printf("Moi nhap so nguyen duong x = ");
	scanf("%d", &x);
	//so chan: so chia het cho 2
	//kiem tra so x chia 2 du 0 hay ko? -> chia lay du
	if ( x % 2 == 0){//phuc tap hon xiu: ( x % 2 != 1)
		printf("x = %d la so chan\n", x);
	}else{//( x % 2 == 1) hoac ( x % 2 != 0)
		printf("x = %d la so le\n", x);
	}
	printf("-------BAI 3: kiem tra tuoi di hoc-----\n");
	int tuoi;
	printf("Moi nhap so tuoi = ");
	scanf("%d", &tuoi);
	if( tuoi >= 22){
		printf("Tuoi sau dai hoc\n");
	}else if(tuoi >= 18){// (tuoi < 22 && tuoi >= 18)
		printf("Tuoi sinh vien\n");
	}else if(tuoi >= 6){ // (tuoi < 18 && tuoi >= 6)
		printf("Tuoi hoc sinh\n");
	}else { // (tuoi < 6)
		printf("Tuoi mam non\n");
	}
	return 0;
}
