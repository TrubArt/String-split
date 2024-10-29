#include "StringSplit.h"

std::vector<std::string> split(const std::string& str, const std::string& delimiter)
{
	std::vector<std::string> answ;
	size_t posNew = std::string::npos;
	int posLast = -1 * delimiter.size();
	std::string token;

	while ((posNew = str.find(delimiter, posLast + delimiter.size())) != std::string::npos)
	{
		token = str.substr(posLast + delimiter.size(), posNew - posLast - delimiter.size());
		if (!token.empty())
		{
			answ.push_back(token);
		}
		posLast = posNew;
		token.erase();
	}

	token = str.substr(posLast + delimiter.size());
	if (!token.empty())
	{
		answ.push_back(token);
	}

	return answ;
}