#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int option;

int main() {
    cout << "Qual ferramenta deseja instalar?\n\n[1] Barca CLI\n[2] Barca Web Cloud\n[3] Mamute Security\n\n\n[0]Sair" << endl;
    cin >> option;
    switch (option) {
      case 1:
        cout << "Instalando Barca CLI..." << endl;
        system("pause");
        break;
      case 2:
        cout << "Instalando Barca Web Cloud..." << endl;
        system("pause");
        break;
      case 3:
        cout << "Instalando Mamute Security..." << endl;
        system("pause");
        break;
      case 0:
        exit(EXIT_SUCCESS);
        break;
      default:
        cout << "Opção inválida" << endl;
        system("pause");
        break;
    }
    
    return 0;
}