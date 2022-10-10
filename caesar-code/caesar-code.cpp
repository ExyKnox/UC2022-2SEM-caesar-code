#include <iostream>
#include "caesarEncrypter.h"
#include "caesarDecrypter.h"


int main()
{
    caesarEncrypter cE = caesarEncrypter("test String");
    cE.encrypt(3);
    std::cout << "Encrypted Str : " + cE.showEncrypted() << std::endl;
    caesarDecrypter cD = caesarDecrypter(cE.showEncrypted());
    cD.decrypt(3);
    std::cout << "Decrypted Str : " + cD.showDecrypted() << std::endl;
}
