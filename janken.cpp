#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time

using namespace std;

int main() {
    // 乱数の初期化
    srand(static_cast<unsigned int>(time(nullptr)));

    int human, com;

    // 手の文字列
    const char* hands[] = {"Rock", "Scissors", "Paper"};

    do {
        cout << "Select your hand (0...Rock, 1...Scissors, 2...Paper): ";
        cin >> human;

        // 入力チェック
        if(human < 0 || human > 2){
            cout << "Invalid input. Please enter 0, 1, or 2." << endl;
            continue;
        }

        // コンピュータの手を乱数で決定
        com = rand() % 3;

        // 手の表示
        cout << "Human..." << hands[human] << endl;
        cout << "Com..." << hands[com] << endl;

        // 勝敗判定
        if(human == com){
            cout << "Get even!!" << endl;
        } else if ((human == 0 && com == 1) || (human == 1 && com == 2) || (human == 2 && com == 0)) {
            cout << "Human wins!!" << endl;
            break;
        } else {
            cout << "Com wins!!" << endl;
            break;
        }

    } while(true);

    return 0;
}
