#include <iostream>
using namespace std;

void pershendetje() {
    cout << "Pershendetje!" << endl;
}

void shfaqRegjionet() {
    cout << "Regjionet Cloud:\n";
    cout << "- Europe\n";
    cout << "- USA\n";
    cout << "- Asia\n";
}

void shfaqSherbimet() {
    cout << "\nSherbimet Cloud:\n";
    cout << "- Storage\n";
    cout << "- Virtual Machines\n";
    cout << "- Databases\n";
}

int main() {
    pershendetje();
    shfaqRegjionet();
    shfaqSherbimet();

    return 0;

}

void kontrolloSigurine(bool autentikim) {
    if (autentikim == true) {
        cout << "\nSiguria: Akses i lejuar ✅\n";
    } else {
        cout << "\nSiguria: Akses i ndaluar ❌\n";
    }
}

void krijoResource(string emri, int madhesiaGB) {
    cout << "\nResource i krijuar:\n";
    cout << "Emri: " << emri << endl;
    cout << "Madhesia: " << madhesiaGB << " GB\n";
}
