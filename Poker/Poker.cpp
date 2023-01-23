#include <iostream>
#include <string>


int main()
{
	int val1, val2;
	char sem1, sem2;
	std::cout << "Se inserisci i valori e i semi di due carte diverse da poker ti diro quale ha il valore maggiore" << std::endl;
	std::cout << "Inserisci l'inziale del seme della prima carta ";
	std::cin >> sem1;
	std::cout << "inserisci il valore numerico (da 1 a 13) della prima carta ";
	std::cin >> val1;
	std::cout << "Inserisci l'inziale del seme della seconda carta ";
	std::cin >> sem2;
	std::cout << "inserisci il valore numerico (da 1 a 13) della seconda carta ";
	std::cin >> val2;

	if (val1 > val2)
	{
		std::cout << "la carta che vale di piu' e' la prima ";
	}
	else if (val2 > val1)
	{
		std::cout << "la carta che vale di piu' e' la seconda";
	}
	else
	{
		if (sem1 == 'C' || sem1 == 'c')
		{
			std::cout << "la carta che vale di piu' e' la prima ";
		}
		else if (sem2 == 'C' || sem2 == 'c')
		{
			std::cout << "la carta che vale di piu' e' la seconda";
		}
		else if (sem1 == 'Q' || sem1 == 'q')
		{
			std::cout << "la carta che vale di piu' e' la prima ";
		} 
		else if (sem2 == 'Q' || sem2 == 'q')
		{
			std::cout << "la carta che vale di piu' e' la seconda ";
		}
		else if (sem1 == 'F' || sem1 == 'f')
		{
			std::cout << "la carta che vale di piu' e' la prima ";
		}
		else if (sem2 == 'F' || sem2 == 'f')
		{
			std::cout << "la carta che vale di piu' e' la seconda ";
		}
	}
	return 0;
}