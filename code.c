#include "code.h"

void hello(){
	printf("Welcome on github!!\n");
	printf("Nice to meet you!!\n");
}

void guest(){
	int number=0,i=0, answer=-1;
	srand(time(NULL));

	number = (rand()%100);
	printf("Guest the number: ");
	while(i<5){
		++i;
		scanf("%d",&answer);
		if(answer==number){
			printf("Congratulation!Vous avez joué %d coups. ",i);
			break;
		}
		else if(number<answer)
			printf("Too big\n");
		else
			printf("Too small\n");
	}
	printf("The number is %d. \n",number);
}
