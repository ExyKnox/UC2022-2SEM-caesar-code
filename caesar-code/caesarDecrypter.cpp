#include <iostream>
#include <string>
#include "caesarDecrypter.h"

// caesarDecrypter ��ü ������.
// decrypt �� string�� ��ü ���� ������ �Է�
caesarDecrypter::caesarDecrypter(std::string str) {
	strToDecode = str;
}

// shiftIdx��ŭ ���ĺ� �� ���ڸ� ��ȣȭ �ݴ� �������� �̵���Ű��(decrypt) �Լ�
void caesarDecrypter::decrypt(int shiftIdx) {
	// ��ȣȭ key�� �ݴ� �������� decrypt �ؾ� �ϹǷ� ��ȣ ������ ���Ѿ� ��
	int decryptKey = -shiftIdx;
	for (int i = 0; i < strToDecode.length(); i++) {
		// ���� ������ ��� shift ���� �״�� append.
		if (strToDecode[i] == ' ') {
			decodedStr += ' ';
		}
		// ���� ���ڰ� �ƴ� ��� shiftIdx��ŭ shift.
		else {
			decodedStr += (char)((int)strToDecode[i] + decryptKey);
		}
	}
}

std::string caesarDecrypter::getDecrypted() {
	return decodedStr;
}