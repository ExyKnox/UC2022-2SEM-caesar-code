#include <iostream>
#include "caesarEncrypter.h"
#include "caesarDecrypter.h"


int main()
{
    caesarEncrypter cE = caesarEncrypter("be careful for assasinator");
    cE.encrypt(3);
    std::cout << "Encrypted Str : " + cE.getEncrypted() << std::endl;
    caesarDecrypter cD = caesarDecrypter(cE.getEncrypted());
    cD.decrypt(3);
    std::cout << "Decrypted Str : " + cD.getDecrypted() << std::endl;
}