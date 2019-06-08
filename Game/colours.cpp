#include"colours.h"
#include<windows.h>
#include<iostream>
#include<string>

using namespace std;

void red(){
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	/*for(k = 1; k < 255; k++)*/	
	// pick the colorattribute k you want
	SetConsoleTextAttribute(hConsole, 12);
}

string colour(string &message, int &numColour){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, numColour);
	cout << message << endl;
	return message;
}

void defaultText(){
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 76);
}


