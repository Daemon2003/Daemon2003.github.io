#include <iostream>
#include <string>
using namespace std;

string CaesarCryptage(string message, int dec) {
    string result = "";
    for (char& c : message) {
        if (isalpha(c)) {
            char lettre = (c - 'a' + dec) % 26 + 'a';
            result += lettre;
        } else {
            result += c;
        }
    }
    return result;
}

string CaesarDecryptage(string message, int dec) {
    return CaesarCryptage(message, 26 - dec);
}

int main() {
    string message;
    int dec;

    cout << "Entrez le message à crypter/décrypter : ";
    getline(cin, message);

    cout << "Entrez le décalage pour le chiffrement de César (nombre entier) : ";
    cin >> dec;

    string messagecrypter = CaesarCryptage(message, dec);
    string messagedecrypter = CaesarDecryptage(message, dec);

    cout << "Message crypté : " << messagecrypter << endl;
    cout << "Message décrypté : " << messagedecrypter << endl;

    return 0;
}
