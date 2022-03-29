#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, triangolo=0, quadrato=0, rettangolo=0;
    int opzione=0;

    cout << "Inserire due valori reali: " << endl;
    cin >> a >> b;
    cout << "\n";
    cout << "Scegli un valore tra 0, 1 e 2: " << endl;
    cin >> opzione;
    cout << "\n";

    switch(opzione){
        case 0:
            opzione=0;
            triangolo=(a*b)/2;
            cout << "L'area del triangolo e\': " << triangolo << endl;
            break;
        case 1:
            opzione=1;
            quadrato=a*a;
            cout << "L'area del quadrato e\': " << quadrato << endl;
            break;
        case 2:
            opzione=2;
            rettangolo=a*b;
            cout << "L'area del rettangolo e\': " << rettangolo << endl;
            break;
        default:
            cout << "Il valore inserito non e\' valido!" << endl;
    }

    return 0;
}
