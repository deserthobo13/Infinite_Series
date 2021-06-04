/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double sum (int);
double equation (int);
int fact (int);

int n;

int
main ()
{
  int n;
  cout << "Enter starting point for your sum: " << endl;
  cin >> n;

  cout << setprecision (4);
  cout << sum (n) << endl;	//Sum function called here

  return 0;
}

double
sum (int starting)
{
  double equals;
  double prev = 0;
  string eqs;
  string prevs;
  int i = starting;
  while (true)
    {				//infinite loop
      equals += equation (i);
      eqs = to_string (equals);
      if ((eqs.substr (0, 100)).compare (prevs.substr (0, 100)) == 0)
	{
	  break;		//only stops looping when 100 digits of previous sum and current sum are equal
	}
      prev = equals;		//prev is the previous sum
      prevs = to_string (prev);
      ++i;
    }
  return equals;
}

double
equation (int n)
{				//here is the equation function; it has to be hard-coded
  double y = 1.0 / (pow (2, n));
  return y;
}

int
fact (int n)
{				//this is just a factorial function that isn't used
  return (n == 0 || (n == 1) ? 1 : n * fact (n - 1));

}
