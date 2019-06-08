#include<iostream>
#include<string>
#include"events.h"
#include"messages.h"

using namespace std;

void mainSequence(int number, string &message, int &hp){
	if (number < 10){
		//do nothing
	}
	else if (number < 20){
		landmarkMessage(message,hp);
	}
	else if (number < 50){
		hostileEncounterMessage(message,hp);
	}
	else 
		decisionMessage(message,hp);
	direction(message);



}

