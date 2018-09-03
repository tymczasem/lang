#include <iostream>
#include <fstream>
#include <vector>

#include "lexema.hpp"



int main()
{
	std::vector<lexema> dictionary;

	int headMenuNumb = 0;
	system("clear");
	std::cout 	<< "Выберите действие:"			<< std::endl
				<< "  1. Редактировать словарь" << std::endl
				<< "  2. Начать тест" 			<< std::endl
												<< std::endl
				<< "Введите номер выбранного действия: ";	
	std::cin >> headMenuNumb;
	
	if (headMenuNumb == 1)
	{
		int changeMenuNum = 0;
		system("clear");
		std::cout	<< "Выберите действие:" 		<< std::endl
					<< "  1. Отобразить словарь" 	<< std::endl
					<< "  2. Добавить лексему" 		<< std::endl
					<< "  3. Удалить лексему"		<< std::endl
					<< "  4. Редактировать лексему" << std::endl
													<< std::endl
					<< "Введите номер выбранного действия: ";
		std::cin >> changeMenuNum;
		
		if (changeMenuNum = 1)
		{
			dictionary.push_back();
			dictionary[dictionary.end() - 1].add();
		}
	} 
	else if (headMenuNumb == 2)
	{
		
	}
	
	
	return 0;
}
