#include <iostream>
using namespace std;

int main()
{
    int time = 0;

    printf("秒数を入力してください\n> ");
    cin >> time;

    printf("%d:%02d秒", time / 60, time % 60);
}