#include <iostream>

int main(int argc, char* argv[]) {
    if(argc > 1) {
        for(int i = argc - 1; i > 0; i--) {
            std::cout << argv[i] << std::endl;
        }
    } else {
        std::cout << "error no se ingresaron argumentos" << std::endl;
    }

    return 0;
}


