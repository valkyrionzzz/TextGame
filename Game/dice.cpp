#include <iostream>
#include"dice.h"
#include<Time.h>

using namespace std;

int mainRoll(){

	srand(time(NULL));

	int dice;

	dice = rand() % 100;
	
	return dice;
}

int heroRoll(){

	srand(time(NULL));

	int dice;

	dice = rand() % 4 + 1;

	return dice;
}

void heroBattleRoll(int &roll1, int &roll2, int &roll3){
	
	roll1 = heroRoll();
	roll2 = heroRoll();
	roll3 = heroRoll();
}