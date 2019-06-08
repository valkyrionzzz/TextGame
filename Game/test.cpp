#include <iostream>
#include <fstream>

#include <string>

using namespace std;

string getFileContents (ifstream&);            //Gets file contents

int main(int argc, char *argv[])
{

    std::ifstream Reader ("text1.txt");             //Open file

    std::string Art = getFileContents (Reader);       //Get file
    
    std::cout << Art << std::endl;               //Print it to the screen

    Reader.close ();                           //Close file
		system("pause");
    return 0;
}

string getFileContents (ifstream& File)
{
    string Lines = "";        //All lines
    
    if (File)                      //Check if everything is good
    {
	while (File.good ())
	{
	    string TempLine;                  //Temp line
	    getline (File , TempLine);        //Get temp line
	    TempLine += "\n";                 //Add newline character
	    
	    Lines += TempLine;                //Add newline
	}
	return Lines;
    }
    else                           //Return error
    {
	return "ERROR File does not exist.";
    }
}