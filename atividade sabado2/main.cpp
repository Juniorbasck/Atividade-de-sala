#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

        float nome, distancia, minutos,velMedia, valorhora;

    cout << "Digite o seu nome:" << endl;
    cin >> nome;
    cout << "Digite a quantidade de quil�metros que v�ce andou" << endl;
    cin >> distancia;
    cout << "Digite o tempo em minutos que voc� pedalou" << endl;
    cin >> minutos;


    valorhora = (minutos / 60);
    velmedia =  (distancia / valorhora);


    cout << "Ol�" << nome << " voc� percorreu" << distancia << "kms em" << minutos << "A sua velocidade m�dia foi" << velmedia;

    return 0;
}
