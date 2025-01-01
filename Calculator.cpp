/*  syntax
  - [Data_type] [Variable_Name] = [Value]

*/
#include <iostream>

#include <regex>

using namespace std;

int main()

{
  cout << "Enter Two Numbers\n";

  double x;
  cin >> x;

  double y;
  cin >> y;

  cout << "Choose The Operation\n";
  cout << "1 = +\n";
  cout << "2 = -\n";
  cout << "3 = *\n";
  cout << "4 = /\n";

  int op;
  cin >> op;

  double result = 0;



  if (op == 1)
  {
    result = x + y;
    cout << x << " + " << y << " = " << result;
  }

  else if (op == 2)
  {
    result = x - y;
    cout << x << " - " << y << " = " << result;
  }

  else if (op == 3)
  {
    result = x * y;
    cout << x << " * " << y << " = " << result;
  }

  else if (op == 4)
  {
    result = x / y;
    cout << x << " / " << y << " = " << result;
  }

  else {
    cout << "Syntax Error!";
  }

  return 0;
}
