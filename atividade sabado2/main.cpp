#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

        float nome, distancia, minutos,velMedia, valorhora;

    cout << "Digite o seu nome:" << endl;
    cin >> nome;
    cout << "Digite a quantidade de quilômetros que vôce andou" << endl;
    cin >> distancia;
    cout << "Digite o tempo em minutos que você pedalou" << endl;
    cin >> minutos;


    valorhora = (minutos / 60);
    velmedia =  (distancia / valorhora);


    cout << "Olá" << nome << " você percorreu" << distancia << "kms em" << minutos << "A sua velocidade média foi" << velmedia;

    return 0;
}
