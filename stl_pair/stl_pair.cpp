#include<iostream>
#include<utility>
#include<vector>

int main() {
	std::pair<int, char>myPair{1, 'c'};
	std::cout << "First Elt" << myPair.first << " Sec Element " << myPair.second << std::endl;

	myPair = std::make_pair(6, 'f'); 
	std::cout << "\nAfter the manipulaiton\n"; 
	std::cout << "First Elt is: " << myPair.first << " Sec Element is: " << myPair.second << std::endl;
	std::cout << "\n"; 
	
	// Create a vector of an "int, char" pair
	std::vector <std::pair<int, char>> vecChar; 

	vecChar.push_back(std::make_pair(1, 'a'));
	vecChar.push_back(std::make_pair(2, 'b'));
	vecChar.push_back(std::make_pair(3, 'c'));
	vecChar.push_back(std::make_pair(4, 'd'));
	vecChar.push_back(std::make_pair(5, 'e'));

	for (const auto& i : vecChar)
		std::cout << i.first << " --> " << i.second << std::endl; 

	return 0; 
}