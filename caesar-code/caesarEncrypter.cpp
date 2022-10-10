#include <iostream>
#include <string>
#include "caesarEncrypter.h"

// caesarEncrypter ��ü ������.
// �Ű������� ���� char string�� ��ü ���� ������ �Է�
caesarEncrypter::caesarEncrypter(std::string str) {
	// string�� ��� ���ڸ� �빮�ڷ� ġȯ �� ��ü ���� ������ �ε�
	for (int i = 0; i < str.length(); i++) {
		strToCode += toupper(str[i]);
	}
}

// ���� �빮�� ASCII 65(A)~90(Z), ���鹮�� 32( )

// shiftIdx��ŭ ���ĺ� �� ���ڸ� �̵���Ű��(encrypt) �Լ�
void caesarEncrypter::encrypt(int shiftIdx) {
	for (int i = 0; i < strToCode.length(); i++) {
		// ���� ������ ��� shift ���� �״�� append.
		if (strToCode[i] == ' ') {
			codedStr += ' ';
		}
		// ���� ���ڰ� �ƴ� ��� shiftIdx��ŭ shift.
		else {
			codedStr += (char)((int)strToCode[i] + shiftIdx);
		}
	}
}

std::string caesarEncrypter::showEncrypted() {
	return codedStr;
}