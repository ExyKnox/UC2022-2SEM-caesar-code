#include <iostream>
#include <string>
#include "caesarDecrypter.h"

// caesarDecrypter 객체 생성자.
// decrypt 할 string을 객체 내부 변수에 입력
caesarDecrypter::caesarDecrypter(std::string str) {
	strToDecode = str;
}

// shiftIdx만큼 알파벳 한 글자를 암호화 반대 방향으로 이동시키는(decrypt) 함수
void caesarDecrypter::decrypt(int shiftIdx) {
	// 암호화 key의 반대 방향으로 decrypt 해야 하므로 부호 반전을 시켜야 함
	int decryptKey = -shiftIdx;
	for (int i = 0; i < strToDecode.length(); i++) {
		// 공백 문자일 경우 shift 없이 그대로 append.
		if (strToDecode[i] == ' ') {
			decodedStr += ' ';
		}
		// 공백 문자가 아닐 경우 shiftIdx만큼 shift.
		else {
			decodedStr += (char)((int)strToDecode[i] + decryptKey);
		}
	}
}

std::string caesarDecrypter::getDecrypted() {
	return decodedStr;
}