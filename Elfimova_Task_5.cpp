#include <iostream>
using namespace std;

// Задание 1

void Change (int Arr [4])
{
for (int i = 0; i< 4; i++)
    {
        switch (Arr[i])
            {case 1:
            Arr[i] = 0;
            break;
                    
            case 0:
            Arr[i] = 1;
            break;
            }}
}


void Change2 (int Array[], int Array2[], const int SIZE )
{for (int i = 0; i< SIZE; i++)
{
    {Array[i] = Array2[i];};
}}

int main() {
    
    int Arr [4] = {1,0,1,0};
    
    for (int i = 0; i< 4; i++)
    {
        cout << Arr[i] << endl;
    }
    
    Change(Arr);
    
    for (int i = 0; i< 4; i++)
    {
        cout << Arr[i] << endl;
    }
    
    
    // Задание 2
    
     const int SIZE = 8;
     int Array [SIZE]{};
    
    for (int i = 0; i< SIZE; i++)
    {
        cout << Array[i] << endl;
    }
    
    int Array2 []{1,4,7,10,13,16,19,22};
    
    for (int j = 0; j< 8; j++)
    {
        cout << Array2[j] << endl;
    }
    
    Change2(Array,Array2,SIZE);
    
    for (int i = 0; i< SIZE; i++)
    {
        cout << Array[i] << endl;
    }
}
    
    
