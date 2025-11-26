#include <stdio.h>
#include <math.h>
//HÀM TOÁN HOC
int main(){
	int x;
	x = pow (4,2); //luy thua 4^2
	printf("Luy thua: %d\n", x);
	x = sqrt(16); //can bac 2 cua 16
	printf("Can bac hai: %d\n", x);
	x = abs(-10);// |-x|= x
	printf("Gia tri tuyet doi: %d\n", x);
	x = ceil(3.45);//ham tran
	printf("Lay so nguyen tren: %d\n", x);
	x = floor(3.45);//ham san
	printf("Lay so nguyen duoi: %d\n", x);
	return 0;
}
