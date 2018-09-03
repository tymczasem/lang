#include "lexema.hpp"


void lexema::change()
{
	std::cout << "Введите слово: ";
	std::cin >> wort;
	std::cout << "Введите перевод: ";
	std::cin >> translate;
}

void lexema::print()
{
	std::cout << wort;
	std::cout << translate;
}
