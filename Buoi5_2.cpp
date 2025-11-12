#include <stdio.h>
int main(){
	//nhap vao so thang trong nam 2025-> in ra so ngay trong thang
	//bo sung: nhap nam tu ban phím
	//luu y: kiem tra nam nhuan hay ko? -> so ngay thang 2
	printf("Moi nhap so thang trong nam 2025 la: ");
	int thang;
	scanf("%d", &thang);
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang co 31 ngay\n");
			break;
		case 2:
			printf("Thang co 28 ngay\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang co 30 ngay\n");
			break;		
	}
	return 0;
}
