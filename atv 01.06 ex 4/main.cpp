#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int i = 1, num;

    cout << "informe um n�mero: \n";
    cin >> num;
    cout << "Os 10 antecessores de " << num << "s�o: \n";

    do {
        cout << num - i << endl;
        i = i + 1;
    } while (1 <= 10);
    return 0;
}
