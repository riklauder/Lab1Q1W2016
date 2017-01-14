/*Write a program that declares an array of 10 integers. 
Write a loop that accepts 10 values from the keyboard, 
and write another loop that displays the 10 values. 
Do not use any subscripts within the two loops; use pointers only.
*/

#include <stdio.h>

int main(void) {

	//decalre array and assign pointer
	
	int *valuespt;
	int i;
	int values[i];
	valuespt = values;

	//loop for input of values
	printf("input int value then enter\n");
	for (i = 0; i < 10; i++) 
		scanf_s("%d", (valuespt + i));
		printf("\n");

	//display output of 10 values
	printf("you entered:\n");
	for (i = 0; i < 10; i++) 
		printf("%d \n", *(valuespt + i));

	//getchar to prvent console windows from closing
	printf("hit enter to exit\n");
	getchar();

return;
}