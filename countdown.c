
/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int countdown;
	printf("Write the countdown start number : \n");
	fflush(stdout);
	scanf("%d", &countdown);
	
	printf("Countdown : \n");
	while(1){
		printf("%d\n", countdown);
		sleep(1);
		countdown--;
		
		if(countdown < 1 )
			break;
	}
}
