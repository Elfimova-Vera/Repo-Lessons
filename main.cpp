#include <iostream>

// Задание №1

#define COMPARE(a,b) (((a > b) && (a <= 0)) || ((a < b) && (a >= 0)))

// Задание №2

#define elementArr(arr) (*(*(arr+1)+ 2))

using namespace std;
int main(int argc, const char * argv[]) {
    
    
   // setlocale(LC_ALL, "ru");
  
   // Задание №1
    
    int a = -15;
    int b = 3;
    
    cout << COMPARE(a,b) << endl;
   
    
   /*  int c,d;
     cout << "Введите число" << endl;
     cin >> c;
     cout << "Введите диапозон" << endl;
     cin >> d;
    
    if (c > d)
    {
    if (c <= 0)
    {cout << "Число входит в диапазон" << endl;}
    else  {cout << "Число не входит в диапазон" << endl;}
    }
    else  {
    if (c >= 0 )
    {cout << "Число входит в диапазон" << endl;}
    else  {cout << "Число не входит в диапазон" << endl;}
    }
 */

  
    // Задание №2
    
    int rows = 4;
    int cols = 5;
    
    // создание массива
    
    int **arr = new int* [rows];
    
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }
    
    // заполнение массива
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    // вывод массива
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    // cout << **(arr+1) << endl;
    cout << elementArr(arr) << endl;
    
    // удаление массива
    
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    
}
/* 1  Описать макрокоманду, проверяющую, входит ли переданное ей число в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)
 
 2  Описать макрокоманду, получающую доступ к элементу двумерного массива (организованного динамически) посредством разыменования указателей
 */
