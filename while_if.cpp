#include <iostream>

int main() {

    
    int number, user_value ;
    while(1) {
        std::cout << "입력해봐" << std::endl;
        std::cin >> user_value;
        if (user_value == 5)
        {
            std::cout << "right" << std::endl;
            break;
        }
        else
        {
            std::cout << "Hmm?" << std::endl;
        }
    }
}