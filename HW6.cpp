#include<iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib> 

using namespace std;

void unification(char MS1[], char MS2[], const int summ) {

    int a = sizeof(MS1) + sizeof(MS2);
    const int forresult = 104;

    char result[forresult];

    char* ap = new char[forresult];
    *ap = result[0];

    for (int i = 0; i < 51; i++)
    {
        result[i] = MS1[i];

    }
    for (int i = 51; i < 103; i++)
    {

        result[i] = MS2[i - 51];

    }
 

    ofstream fin3("text_third.txt");
    fin3 << result << endl;
    fin3.close();
}



int main(int argc, char** argv[])
{
   
    
    const int firstlong = 52;
    const  int secondlong = 52;

    ofstream fin1("text_first.txt");
    char MS1[firstlong] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    fin1 << MS1 << endl;
    fin1.close();

    ofstream fin2("text_second.txt");
    char MS2[secondlong] = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    fin2 << MS2 << endl;
    fin2.close();

    const int summ = firstlong + secondlong;


    unification(MS1, MS2, summ);



}
