#pragma once
#include <string>

class caesarDecrypter
{
	// cipher text�� �����ϴ� strToDecode.
	std::string strToDecode;
	// decrypt �� ���� �����ϴ� decodedStr.
	std::string decodedStr;

	public:
		caesarDecrypter(std::string str);
		void decrypt(int shiftIdx);
		std::string getDecrypted();
};

