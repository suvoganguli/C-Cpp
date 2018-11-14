/*header file for gameBoard.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition

Gameboard::Gameboard()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			gameSpace[i][j] = '-';
		}
	}
}

void Gameboard::setGameSpace(int row,int column, char value)
{
	gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
	return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
	for (int row=0; row<4; row++)
	{
		int col1 = (gameSpace[row][0] == 'x');
		int col2 = (gameSpace[row][1] == 'x');
		int col3 = (gameSpace[row][2] == 'x');
		int col4 = (gameSpace[row][3] == 'x');
		
		if ((col1==1) && (col2==1) && (col3==1) && (col4==1))
		{
			return 1;
		}
	}
	return 0;
}

void Gameboard::printInfo()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			cout << gameSpace[i][j] << " ";
		}
		cout << '\n';
	}
}	
		






