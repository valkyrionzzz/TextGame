#include<iostream>
#include<string>

using namespace std;

#ifndef WIZARD
#define WIZARD

class Wizard{
public:
	string name;
	int hp;

	//constructor
	Wizard(){
		name = "Harry";
		hp = 100;
	}


};
#endif