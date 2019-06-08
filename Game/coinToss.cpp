#include<iostream>
#include"coinToss.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int coinToss(){
	
	srand(time(NULL));

	int outcome;
	int temp;
		
		temp = rand() % 100;
	
		if(temp > 49)
			outcome = 1;
		else 
			outcome = 2;

	return outcome;
}