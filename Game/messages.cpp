#include"messages.h"	
#include<iostream>
#include<string>
#include"colours.h"
#include"dice.h"

using namespace std;

string intro(string &message){
	message = "WELCOME TO DUNGEON DICE";
	int numColour = 15;
	colour(message,numColour);
	return message;
}

string enterName(string &message){
	message = "Enter your name: ";
	int numColour = 76;
	colour(message,numColour);
	return message;
}

string enteringBattle(string &message){
	message = "Entering dungeon ...";
	int numColour = 14;
	colour(message,numColour);
	return message;
}

string choosingHero(string &message){
	message = "Choose your hero class: (Wizard)";
	int numColour = 15;
	colour(message,numColour);
	return message;
}

string direction(string &message){
	message = "  Which way next? ... (N,S,E,W)";
	int numColour = 14;
	colour(message,numColour);
	return message;
}

void landmarkMessage(string &message, int &hp){
	int determineLandmark = 1;
	determineLandmark = heroRoll();
	if(determineLandmark == 1){
		message = "You have Landed at a hot spring and gained 70hp";
		hp = hp + 20;		
	}
	if(determineLandmark == 2){
		message = "You have found meat. Gained 10hp";
		hp = hp + 10;
	}
	if(determineLandmark == 3){
		message = "You have landed on a trap and took 20 dmg";
		hp = hp - 20;
	}
	if(determineLandmark == 4){
		message = "You have been shot from the shadows and took 10 dmg";
		hp = hp - 10;
	}	
	int numColour = 14;
	colour(message,numColour);
}

void hostileEncounterMessage(string &message,int &hp){
	int hostileLevel = 1;
	hostileLevel = heroRoll();
	if(hostileLevel == 1){
		message = "You have been attacked by mice. lost 5 hp";
		hp = hp - 5;		
	}
	if(hostileLevel == 2){
		message = "You have been attacked by dogs. lost 10hp";
		hp = hp - 10;
	}
	if(hostileLevel == 3){
		message = "You have been attacked by wolves and took 15 dmg";
		hp = hp - 15;
	}
	if(hostileLevel == 4){
		message = "You have been attacked by golems and took 20 dmg";
		hp = hp - 20;
	}	
	int numColour = 14;
	colour(message,numColour);
}

void decisionMessage(string &message, int &hp){
	int decisionChoice = 1;
	char userinput = 'N';
	decisionChoice = heroRoll();
	if(decisionChoice == 1){
		message = "You find a collapsed Goblin. Will you Help him(Y/N)";
		cout<<message<<endl;
		cin>>userinput;
			bool goodInput = false;
			while(goodInput == false){
				if(userinput == 'Y' || userinput == 'y'){
					cout << "He knocks you out and takes all your money. You take 10 dmg.";
					hp = hp - 10;
					goodInput = true;
				}
				else if(userinput == 'N' || userinput == 'n'){
					cout << "He runs away when you walked past.";
					goodInput = true;
				}
				else{
					cout<<"Enter valid input: "<<endl;
					cin>>userinput;
				}
			}		
	}
	if(decisionChoice == 2){
		message = "You find a ruby amulet on the floor, will you pick it up?(Y/N)";
		cout<<message<<endl;
		cin>>userinput;
			bool goodInput = false;
			while(goodInput == false){
				if(userinput == 'Y' || userinput == 'y'){
					cout << "You get set on fire. You take 25 dmg.";
					hp = hp - 25;
					goodInput = true;
				}
				else if(userinput == 'N' || userinput == 'n'){
					cout << "It starts shining even brighter.";
					goodInput = true;
				}
				else{
					cout<<"Enter valid input: "<<endl;
					cin>>userinput;
				}
			}	
	}
	if(decisionChoice == 3){
		message = "You find a sapphire amulet on the floor, will you pick it up?(Y/N)";
		cout<<message<<endl;
		cin>>userinput;
			bool goodInput = false;
			while(goodInput == false){
				if(userinput == 'Y' || userinput == 'y'){
					cout << "It stops glowing";
					hp = hp - 25;
					goodInput = true;
				}
				else if(userinput == 'N' || userinput == 'n'){
					cout << "It starts firing ice shards at you. You take 20 dmg.";
					hp = hp - 20;
					goodInput = true;
				}
				else{
					cout<<"Enter valid input: "<<endl;
					cin>>userinput;
				}
			}	
	}
	if(decisionChoice == 4){
		message = "You find a coin on the floor, will you pick it up?(Y/N)";
		cout<<message<<endl;
		cin>>userinput;
			bool goodInput = false;
			while(goodInput == false){
				if(userinput == 'Y' || userinput == 'y'){
					cout << "You hurt your back. You take 10 dmg. Atleast you got a coin";
					hp = hp - 10;
					goodInput = true;
				}
				else if(userinput == 'N' || userinput == 'n'){
					cout << "You immediately regret your decision";
					goodInput = true;
				}
				else{
					cout<<"Enter valid input: "<<endl;
					cin>>userinput;
				}
			}	
	}	
}
