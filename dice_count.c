#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

void main() {
	int arr[6] = {0};	
	
//	srand(time(NULL));
	for (int i = 0; i < 1000; i++) {
		arr[rand()%6]++;
	}
	for (int j = 0; j < 6; j++) {
		printf("count of dice %d = %d\n", j+1, arr[j]);		
	}
}
