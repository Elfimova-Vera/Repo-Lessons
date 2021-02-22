#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    const int SIZE = 3;
    char game[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++) {
            game[i][j] = '_';
        }
    }

    int count = 0;
    char winner = '*';
    char player = 'X';
    while (count != 9)
    {
        count++;
        if (player == 'X')
        {
            int col = 0, row = 0;
            while (true)
            {
                for (int i = 0; i < SIZE; i++)
                {
                    for (int j = 0; j < SIZE; j++) {
                        cout << game[i][j] << "|";
                    }
                    cout << endl;
                }
                cout << "__________________" << endl;
                cout << "Step X" << endl;
                cout << "__________________" << endl;
                int n = 1;
                for (int i = 0; i < SIZE; i++)
                {
                    for (int j = 0; j < SIZE; j++) {
                        cout << n + j << "|";
                    }
                    n += 3;
                    cout << endl;
                }
                int posotion;
                cout << "Select option: ";
                cin >> posotion;
                switch (posotion)
                {
                case 1: row = 0; col = 0; break;
                case 2: row = 0; col = 1; break;
                case 3: row = 0; col = 2; break;
                case 4: row = 1; col = 0; break;
                case 5: row = 1; col = 1; break;
                case 6: row = 1; col = 2; break;
                case 7: row = 2; col = 0; break;
                case 8: row = 2; col = 1; break;
                case 9: row = 2; col = 2; break;
                }
                if (posotion > 0 && posotion < 10 && game[row][col] == '_') { break; }
                else { cout << "Error!!! Select true option!!!!" << endl; }
            }
            game[row][col] = player;
            player = '0';
        }
        else if (player == '0')
        {
            int col = 0, row = 0;
            while (true)
            {
                int posotion = 1 + rand() % 9;
                switch (posotion)
                {
                case 1: row = 0; col = 0; break;
                case 2: row = 0; col = 1; break;
                case 3: row = 0; col = 2; break;
                case 4: row = 1; col = 0; break;
                case 5: row = 1; col = 1; break;
                case 6: row = 1; col = 2; break;
                case 7: row = 2; col = 0; break;
                case 8: row = 2; col = 1; break;
                case 9: row = 2; col = 2; break;
                }
                if (game[row][col] == '_') { break; }
            }
            if (game[0][0] == '_' && (game[0][1] == 'X' && game[0][2] == 'X' || game[1][1] == 'X' && game[2][2] == 'X' || game[1][0] == 'X' && game[2][0] == 'X')) {
                row = 0; col = 0;
            }
            else if (game[0][1] == '_' && (game[0][0] == 'X' && game[0][2] == 'X' || game[1][1] == 'X' && game[2][1] == 'X')) {
                row = 0; col = 1;
            }
            game[row][col] = player;
            player = 'X';
        }

        if (game[0][0] != '_' && (game[0][0] == game[0][1] && game[0][1] == game[0][2] || game[0][0] == game[1][0] && game[1][0] == game[2][0] || game[0][0] == game[1][1] && game[1][1] == game[2][2])) {
            winner = game[0][0];
        }
        else if (game[0][1] != '_' && game[0][1] == game[1][1] && game[1][1] == game[2][1]) {
            winner = game[0][1];
        }
        else if (game[0][2] != '_' && (game[0][2] == game[1][2] && game[1][2] == game[2][2] || game[0][2] == game[1][1] && game[1][1] == game[2][0])) {
            winner = game[0][2];
        }
        else if (game[1][0] != '_' && game[1][0] == game[1][1] && game[1][1] == game[1][2]) {
            winner = game[1][0];
        }
        else if (game[2][0] != '_' && game[2][0] == game[2][1] && game[2][1] == game[2][2]) {
            winner = game[2][0];
        }

        if (winner != '*') {
            break;
        }
    }
    cout << "__________________" << endl;
    cout << "END GAME" << endl;
    cout << "__________________" << endl;
    if (winner == '*') {
        cout << "Draw!!!" << endl;
    }
    else {
        cout << winner << "'s win!" << endl;
    }

}