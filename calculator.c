#include <stdio.h>

int main(){
	
	int a, b, sum, sub, mul, div;
	char operator;
	printf("Enter an Operator: ");
	scanf("%c",&operator);
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);

	switch(operator){
		case '+': sum = a + b;
			  printf("Result = %d", sum);
			  break;

		case '-': sub = a - b;
                          printf("Result = %d", sub);
			  break;

		case '*': mul = a * b;
                          printf("Result = %d", mul);
			  break;

		case '/': div = a / b;
                          printf("Result = %d", div);
			  break;
		
		default: 
			  printf("Enter a valid operator");
			  break;
	}
	getchar();
}
