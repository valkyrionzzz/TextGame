#include<iostream>
#include<string>
#include<fstream>
#include"showText.h"

using namespace std;

string titleText (ifstream& File){

	string Lines = "";							//All lines
    
	if (File){									//Check if everything is good    
		while (File.good()){					//.good: true if no errors, false if end of file reached, false if logic error between i/o operation false if 
			string TempLine;					//Temp line
			getline (File , TempLine);			//Get temp line
			TempLine += "\n";					//Add newline character	    
			Lines += TempLine;					//Add newline
		}
		return Lines;
	}
	else										//Return error    
		return "ERROR File does not exist.";    
}

string heroText (ifstream& File){

	string Lines = "";							//All lines
    
	if (File){									//Check if everything is good    
		while (File.good()){					//.good: true if no errors, false if end of file reached, false if logic error between i/o operation false if 
			string TempLine;					//Temp line
			getline (File , TempLine);			//Get temp line
			TempLine += "\n";					//Add newline character	    
			Lines += TempLine;					//Add newline
		}
		return Lines;
	}
	else										//Return error    
		return "ERROR File does not exist.";    
}