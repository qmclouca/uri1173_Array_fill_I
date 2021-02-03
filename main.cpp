#include <iostream>
using namespace std;

int main() {
    int X[10], first = 0;
    std::cin >> first;
    X[0] = first;
    for (int aux = 1; aux<10; aux++){
        X[aux] = X[aux-1]*2;
    }
    for (int aux = 0; aux<10; aux++){
        std::cout << "N["<< aux <<"] = " << X[aux] <<std::endl;
    }
    return 0;
}
