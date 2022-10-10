#pragma once
#include <string>

class caesarEncrypter
{
	// 평문을 저장하는 strToCode.
	std::string strToCode;
	// 암호화된 string을 저장하는 codedStr.
	std::string codedStr;

	public:
		caesarEncrypter(std::string str);
		void encrypt(int shiftIdx);
		std::string showEncrypted();
};

