#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    cout << "Escolha um time para ver uma mensagem sobre ele. \n";
    cout << "1 - são paulo. \n";
    cout << "2 - santos. \n";
    cout << "3 - Palmeiras. \n";
    cout << "4 - Corinthians. \n";
    cin >> opcao;

    switch(opcao)
    {

    case 1:
        cout << "Time fraco. \n";
    break;
    case 2:
        cout << "time de velho. \n";
    break;
    case 3:
        cout << "Palmeiras não tem mundial. \n";
    break;
    case 4:
        cout << "esse time está acabando. \n";
    }
    return 0;
}
