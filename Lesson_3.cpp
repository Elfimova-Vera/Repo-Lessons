
#include <iostream>
using namespace std;

float Ee;
int Aa = 7;
int Bb = 8;
int Cc = 9;
int Dd = 10;

int main(int argc, const char* argv[]) {

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

Ee = (float)Aa * ((float)Bb + ((float)Cc / (float)Dd));
    cout << Ee << endl;

    
// задание 4

/* Описать трёхмерный целочисленный массив, размером 3х3х3, указатель на значения внутри массива при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1] */

const int Line1 = 3;
const int Line2 = 3;
const int Line3 = 3;

int Arr[Line1][Line2][Line3];

for (int i = 0; i < Line1; i++)
{
for (int j = 0; j < Line2; j++)
{
for (int k = 0; k < Line3; k++)
{
Arr[i][j][k] = rand() % 10;
}
}

};

for (int i = 0; i < Line1; i++)
{
for (int j = 0; j < Line2; j++)
{
for (int k = 0; k < Line3; k++)
{
    cout << Arr [i][j][k] << "\t";
}
}
    cout << endl;
};

//int *pArr = Arr;

/* for (int i = 0; i < Line1; i++)
{
for (int j = 0; j < Line2; j++)
{
for (int k = 0; k < Line3; k++)
{
cout « *(pArr +1) «"\t";
}
}
}; */

int ***pArr;

//cout « ***(pArr + 1);

return 0;
}
