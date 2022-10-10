#include <iostream>
#include <string>
#include "caesarEncrypter.h"

// caesarEncrypter 객체 생성자.
// 매개변수로 받은 char string을 객체 내부 변수에 입력
caesarEncrypter::caesarEncrypter(std::string str) {
	// string의 모든 글자를 대문자로 치환 후 객체 내부 변수에 로드
	for (int i = 0; i < str.length(); i++) {
		strToCode += toupper(str[i]);
	}
}

// 영어 대문자 ASCII 65(A)~90(Z), 공백문자 32( )

// shiftIdx만큼 알파벳 한 글자를 이동시키는(encrypt) 함수
void caesarEncrypter::encrypt(int shiftIdx) {
	for (int i = 0; i < strToCode.length(); i++) {
		// 공백 문자일 경우 shift 없이 그대로 append.
		if (strToCode[i] == ' ') {
			codedStr += ' ';
		}
		// 공백 문자가 아닐 경우 shiftIdx만큼 shift.
		else {
			codedStr += (char)((int)strToCode[i] + shiftIdx);
		}
	}
}

std::string caesarEncrypter::showEncrypted() {
	return codedStr;
}