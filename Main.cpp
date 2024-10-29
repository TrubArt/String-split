#include <iostream>
#include <string>
#include "src/StringSplit.h"

std::ostream& operator<<(std::ostream& out, const std::vector<std::string>& vec)
{
	for (size_t index = 0; index < vec.size(); ++index)
	{
		std::cout << index + 1 << ": " << vec[index] << "\n";
	}
	return out;
}

void testSplit(const std::string& str, const std::string& delimiter = " ")
{
	std::vector<std::string> answer = split(str, delimiter);
	std::cout << answer << "\n\n";
}

int main()
{
	std::string standartStringExample = "Jennifer plays under the tree";
	testSplit(standartStringExample);

	std::string nSpaceExample = "  Jennifer    plays         under the   tree   ";
	testSplit(nSpaceExample);

	std::string delimiterExample = "Jennifer;plays;under;the;tree";
	testSplit(delimiterExample, ";");

	std::string severalDelimiterExample = "Jennifer;;plays;under;;;the;tree";
	testSplit(severalDelimiterExample, ";");
}
