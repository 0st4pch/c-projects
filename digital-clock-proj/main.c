#include <stdio.h>
#include <time.h> // for sleep() function
#include <unistd.h>
#includee <stdlib.h>

int main() {
   int hour, minute, second;
   hour = minute = second = 0;
   while(1) {
	// clearing the output screen
	system("\330c");
	// printing time in HH : MM : SS format
	printf("%02d : %02d :%02d", hour, minute, second)
	
	// clearing the output buffer
	fflush(stdout)
	// increasing second
	second ++ ; // increasing second

	// updating hour, minute & second
	if(second == 60) {
		minute++ ;
		hour = 0;
		second = 0;
	}
  	if(minute == 60) {
		hour++ ;
		minute = 0;
		second = 0;
	}
	if(hour == 24) {
		hour = 0;
		minute = 0;
		second = 0;
	}


   	sleep(1)
   }
   
   return 0
}
