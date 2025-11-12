#include <stdio.h>
int main(){
	//tao MENU thuc don -> lua chon 1 mon an
	int luaChon;
	printf("--------MENU--------\n");
	printf("1. My Spaghetti\n");
	printf("2. Ga ran \n");
	printf("3. Ham bo go\n");
	printf("--------------------\n");
	printf("Moi nhap lua chon (1-3): ");
	scanf("%d", &luaChon);
	if(luaChon == 1){
		printf("1. My Spaghetti\n");
	}else if(luaChon == 2){
		printf("2. Ga ran \n");
	}else if(luaChon == 3){
		printf("3. Ham bo go\n");
	}
	printf("Su dung switch- case\n");
	switch(luaChon){
		case 1:
			printf("1. My Spaghetti\n");
			//code
			break;//lenh ngat
		case 2:
			printf("2. Ga ran \n");
			break;//lenh ngat
		case 3:
			printf("3. Ham bo go\n");
			break;//lenh ngat
	}
	return 0;
}
