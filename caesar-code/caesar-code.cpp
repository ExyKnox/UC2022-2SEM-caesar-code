#include <iostream>
#include "caesarEncrypter.h"


int main()
{
    caesarEncrypter cE = caesarEncrypter("test String");
    cE.encrypt(3);
    std::cout << cE.showEncrypted() << std::endl;
}
