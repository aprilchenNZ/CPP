#include <iostream>
#include <map>
#include <vector>
#include <string>

int main()
{
	auto integer = 10;
	auto dec = 1.0;
	auto ch = 'A';
	std::map<int, std::string>  studentsrank;
	studentsrank.insert( std::pair<int,std::string>(1,"Leo") );
	studentsrank.insert(std::pair<int, std::string>(2, "April"));

	std::cout << integer << std::endl;
	std::cout << dec << std::endl;
	std::cout << ch << std::endl;
	for (auto it = studentsrank.begin(); it != studentsrank.end(); ++it)
	{
		std::cout << it->first << " => " << it->second <<'\n';
	}

	/*const/volatile and reference/pointer adornments may be added*/
	const auto *cpinteger = &integer;

	std::vector<int> productsprice;
	int prices[] = {100,200,300,400,500};
	productsprice.insert(productsprice.begin(), prices, prices + 5);
	
	for (auto price : productsprice)
	{
		std::cout << price << std::endl;
	}
	system("pause");
	return 0;
}