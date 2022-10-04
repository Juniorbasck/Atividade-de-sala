#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int i = 1, num;

    cout << "informe um número: \n";
    cin >> num;
    cout << "Os 10 antecessores de " << num << "são: \n";

    do {
        cout << num - i << endl;
        i = i + 1;
    } while (1 <= 10);
    return 0;
}
