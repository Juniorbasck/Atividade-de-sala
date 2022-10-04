#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int nome1, nome2, nome3, nome4, nome5, ano1, ano2, ano3, ano4, ano5, soma;

   cout << "informe seu nome" << endl;
   cin >> nome1;
   cout << "informe seu ano de nascimento" << endl;
   cin >> ano1;

    cout << "informe seu nome" << endl;
    cin >> nome2;
    cout << "informe seu ano de nascimento" << endl;
    cin >> ano2;

    cout << "informe seu nome" << endl;
    cin >> nome3;
    cout << "informe seu ano de nascimento" << endl;
    cin >> ano3;

    cout << "informe seu nome" << endl;
    cin >> nome4;
    cout << "informe seu ano de nascimento" << endl;
    cin >> ano4;

    cout << "informe seu nome" << endl;
    cin >> nome5;
    cout << "informe seu ano de nascimento" << endl;
    cin >> ano5;

    soma = ano1 + ano2 + ano3 + ano4 + ano5;

    return 0;
}
