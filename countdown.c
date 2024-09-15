/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int countdown;
	printf("Write the countdown start number : \n");
	fflush(stdout);
	scanf("%d", &countdown);
	
	int skipNumber;
	printf("Write a number to skip : \n");
        fflush(stdout);
        scanf("%d", &skipNumber);

	printf("Countdown : \n");
	printf("%d\n", countdown);
	while(1){
		
		
		countdown--;		

		if(countdown == skipNumber)
			continue;
				
		sleep(1);
		printf("%d\n", countdown);		
		
		if(countdown < 1 )
			break;
	}
}
