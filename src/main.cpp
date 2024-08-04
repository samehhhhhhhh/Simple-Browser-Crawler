
#include<cpr/cpr.h>
#include <iostream>

int main() {
    std::cout << "Hello world ! " << std::endl;

    cpr::Response r = cpr::Get(cpr::url"https://youtube.com")

    std::cout << r.status_code << std::endl;
    

    return 0;
}