// WhileDemo - insere um loop count. O loop while
//exibe a saída astering arg inúmeras vezes
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // insere o loop count
    int nLoopCount;
    cout << "Enter loop count: ";
    cin  >> nLoopCount;

    // agora faz o loop várias vezes
    while (nLoopCount > 0)
    {
        nLoopCount = nLoopCount - 1;
        cout << "Only " << nLoopCount
             << " loops to go" << endl;
    }

    // espera até o usuário estar pronto
    // para encerrar o programa para
    // permitir que ele veja os resultados
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
