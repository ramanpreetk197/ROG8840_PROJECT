#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();
void multiply();


int main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%d", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		break;
	case 2:
		subtract();
		break;
	case 3:
		multiply();
		break;
	default:
		printf("Please Enter a Valid Value:");
	}
	return 0;

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   PROG8840 Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	if (scanf_s("%lf", &num1) != 1)
	{
		printf("Please enter a valid first value:\n");
		return;
	}
	printf("Enter the second value:");
	if (scanf_s("%lf", &num2) != 1)
	{
		printf("Please enter a valid second value:\n");
		return;
	}
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value:");
	if (scanf_s("%lf", &num1) != 1)
	{
		printf("Please enter a valid first value:\n");
		return;
	}
	printf("Enter the second value:");
	if (scanf_s("%lf", &num2) != 1)
	{
		printf("Please enter a valid second value:\n");
		return;
	}
	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}

void multiply() {
	double num1, num2, result;
	printf("Enter the first value:");
	if (scanf_s("%lf", &num1) != 1)
	{
		printf("Please enter a valid first value:\n");
		return;
	}
	printf("Enter the second value:");
	if (scanf_s("%lf", &num2) != 1)
	{
		printf("Please enter a valid second value:\n");
		return;
	}
	result = num1 * num2;
	printf("%lf * %lf = %lf\n", num1, num2, result);
}

