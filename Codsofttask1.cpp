#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	cout << "\n\t\t\t\tWELCOME TO THE GAME OF GUESSING NUMBER"<<endl;
	cout << "\nHere you will be getting limited number of chances to guess the random number.";
	cout << "\nSo best of luck!!"<<endl;
	int chancesleft,playerinput;
	srand(time(0));
	int randomnumber = ( rand() %100) +1;
	cout << "\nYou will have total 5 chances to guess the random number:";
	chancesleft = 5;

	for(int i=1; i<=5; i++) {
		cout << "\nEnter the number:";
		cin >> playerinput;

		if(playerinput == randomnumber) {
			cout << "Congrats!! You guess the correct number.\n";
			cout << "thanks for playing the game.";
			break;
		} else {
			if(playerinput > randomnumber) {
				cout << "\nInsert a smaller number.";
				cout << "\nTry again.\n";
			} else {
				cout << "\nInsert a greater number.";
				cout << "\nTry again.";
			}

		}
		chancesleft--;
		cout << "\nChances left to guess the random number: "<< chancesleft << endl;

		if(chancesleft == 0) {
			cout << "Sorry but your chances to guess the random number has been finished" << endl;
			cout << "Random number was: " << randomnumber << endl;
			cout << "Thanks for playing the game!!";
		}
	}
	cout << "\n";
	return 0;
}
