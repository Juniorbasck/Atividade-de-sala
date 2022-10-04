#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "POrtuguese");

    int i, soma;
    for (i = 100; i <= 200; i++)
    {
        if(i % 2 == 0)
        {
            soma += i;
        }
    }
   cout << "O resultado da soma é: " << soma << endl;
   return 0;
}
