#include<iostream>

int main() {
    int N = 0;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        for(int j=0;j<N-i-1;j++) {
            std::cout << " ";
        }

        for(int j=0;j<2*i+1;j++) {
            std::cout << "*";
        }

        std::cout << std::endl;

    }
    for(int i=0;i<N-1;i++) {
        for(int j=0;j<i+1;j++) {
            std::cout << " ";
        }

        for(int j=0;j<2*(N-i-1)-1;j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}