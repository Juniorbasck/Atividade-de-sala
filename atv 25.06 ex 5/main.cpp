#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float multplicacao = 0.0,salario;
    char nome{20};

    cout << "Digite seu nome" << endl;
    cin >> nome;
    cout << "Digite o valor do seu sal�rio: \n";
    cin >> salario;

    if ((salario >= 2000) && (salario <=3000))
        multplicacao = salario * 0.15;

    if ((salario >= 3000) && (salario <5000))
        multplicacao = salario * 0.20;

    if ((salario >=5000) && (salario <10000))
        multplicacao = salario * 0.23;

    if (salario >= 10000)
        multplicacao = salario * 0.27;

    if (multplicacao == 0)
        cout << "voc� � isento. \n";
        else
        cout << "voc� dever� pagar a taxa de " << multplicacao << "reais de IRPF. \n";

    return 0;
}
