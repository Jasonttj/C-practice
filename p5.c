#include  <stdio.h>
int main(void){
 	int xs[3];
	int temp;
	printf("enter 3 integers in form like 3,56,7\n");
	scanf("%d,%d,%d",xs,&xs[1],&xs[2]);
	for (int i=0; i<2; i++) {
		for (int m=0; m<2-i; m++) {
			if (xs[m]>xs[m+1]) {
				int temp=xs[m];
				xs[m]=xs[m+1];
				xs[m+1]=temp;
			};
		};
	};
	printf("small to big: %d,%d,%d",xs[0],xs[1],xs[2]);
	return 0;
}
