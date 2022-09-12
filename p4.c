#include <stdio.h>
int main (void){
	int year,month,day;
	int sum=0;
	printf("enter year:");
	scanf("%d",&year);
	printf("enter month:");
	scanf("%d",&month);
	printf("enter day:");
	scanf("%d",&day);
	if (year<0 || month<1 || month>12 || day<1 || day>31){
		printf("data error!\n");
		return 0;
	};
	if ((year%4==0 && year%100!=0) || year%400==0) {
		if (month>2){
			sum += 1;
		};
	};
	while (month > 1) {
		month -= 1;
		switch (month){
			case 2: 
				sum+=28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				sum+=30;
				break;
			default :
				sum+=31;
				break;
		};
	};
	sum += day;
	printf("The date is the %d day of the year.\n",sum);
	return 0;
}
