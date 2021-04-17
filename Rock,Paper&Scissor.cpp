#include <iostream>
#include <time.h>
using namespace std;

void Name(char arr1[])
{
    cout << "Enter Your Name" << endl;
    cin >> arr1;
    cout << "Welcome To Game " << arr1 << endl;
}

int rNum()
{
    srand(time(NULL));
    return rand() % 3;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    char arr1[20];
    int playerScor = 0, cpuScor = 0, temp;
    char player, cpu;
    char opt[] = {'r', 'p', 's'};

    Name(arr1);
    for (int i = 1; i <= 3; i++)
    {

        cout << "--------------ROUND-" << i << "--------------" << endl;
        cout << "Select\n1 for Rock\n";
        cout << "2 for Paper\n3 for Scissors\n"
             << endl;

        //player's turn
        cout << "Player's Turn" << endl;
        cin >> temp;
        getchar();
        player = opt[temp - 1];
        cout << "You Seleced " << player << endl;

        //cpu's turn
        printf("CPU's Turn\n");
        temp = rNum() + 1;
        cpu = opt[temp - 1];
        cout << "CPU Seleced " << cpu << endl;
    }
    if (playerScor > cpuScor)
    {
        cout << arr1 << " Wins!!!\n";
    }
    else if (playerScor < cpuScor)
    {
        cout << "CPU Wins!!!" << endl;
    }
    else
    {
        cout << "It's a Draw!!!" << endl;
    }

    return 0;
}
