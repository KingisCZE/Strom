#include <QCoreApplication>
#include <QTextCodec>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);

    string vystup;
    int velikost;
    int pom = 1;

    cout << "Zadejte velikost: ";
    cin >> velikost;
    cout << "Strom:" << endl << endl;

    for (int k = 0; k < 2; k++) {
        for (int j = 0; j < velikost; j++) {
            for (int i = 0; i < velikost - 1 - j; i++) {
                vystup += " ";
            }
            for (int i = 0; i < pom; i++) {
                vystup += "*";
            }
            cout << vystup << endl;
            pom += 2;
            vystup = "";
        }
        pom = 1;
    }

    for (int l = 0; l < velikost - 2; l++) {
        vystup += " ";
    }

    vystup += "***";

    for (int m = 0; m < velikost - 2; m++) {
        cout << vystup << endl;
    }

    return a.exec();
}
