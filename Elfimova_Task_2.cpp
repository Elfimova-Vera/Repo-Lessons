#include <iostream>
using namespace std;

int main() {
    
    // Задание №1
    
    int h = 13;
    short int hLittle = 1;
    unsigned short int hOtherLittle = 123;
    unsigned int hElse = 1000000;
    long int hBig = -648;
    unsigned long int hBiger = 3333333;
    
    float j = 1.12;
    double jBig = 667.77;
    long double jVeryBig = 7.78787;
    
    char k = 'X';
    
    bool l = true;
  
    
    // Задание №2
    
    enum Sign {O, X}; // у Zero ноль, у Cross единица
    
    
    // Задание №3
    
    int Board [2];
    Board [0] = Sign::O;
    Board [1] = Sign::X;
    
    cout <<  Board [0] <<endl;
    cout <<  Board [1] <<endl;
    
    // Задание №4
    
    struct Details {
        char Player_1 [10];
        char Player_2 [10];
        char Table [3][3];
    } play;
    
    // Задание №5
    
    struct Info {
        union LastTask {
            int V ;
            int B ;
            int M ;
        };
        int is_char : 1;
        int is_upp : 1;
        int is_low : 1;
        int is_dig : 1;
        int is_spc : 1;
    };
    //return 0;
}
