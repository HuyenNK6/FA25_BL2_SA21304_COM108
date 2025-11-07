#include <stdio.h>
#include <stdbool.h>
int main(){
	int a = 10;
	int b = 5;
	printf("Ket qua b/2 = %d\n", b/2);// 5/2= 2.5-> lay phan nguyen =2
	printf("Ket qua b%2 = %d\n", b%2);// 5 chia 2 du 1-> lay phan du=1
	int ketQua = ++a - (b++);//a=11 b=5
	printf("Ket qua = %d\n", ketQua); //ketQua = 6
	printf("a= %d va b= %d\n", a,b);//a=11 b=6
	printf("------------------------------\n");
	int x= 20, y = 15;
	bool result;//#include <stdbool.h>
	result = (x >= y);//lon hon hoac bang
	result = (x != 20);//khac nhau
	result = (x >= 25 && y >= 10);//AND && -> tat ca dung -> true
	result = (x >= 25 || y >= 10);//OR || -> 1 trong so bieu thuc dung -> true
	printf("Result(1-true, 0-false): %d\n", result);
	printf("!result = %d\n", !result);//true-> false, False-> true
	return 0;
}
