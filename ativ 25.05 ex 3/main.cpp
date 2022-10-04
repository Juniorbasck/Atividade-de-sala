#include <iostream>
#include <locale>

using namespace std;

int main()
{

  setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Digite a idade do nadador: " << endl;
    cin >> idade;
    if (idade >= 5)
{
    cout << "Categoria do nadador é: \n";
    if (idade >= 5 && idade <= 7)
       cout << "infantil A. \n";
    if (idade >=8 && idade <= 10)
        cout << "infatil B. \n";
    if (idade >= 11 && idade <= 13)
        cout << "Juvenil A. \n";
    if (idade >= 14 && idade <= 17)
        cout << "Juvenil B. \n";
    if (idade >= 18)
        cout << "Adulto. \n";

}
 else
 cout << "idade inválida. \n";

 return 0;


