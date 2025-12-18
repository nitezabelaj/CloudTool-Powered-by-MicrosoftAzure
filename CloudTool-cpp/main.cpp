#include <iostream>
#include <string>
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

void monitoroSherbimin(bool online) {
    if (online) {
        cout << "Sherbimi cloud eshte duke funksionuar normalisht.\n";
    } else {
        cout << "KUJDES! Sherbimi cloud eshte jashte funksioni.\n";
    }
}

void perfundimMeSukses() {
    cout << "Programi CloudTool u perfundua me sukses." << endl;
}

int main() {
    pershendetje();
    shfaqRegjionet();
    shfaqSherbimet();
    kontrolloSigurine(true);
    krijoResource("CloudStorage1", 50);
    monitoroSherbimin(true);
    perfundimMeSukses();

    return 0;

}
