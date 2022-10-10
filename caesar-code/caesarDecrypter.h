#pragma once
#include <string>

class caesarDecrypter
{
	// cipher text를 저장하는 strToDecode.
	std::string strToDecode;
	// decrypt 된 평문을 저장하는 decodedStr.
	std::string decodedStr;

	public:
		caesarDecrypter(std::string str);
		void decrypt(int shiftIdx);
		std::string getDecrypted();
};

