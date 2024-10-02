#include <iostream>
#include "mensch.h"
#include "Umlaute.h"


int menschauswahl() {
    int i;
    std::cout <<
        "Mensch ausw" << ae << "hlen:\n"
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
    mensch* ausgewaehlterMensch = nullptr;

    while (menueAuswahl != 0) {
        if (ausgewaehlterMensch == nullptr) {
            int menschAuswahl = menschauswahl();
            if (menschAuswahl == 0) break;
            ausgewaehlterMensch = (menschAuswahl == 1) ? &mensch1 : &mensch2;
            std::cout << "Mensch " << menschAuswahl << " wurde ausgew" << ae << "hlt\n";
        }
        std::cout << "\n"
            "Was m" << oe << "chten Sie machen?\n"
            "1. Essen\n"
            "2. Essen mit Kalorien\n"
            "3. Laufen\n"
            "4. Laufen mit KM\n"
            "5. Ausgabe\n"
            "6. Lecker Bierchen\n"
            "7. Arbeiten\n"
            "9. Mensch wechseln\n"
            "0. Beenden\n"
            "Auswahl: ";

        std::cin >> menueAuswahl;

        switch (menueAuswahl) {
            case 1: ausgewaehlterMensch->essen(); break;
            case 2: {
                int kcal;
                std::cout << "Kilokalorien anzahl eingeben: ";
                std::cin >> kcal;
                ausgewaehlterMensch->essen(kcal);
                break;
            }
            case 3: ausgewaehlterMensch->laufen(); break;
            case 4: {
                float km;
                std::cout << "Kilometeranzahl eingeben: ";
                std::cin >> km;
                ausgewaehlterMensch->laufen(km);
                break;
            }
            case 5: ausgewaehlterMensch->ausgabe(); break;
            case 6: ausgewaehlterMensch->leckerBierchen(); break;
            case 7: ausgewaehlterMensch->arbeiten(); break;
            case 9: ausgewaehlterMensch = nullptr; break;
            case 0: break;
            default: std::cout << "Falsche Eingabe\n"; break;
        }

        if (ausgewaehlterMensch->holgluecklichkeitspunkte() == 0)
        {
            std::cout << "Bist tot; zu wenig lecker Bierchen, zu viel arbeit\n";
            break;
        }

    }
    return 0;
}