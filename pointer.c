#include <stdio.h>

int getage(void){	
	static int age[3];
	(*age)++;
	printf("%d\n",*age);
}

int main(void){
	int a = 1234321;
	int *address = &a;
	printf("%d\n", *address);

	char word[6] = "apple";
	printf("%c\n", *word);
	printf("%c\n", *(word+3));
	printf("%p\n", word);

	getage();
	getage();
	getage();
}

