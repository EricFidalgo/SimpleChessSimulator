#include <iostream>
#include "chess.h"
using namespace std;

int
main ()
{
  int new_x, new_y;

  Knight knight (4,1);
  Bishop bishop (5,1);
  Rook rook (3,1);
  Queen queen (6,1);
  Chess chess;
  Chess help;

  char ans, n = 'y';

  cout <<
    "\n \n                                    \033[4mWelcome to Eric's Chess game!\033[0m          \n"
    << endl;

  chess.map (knight, bishop, rook, queen);
  cout <<
    "What would you like to move first? Knight (k), Bishop (B), Rook (R), or Queen (Q): (Press 'H' for help) ";
  cin >> ans;

  while (n == 'y')
    {

      if (ans == 'H' || ans == 'h')
	chess.help ();

      if (ans == 'K' || ans == 'k')	// knight
	{
	  cout << "The starting value of the Knight is: (" << knight.getX ()
	    << "," << knight.getY () << ")" << endl;
	  cout << "Pick your next value: " << endl;
	  cin >> new_x;
	  cin >> new_y;

	  knight.move (new_x, new_y, knight, bishop, rook, queen);

	  chess.map (knight, bishop, rook, queen);
	}

      if (ans == 'B' || ans == 'b')	// bishop
	{
	  cout << "The starting value of the Bishop is: (" << bishop.getX ()
	    << "," << bishop.getY () << ")" << endl;
	  cout << "Pick your next value:" << endl;
	  cin >> new_x;
	  cin >> new_y;

	  bishop.move (new_x, new_y, bishop, knight, rook, queen);
	  chess.map (knight, bishop, rook, queen);
	}

      if (ans == 'R' || ans == 'r')	// rook
	{

	  cout << "The starting value of the Rook is: (" << rook.getX () <<
	    "," << rook.getY () << ")" << endl;
	  cout << "Pick your next value: " << endl;
	  cin >> new_x;
	  cin >> new_y;

	  rook.move (new_x, new_y, rook, bishop, knight, queen);

	 chess.map (knight, bishop, rook, queen);
	}

      if (ans == 'Q' || ans == 'q')	// queen
	{

	  cout << "The starting value of the Queen is: (" << queen.getX () <<
	    "," << queen.getY () << ")" << endl;
	  cout << "Pick your next value: " << endl;
	  cin >> new_x;
	  cin >> new_y;

	  queen.move (new_x, new_y, queen, rook, bishop, knight);

	  chess.map (knight, bishop, rook, queen);
	}


      cout << "Would you like to continue? (y/n): ";
      cin >> n;

      if (n == 'y')
	{
	  cout <<
	    "What is your next move? Knight (k), Bishop (B), Rook (R), or Queen (q): (Press 'H' for help) ";
	  cin >> ans;
	}
    }

  return 0;
}
