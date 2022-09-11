#include <stdio.h>

int main(void){
	double i =0;
	double sum =0;
	printf ("Please enter I:");
	scanf ("%lf",&i);
	if (i>1000000) {
		sum += (i-1000000)*0.01;
		i =1000000;
	};
	if (i>600000) {
		sum += (i-600000)*0.015;
		i =600000;
	};
	if (i>400000) {
		sum  += (i-400000)*0.03;
		i =400000;
	};
	if (i>200000) {
		sum += (i-200000)*0.05;
		i =200000;
	};
	if (i>100000) {
		sum += (i-100000)*0.075;
		i =100000;
	};
	if (i>0) {
		sum += i*0.1;
	};
	printf("Award:%lf\n",sum);
}
