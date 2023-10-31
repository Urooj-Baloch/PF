
/*programmer:urooj baloch
Description:Question 3
Date:27-10-2023
*/#include<stdio.h>
#define R 5
#define C 4
int main()
{
	int arr[R][C] = {
		{1,300,0,-1},
		{1,320,1,310},
		{0,-1,1,280},
		{1,380,0,-1},
		{1,375,1,400}
	};
	
	printf("Flight is available for following days in 'MORNING':\n");
	printf("Monday\nTuesday\nThursday\nFriday\n");
	printf("Best option for booking a flight is on: Monday (due to price factor)\n");
	
	printf("\nFlight is available for following days IN 'EVENING':\n");
	printf("Tuesday\nWednesday\nFriday");
	printf("\nBest option for booking a flight is on: Wednesday (due to price factor)\n");

	char day;
	printf("\nEnter M for information about flight on 'Monday', T for 'Tuesday', W for 'Wednesday', H for 'Thursday', F for 'Friday': ");
	scanf(" %c", &day);
	switch (day) {
		case 'M':
			printf("Flight is available in Morning, price(300)");
			break;
		case 'T':
		    printf("Flight is available in Morning, price(320) as well as in Evening, price(310)");
		    break;
		case 'W':
		    printf("Flight is available in Evening, price(280)");
		    break;
		case 'H':
			printf("Flight is available in Morning, price(380)");
			break;
		case 'F':
			printf("Flight is available in Morning, price(375) as well as in Evening, price(400)");
			break;		
	}
	
	char time;
	int price;
	printf("\n\nEnter time which suits you ('M' for Morning and 'E' for evening): ");
	scanf(" %c", &time);
	printf("Enter most suitable price for you: ");
	scanf("%d", &price);
	if (time=='M') {
		if (price==300)
		printf("You can book a flight on Monday (Morning)");
		else if (price==320)
		printf("You can book a flight on Tuesday (Morning)");
		else if (price==380)
		printf("You can book a flight on Thursday (Morning)");
		else if (price==375)
		printf("You can book a flight on Friday (Morning)");
		else
		printf("Invalid value");
	}	
	else if (time=='E') {
		if (price==310)
		printf("You can book a flight on Tuesday (Evening)");
		else if (price==280)
		printf("You can book a flight on Wednesday (Evening)");
		else if (price==400)
		printf("You can book a flight on Friday (Evening)");
		else
		printf("Invalid value");
	}
	else
	printf("Invalid value");
}