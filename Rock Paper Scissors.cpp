#include <iostream>
using namespace std;

int main()
{
  
  cout << "Rock, Paper, Scissors!\n";

  cout << "Player1\n";
  cout << "1 = Rock\n";
  cout << "2 = Paper\n";
  cout << "3 = Scissors\n";

  int player1;
  cin >> player1;

  cout << "Player2\n";
  cout << "1 = Rock\n";
  cout << "2 = Paper\n";
  cout << "3 = Scissors\n";
  
  int player2;
  cin >> player2;

  if (player1 == 1 & player2 == 2)
  {
    cout << "player2 Win!";
  }

  else if (player1 == 1 & player2 == 3)
  {
    cout << "player1 Win!";
  }
  
  else if (player1 == 2 & player2 == 1)
  {
    cout << "player1 Win!";
  }

  else if (player1 == 2 & player2 == 3)
  {
    cout << "player2 Win!";
  }

  else if (player1 == 3 & player2 == 1)
  {
    cout << "player2 Win!";
  }

  else if (player1 == 3 & player2 == 2)
  {
    cout << "player1 Win!";
  }

  else if( player1 == player2 ) {
    cout << "Stalemate!";
  }

  else {
    cout << "Wrong Input, Try Again :(";
  }
 
  











  return  0; 
}