#include <stdio.h>

int main(void){

char flag='y';
int input;
int sum;
int i;
char buffer;
while(flag == 'y'){
	i = 1;
	sum = 0;
	printf("Give the numbers you want to add. Press -Enter- between each number. When you've given all the numbers, give number 0.");
	printf("\n Number %d :", i);
	scanf("%d", &input);
	while(input != 0){
		sum = sum + input;
		i = i + 1;
		printf("\n Number %d :", i);
		scanf("%d", &input);
	}
	printf("Sum of the numbers given is: %d\n\n", sum);	
}
return 0;
}
