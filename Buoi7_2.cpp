#include <stdio.h>
#include <stdlib.h>
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
				printf("1. Bai 1\n");
				break;
			case 2:
				printf("2. Bai 2\n");
				break;	
			case 0:
				exit(0);//them #include <stdlib.h>
			default:
				printf("Moi ban nhap lai (1-5)!!!!!\n");
		}
	}while(luaChon!=0);
	return 0;
}
