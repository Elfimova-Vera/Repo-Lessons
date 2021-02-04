#include <iostream>
using namespace std;
int main(int argc, const char* argv[]) {
    
    float E;
    int A = 10;
    int B = 11;
    int C = 12;
    int D = 13;

// задание 1

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
float e;

e = (float)a * ((float)b + ((float)c / (float)d));
    cout << e << endl;
    
// задание 2

int f;
int g;
    
cout << "Write the value of the variable ";
cin >> f;

g = (f < 21) ? f - 21 : 2 * (f - 21);
    cout << g << endl;
    
// задание 3

    E = (float)A * ((float)B + ((float)C / (float)D));
        cout << E << endl;
    
// задание 4

const int Line1 = 3;
const int Line2 = 3;
const int Line3 = 3;

int Arr[Line1][Line2][Line3];

for (int i = 0; i < Line1; i++)
{for (int j = 0; j < Line2; j++)
{for (int k = 0; k < Line3; k++)
{Arr[i][j][k] = rand() % 10;}
}
};

for (int i = 0; i < Line1; i++)
{
for (int j = 0; j < Line2; j++)
{
for (int k = 0; k < Line3; k++)
{cout << Arr [i][j][k] << "\t";}
}cout << endl;
};
//int ***pArr;
//cout « ***(pArr + 1);
return 0;
}
