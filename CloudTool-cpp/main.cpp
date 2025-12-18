#include <iostream>
#include <string>
#include <vector>
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

// Funksioni për të shfaqur listën e kolegëve që janë aktivë në projekt
void shfaqListaKolegeve() {
    vector<string> kolege = {"Kolegu 1 - Ana", "Kolegu 2 - Lira", "Kolegu 3 - Mark"};
    
    cout << "\nKoleget aktive ne projekt:\n";
    for (const string& kolegu : kolege) {
        cout << "- " << kolegu << endl;
    }
}

// Funksioni për të gjeneruar një raport të thjeshtë për aktivitetet e projektit
void krijoRaportProjekti(string aktivitet, int koha) {
    cout << "\nRaport Projekti:\n";
    cout << "Aktivitet: " << aktivitet << endl;
    cout << "Koha e shpenzuar: " << koha << " ore\n";
    cout << "Statusi: Aktiviteti eshte ne perfundim ✅\n";
}

int main() {
    pershendetje();
    shfaqRegjionet();
    shfaqSherbimet();
    kontrolloSigurine(true);
    krijoResource("CloudStorage1", 50);
    monitoroSherbimin(true);
    perfundimMeSukses();
    shfaqListaKolegeve();  // Shfaq kolegët e grupit që janë aktivë
    krijoRaportProjekti("Krijimi i resurseve Cloud", 4);  // Raporti për një aktivitet specifik në projekt
    return 0;

}



