#include <iostream>
#include "mensch.h"

int menschauswahl() {
    int i;
    std::cout <<
        "Menschauswahl:\n"
        "1. Mensch 1\n"
        "2. Mensch 2\n"
        "0. Beenden\n"
        "Auswahl: ";
    std::cin >> i;
    return i;
}

int main() {
    mensch mensch1, mensch2;
    int menueAuswahl = 69;
    system("cls");

    mensch* selectedMensch = nullptr;

    while (menueAuswahl != 0) {
        if (selectedMensch == nullptr) {
            int menschAuswahl = menschauswahl();
            if (menschAuswahl == 0) break;
            selectedMensch = (menschAuswahl == 1) ? &mensch1 : &mensch2;
            std::cout << "Mensch " << menschAuswahl << " wurde ausgewählt\n";
        }
        std::cout << "\n"
            "Was möchten Sie machen?\n"
            "1. Essen\n"
            "2. Essen mit Kalorien\n"
            "3. Laufen\n"
            "4. Laufen mit KM\n"
            "5. Wiegen\n"
            "9. Mensch wechseln\n"
            "0. Beenden\n"
            "Auswahl: ";

        std::cin >> menueAuswahl;

        switch (menueAuswahl) {
            case 1: selectedMensch->essen(); break;
            case 2: {
                int kcal;
                std::cout << "Kilokalorienanzahl eingeben: ";
                std::cin >> kcal;
                selectedMensch->essen(kcal);
                break;
            }
            case 3: selectedMensch->laufen(); break;
            case 4: {
                float km;
                std::cout << "Kilometeranzahl eingeben: ";
                std::cin >> km;
                selectedMensch->laufen(km);
                break;
            }
            case 5: selectedMensch->wiegen(); break;
            case 9: selectedMensch = nullptr; break;
            case 0: break;
            default: std::cout << "Falsche Eingabe\n"; break;
        }
    }
    return 0;
}