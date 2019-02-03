#include<iostream>
#include<vector>
#include<string>


void decode(std::string str);



int main() {
	std::string input;
	std::cout << "Please enter the code: ";

	std::getline(std::cin, input);

	decode(input);

	std::getchar();
	std::getchar();
	
	return 0;
}

void decode(std::string str) {
	std::vector<int> decodeArray = {};
	std::string result;
	//create an array of the ascii codes for the letters in the string
	for (int i = 0; i < str.length(); i++) {
		decodeArray.push_back(str[i]);
	//perform caesar cypher rotary manipulation
		if (decodeArray[i] > 64 && decodeArray[i] < 91) {
			decodeArray[i] = (decodeArray[i] - 65 + 13) % 26;
			decodeArray[i] += 65;
		}
		//store back into string
		result.push_back(decodeArray[i]);
	}
	std::cout << result;
}
