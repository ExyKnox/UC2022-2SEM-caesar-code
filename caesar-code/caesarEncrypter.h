#pragma once
#include <string>

class caesarEncrypter
{
	// ���� �����ϴ� strToCode.
	std::string strToCode;
	// ��ȣȭ�� string�� �����ϴ� codedStr.
	std::string codedStr;

	public:
		caesarEncrypter(std::string str);
		void encrypt(int shiftIdx);
		std::string showEncrypted();
};

