#include <iostream>
#include <bitset>

int main() {
	int number{ 0 };

	std::cout << "Please, enter a number: ";
	std::cin >> number;

	int inverted_number = ~number;
	unsigned int u_inverted_number = static_cast<unsigned int>(inverted_number);

	std::cout << "Bit representation: " << std::endl;
	std::cout << "Original value: " << std::bitset<32>(number) << "  Inverted value: "<< std::bitset<32>(inverted_number)
		      << "  Inverted value plus 1: " << std::bitset<32>(inverted_number + 1)
	          << std::bitset<32>(inverted_number) << "   Unsigned inverted value: " << std::bitset<32>(u_inverted_number);

	std::cout<<std::endl << "\nInteger  representation: " << std::endl;
	std::cout << "Original value: " << number << "  Inverted value: " << inverted_number << "   Inverted value plus 1: " << inverted_number + 1
		      << "  Unsigned inverted value: " << u_inverted_number << std::endl;


	return 0;
}