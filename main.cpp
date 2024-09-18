#include <iostream>
#include "mensch.h"

int main()
{
	char auswahl;
	int menueAuswahl;
	mensch mensch;
	do
	{
		system("cls");
		std::cout << "Was m\x94 \bchten sie machen?" << std::endl;
		std::cout << "1. Essen" << std::endl;
		std::cout << "2. Essen mit Kalorien" << std::endl;
		std::cout << "3. Laufen" << std::endl;
		std::cout << "4. Laufen mit KM" << std::endl;
		std::cout << "5. Wiegen" << std::endl;
		std::cout << "6. Beenden" << std::endl;

		std::cout << "Auswahl: " << std::endl;
		std::cin >> menueAuswahl;

		switch (menueAuswahl)
		{
		case 1:
			mensch.essen();
			break;
		case 2:
			std::cout << "Kilokalorienanzahl eingeben: " << std::endl;
			int kcal;
			std::cin >> kcal;
			mensch.essen(kcal);
			break;
		case 3:
			mensch.laufen();
			break;
		case 4:
			std::cout << "Kilometeranzahl eingeben: " << std::endl;
			float km;
			std::cin >> km;
			mensch.laufen(km);
			break;
		case 5:
			mensch.wiegen();
			break;
		case 6:
			break;
		default:
			std::cout << "Falsche eingabe" << std::endl;
		}
	}
	while (menueAuswahl != 6);
	return 0;
}
