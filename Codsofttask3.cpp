#include<iostream>
using namespace std;

void printBoard(char board[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << board[i][j];
			if(j<2)
			{
				cout << " |"; 
			}
		}
		cout << endl;
	 if(i<2)
	 {
	 	cout << "---------" << endl;
	 }
	}
}

bool checkwin(char board[3][3] , char player)
{
	//check rows and columns
	for(int i =0;i<3;i++)
	{
		if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
		return true;
		if(board[0][i] == player && board[1][i] == player && board[2][i] == player)
		return true;
		
	}
	//check diagonals
	if(board[0][0] == player && board[1][1] == player && board[0][2] == player)
	return true;
	if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
	return true;
	
	
	return false;
}

bool checkdraw(char board[3][3])
{
	for(int i =0;i<3;i++)
	 for(int j=0;j<3;j++)
	  if(board[i][j] == ' ')
	  return false;
	  
	return true;
}

char playerswitch(char currentplayer){
	return(currentplayer == 'X')? 'O' : 'X';
}

int main()
{
	while(true){
		char board[3][3] = {{' ',' ',' '} , {' ',' ',' '} , {' ',' ',' '}};
		char currentplayer = 'X';
		bool gameover = false;
		
		while(!gameover){
			printBoard(board);
			cout << "Player " << currentplayer << "'s turn" << endl;
			int row,col;
			cout << "Enter the row and column (0 , 1 or 2): ";
			cin >> row >> col;
			
			if(row < 0 || row > 2 || col < 0 || col >2 || board[row][col] != ' '){
				cout << "Invalid input." << endl;
				continue;
			}
			
			board[row][col] = currentplayer;
			
			if(checkwin(board , currentplayer)){
				printBoard(board);
				cout << "Player " << currentplayer << " wins!" <<  endl;
				gameover = true;
			}else if(checkdraw(board)){
				printBoard(board);
				cout << "The game is draw!" << endl;
				gameover = true;
				
			}
			else
			{
				currentplayer = playerswitch(currentplayer);	
			}
		}
		
		char playagain;
		cout << "Do you want to play again? (y/n): ";
		cin >> playagain;
		if(playagain != 'y' && playagain != 'Y'){
			break;
		}
	}
	return 0;
}
