#include <iostream>
#include <cstdlib>
#include "chess.h"

using namespace std;


//KNIGHT
Knight::Knight (int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

void
Knight::setX (int new_x)
{
  x = new_x;
}

void
Knight::setY (int new_y)
{
  y = new_y;
}

int
Knight::getX () const
{
  return x;
}

int
Knight::getY () const 
{
  return y;
}

void
Knight::move (int new_x, int new_y, Knight knight, Bishop bishop, Rook rook, Queen queen)
{
  if (new_x == bishop.getX() && new_y == bishop.getY()
      || new_x == rook.getX() && new_y == rook.getY()
      || new_x == queen.getX() && new_y == queen.getY())
    // checks for any players being hit 
    {
      cout << "Move Invalid\nThe value of the Knight will stay at: (" <<
	x << "," << y << ")" << endl;
    }
  else
    {
      if (new_x >= 1 && new_x <= 10 && new_y >= 1 && new_y <= 10)
	// reads if player is inside of board
	{
	  if (new_x == x + 2 && new_y ==	 y + 1 
				||
	      new_x == x + 1 && new_y == y + 2
	      ||
	      new_x == x - 2 && new_y == y - 1 
				||
	      new_x == x - 1 && new_y == y - 2
	      ||
	      new_x == x + 2 && new_y == y - 1
	      ||
	      new_x == x + 1 && new_y == y - 2
	      || 
				new_x == x - 1 && new_y == y + 2
				|| 
				new_x == x - 2 && new_y == y + 1)
	    // check for correct moves
	    {

	      setX (new_x);
	      setY (new_y);

	      cout << "The new value of the Knight is: (" << x <<
		"," << y << ")" << endl;
	    }

	  else
	    {
	      cout << "Move Invalid\nThe value of the Knight will stay at: ("
		<< x << "," << y << ")" << endl;
	    }
	}
    }
}


//BISHOP
Bishop::Bishop (int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

void
Bishop::setX (int new_x)
{
  x = new_x;
}

void
Bishop::setY (int new_y)
{
  y = new_y;
}

int
Bishop::getX () const
{
  return x;
}

int
Bishop::getY () const
{
  return y;
}

void
Bishop::move (int new_x, int new_y, Bishop bishop, Knight knight, Rook rook, Queen queen)
{
  if (new_x == knight.getX() && new_y == knight.getY()
      || new_x == rook.getX() && new_y == rook.getY()
      || new_x == queen.getX() && new_y == queen.getY())
    // checks for any players being hit 
    {
      cout << "Move Invalid\nThe value of the Bishop will stay at: (" <<
	x << "," << y << ")" << endl;
    }
  else
    {
      if (new_x >= 1 && new_x <= 10 && new_y >= 1 && new_y <= 10)
	// reads if player is inside of board

	{
	  if (abs (x - new_x) == abs (y - new_y))
	    // checks for the correct move 
	    {
	      setX (new_x);
	      setY (new_y);

	      cout << "The new value of the Bishop is: (" << x <<
		"," << y << ")" << endl;
	    }

	  else
	    {
	      cout << "Move Invalid\nThe value of the Bishop will stay at: ("
		<< x << "," << y << ")" << endl;
	    }
	}

    }
}



//ROOK

Rook::Rook (int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

void
Rook::setX (int new_x)
{
  x = new_x;
}

void
Rook::setY (int new_y)
{
  y = new_y;
}

int
Rook::getX () const
{
  return x;
}

int
Rook::getY () const
{
  return y;
}

void
Rook::move (int new_x, int new_y, Rook rook, Bishop bishop, Knight knight, Queen queen)
{
  if (new_x == knight.getX() && new_y == knight.getY()
      || new_x == bishop.getX() && new_y == bishop.getY()
      || new_x == queen.getX() && new_y == queen.getY())
    // checks for any players being hit 
    {
      cout << "Move Invalid\nThe value of the Rook will stay at: (" <<
	x << "," << y << ")" << endl;
    }
  else
    {


      if (new_x >= 1 && new_x <= 10 && new_y >= 1 && new_y <= 10)
	// reads if player is inside of board
	{
	  if (abs (new_x - x) >= 0
	      && abs (new_y - y) == 0
	      || abs (new_x - x) == 0 && abs (new_y - y) >= 0)
	    // reads if Rook did the right move
	    {
	      setX (new_x);
	      setY (new_y);

	      cout << "The new value of the Rook is: (" << x <<
		"," << y << ")" << endl;
	    }

	  else
	    {
	      cout << "Move Invalid\nThe value of the Rook will stay at: (" <<
		x << "," << y << ")" << endl;
	    }
	}

    }
}




// QUEEN 

Queen::Queen (int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

void
Queen::setX (int new_x)
{
  x = new_x;
}

void
Queen::setY (int new_y)
{
  y = new_y;
}

int
Queen::getX () const
{
  return x;
}

int
Queen::getY () const
{
  return y;
}


void
Queen::move (int new_x, int new_y, Queen queen, Rook rook, Bishop bishop, Knight knight)
{
  if (new_x == knight.getX() && new_y == knight.getY() 
	|| new_x == bishop.getX() && new_y == bishop.getY()
	|| new_x == rook.getX() && new_y == rook.getY())
    {
      cout << "Move Invalid\nThe value of the Queen will stay at: (" <<
	x << "," << y << ")" << endl;
    }
  else
    {

      if (new_x >= 1 && new_x <= 10 && new_y >= 1 && new_y <= 10)
	{

	  setX (new_x);
	  setY (new_y);

	  cout << "The new value of the Queen is: (" << x <<
	    "," << y << ")" << endl;
	}
      else
	{
	  cout << "Move Invalid\nThe value of the Queen will stay at: (" <<
	    x << "," << y << ")" << endl;
	}
    }
}



void
Chess::map (Knight knight, Bishop bishop, Rook rook, Queen queen)
{
  for (int i = 0; i <= 10; i++)
    {

      if (i == 10)
	cout << "   ";		// x-axis space
      if (i != 10 && i != 0)
	cout << "    " << abs (i - 10);	// y-axis space

      if (i == 0)
	cout << "   " << abs (i - 10);
      for (int j = 0; j <= 10; j++)
	{
	  if (knight.getX() - 1 == j && abs (knight.getY() - 10) == i)
	    cout << " k";

	  else if (bishop.getX() - 1 == j && abs (bishop.getY() - 10) == i)
	    cout << " B";

	  else if (rook.getX() - 1 == j && abs (rook.getY() - 10) == i)
	    cout << " R";

	  else if (queen.getX() - 1 == j && abs (queen.getY() - 10) == i)
	    cout << " Q";

	  else if (i < 10 && j < 10)
	    {
	      cout << " .";
	    }


	  if (i >= 10)
	    cout << " " << j;	// number separator 
	}

      cout << endl;
    }
}

void
Chess::help ()
{

  cout <<
    "\n1. Knights may move one space up or down followed by two spaces left or right"
    << endl;
  cout << "          Example: The Knight can go from (4,1) to (6,2)" << endl;

  cout << "\n2. Bishops may move an arbitrary number of spaces at a diagonal."
    << endl;
  cout << "          Example: The Bishop can go from (5,1) to (7,3)" << endl;

  cout <<
    "\n3. Rooks may move an arbitrary number of spaces up, down, left, or right."
    << endl;
  cout << "          Example: The Rook can go from (1,3) to (10,3)" << endl;

  cout <<
    "\n4. Queens may move an arbitrary number of spaces in an arbitrary direction. As long as the move does not result in the Queen occupying the same position as another piece or the Queen leaving the 10x10 square, there are no invalid moves a Queen can make.\n"
    << endl;
}
