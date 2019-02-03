#include<iostream>
#include<vector>
#include<string>


std::vector<int> decode(std::string str);



int main() {
	std::string input;
	std::vector<int> result;
	std::cout << "Please enter the code: ";

	std::cin >> input;

	std::cout << result;

	std::getchar();
	return 0;
}

std::vector<int> decode(std::string str) {
	std::vector<int> decodeArray = {};

	for (int i = 0; i < str.length; i++) {
		decodeArray.push_back(str[i]);
	}

	return decodeArray;

}