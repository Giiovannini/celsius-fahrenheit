#include <iostream>

using namespace std;

int main()
{
   float tcelsius;
   float tfahr;

   cout << "Digite a temperatura em Celsius";
   cin >> tcelsius;

   tfahr = (((9 * tcelsius) / 5) + 32);

   cout << tcelsius << " graus Celsius equivalem a " << tfahr << " graus Fahrenheit" << endl;
}
