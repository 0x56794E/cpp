/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 */


#include "StdAfx.h"
#include "Game.h"

Game::Game(void)
{
	clickCount = 0;
	grid = gcnew array<char, 2>(3,3);
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			grid[row,col] = 0;
	//-1:X =========== 1:O
	
	
}

char Game::winnerFound(int row, int col, char sym)
{

	if (grid[row,0] == grid[row,1] && grid[row,1] == grid[row,2]  //horizontal
		|| grid[0,col] == grid[1,col] && grid[2,col] == grid[1,col] //vertical
		|| grid[0,0] == grid[2,2] && grid[1,1] == grid[0,0] && grid[0,0] != 0 //diagonal (\)
		|| grid[2,0] == grid[1,1] && grid[1,1] == grid[0,2] && grid[0,2] != 0	//diagonal (/)
		)
		return sym;
	else return 0;

}

//****
//* Return -1 or 1 denpends on who is the winner
//* Return 0 if no winner is found
//***************************
char Game::click(int row, int col, char sym)
{
	
	grid[row,col] = sym;
	clickCount++;
	if (clickCount > 4)
	{
		return winnerFound(row, col, sym);
	}
	return 0;
}

bool Game::isClicked(int row, int col)
{
	return grid[row,col];
}


void Game::reset()
{
	winCountA = winCountB = 0;
}

