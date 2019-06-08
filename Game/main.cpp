#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include"showText.h"
#include"colours.h"
#include"messages.h"
#include"dice.h"
#include"coinToss.h"
#include"textMove.h"
#include"hero.h"
#include"events.h"

using namespace std;	

void main(){

	string username;
	string className;
	char userinput('Z');
	char directionToGo('N');
	char correctDirection('S');
	int correctDirectionCounter(0);
	string prevScore;
	

	int numColour(0);

	void red();

	string message("");

	string titleText (ifstream&);				//Gets file contents

	ifstream Reader ("text1.txt");				//Open file

	string Art = titleText (Reader);			//Get file
    
	cout << Art << endl;						//Print it to the screen

	Reader.close ();							//Close file
		
	system("pause");
	
	textMove(intro(message),60,50);				//message

	enterName(message);							//requests name
		cin>>username;
			cout<<endl;

	red();										//change colour red

	bool contPlaying(true);

	while(contPlaying == true){

		Sleep(1500);								//dramatic fx

		string heroText (ifstream&);				//Gets file contents

		ifstream Reader2 ("text2.txt");				//Open file

		Art = heroText (Reader2);					//Get file
    
		cout << Art << endl;						//Print it to the screen

		Reader.close ();							//Close file

		Sleep(1500);								//dramatic fx

		choosingHero(message);						//request hero choice

		defaultText();								//changes to preset text colour
	
		cin>>className;													//}selecting a class
			bool goodInput(false);
			while(goodInput == false)
			{
				if(className == username){
					try{
						throw "DAVE";
					}
					catch(...){
						cout<< "Exception occured IS YOUR NAME REALLY WIZARD" << endl;
						system("pause");
					}
				}
				if(className == "Wizard" || className == "wizard")
				{
					Wizard wizard1;
					wizard1.hp = 100;
					red();										//reset background colour

					system("CLS");								//clear screen

					direction(message);							//asking for direction

					int temp;									//selecting a correct direction
					temp = heroRoll();							//using heroRoll as it is also a 4 sided dice which is needed
					if(temp == 1)
						correctDirection = 'N';
					if(temp == 2)
						correctDirection = 'S';
					if(temp == 3)
						correctDirection = 'E';
					if(temp == 4)
						correctDirection = 'W';

					while ( correctDirectionCounter != 4 ){
						cin>>directionToGo;													//}selecting a direction to go to
							goodInput = false;
							while(goodInput == false){
								if(directionToGo == 'N' || directionToGo == 'S' || directionToGo == 'E' || directionToGo == 'W'){
									goodInput = true;
								}
								else{
									cout<<"Enter valid input: "<<endl;
									cin>>directionToGo;
								}
							}
						
							if( correctDirection == directionToGo)
								correctDirectionCounter = correctDirectionCounter + 1;
						
							mainSequence(mainRoll(),message,wizard1.hp);	//roll between 0-100 and decides event
						
						
					}
					correctDirectionCounter = 0;
					if(wizard1.hp > 0){
						cout << "YOU MADE IT OUT ALIVE WITH: "<<wizard1.hp<<" HP"<<endl;
					}
					if(wizard1.hp <= 0){
						cout <<"You died at the footsteps of the exit with: "<<wizard1.hp<<" HP"<<endl;
					}
					system("CLS");				

					ifstream PreviousScore;
					PreviousScore.open("text3.txt");				
					PreviousScore >> prevScore;
					PreviousScore.close();
				
					cout<< "Previous Score: " << prevScore << " HP"<<endl;

					ofstream endScreen;
					endScreen.open ("text3.txt");
					endScreen << wizard1.hp << " HP";

					endScreen.open ("text3.txt", ios::trunc);

					cout<< "Current Score: " << wizard1.hp << " HP"<<endl;

					endScreen.close();

					cout<< endl<< endl<<"CONTINUE PLAYING (Y/N): ";
					cin >> userinput;
					
						if(userinput == 'Y'){
						}
						else if(userinput == 'N'){
							contPlaying = false;
							goodInput = true;
						}
						else{
							while(userinput != 'Y' && userinput != 'N'){
								cout<<"Enter valid input: "<<endl;
								cin>>userinput;
								cout<<endl<<endl;
							}

						}
				
				}						
							else
							{
								cout<<"Enter valid input: "<<endl;
								cin>>className;
							}
			}			
	}
		
	system("pause");
}