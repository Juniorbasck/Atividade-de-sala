#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num1, num2, num3, maior;
    maior = 0;

    cout << "Digite o primeiro n�mero" << endl;
    cin >> num1;
    cout << "Digite o segundo n�mero" << endl;
    cin >> num2;
    cout << "Digite o terceiro n�mero" << endl;
    cin >> num3;

    if( (num1 >= num2) && (num1 >= num3))
        maior = num1;
    if ((num2 > num1)  && (num2 >= num3))
        maior = num2;
    if ((num3 > num1)  && (num3 > num2))
        maior = num3;
    cout << "O maior n�mero �: " << maior << endl;

    return 0;
    }
