#include <iostream>
#include <windows.h>
#include <string>
#include "textMove.h"

using namespace std;

void pushText(int num){
    for(int i=0;i<num;i++)
        cout<<" ";
}
void textMove(string text, int spaces, int speed) {
    for(int i=0;i<spaces;i++){
        system("CLS");
        pushText(i);
        cout<<text<<endl;
        Sleep(speed);
    }

	cout<<endl;

}
