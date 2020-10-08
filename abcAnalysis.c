#include <stdio.h>
void abc_analysis(int value,int number,int points){
	if (value >= 6000)
		printf ("The item is under A\n");
	else if (value < 6000 && value >= 3000)
		printf ("The item is under B\n");
	else
		printf ("The value is under C\n");
	if (number >= 100)
		printf ("vital\n");
	else if (number < 100 && number >= 20)
		printf ("Essential\n");
	else
		printf ("desirable\n");
	if(points<=10&&points>=6)
		printf("high success rate\n");
	else
		printf("low success rate change the plan\n");
}