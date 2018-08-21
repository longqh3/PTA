#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){
	int number;
	int i,count = 0;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("请输入猜的数字：\n");
	scanf("%d",&i);
	count++;
	while(i != number){
		
		if(i < number){
			printf("你猜的数小了，请继续：\n");
			scanf("%d",&i);
			count++;
		}else{
			printf("你猜的数大了，请继续：\n");
			scanf("%d",&i);
			count++;
		}
	}
	printf("恭喜你，猜中了数字，共用了%d次",count);
	return 0;
}