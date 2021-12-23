#include <iostream>
#include <string>

using namespace std;

void codeReverse(string s) {
    for (int i = 1; s[i] == '1' || s[i] == '0' || s[i] == ','; i++) {
        if (s[i] == '0') s[i] = '1';
        else if (s[i] == '1') s[i] = '0';
    }
}


int task_3() {
    string firstNumber, secondNumber, thirdNumber = "00000000";
    cin >> firstNumber >> secondNumber;
    codeReverse(firstNumber);
    codeReverse(secondNumber);
    bool fl = false, biggest;
    for (int i = 1; i < 8; i++) {
        if (firstNumber[i] != secondNumber[i]) {
            fl = true;
            if (firstNumber[i] == '1') {
                thirdNumber[0] = firstNumber[0];
                biggest = 0;
                break;
            } else {
                thirdNumber[0] = secondNumber[0];
                biggest = 1;
                break;
            }
        }
    }
    if (!fl && firstNumber == secondNumber) thirdNumber[0] = firstNumber[0];
    //plus
    if ((firstNumber[0] == '0' && secondNumber[0] == '0') || (firstNumber[0] == '1' && secondNumber[0] == '1')) { //plus
        for (int i = 7; i >= 1; i--) {
            if ((firstNumber[i] == '1' && secondNumber[i] == '0') ||
                (firstNumber[i] == '0' && secondNumber[i] == '1'))
                thirdNumber[i] = '1';
            else if (firstNumber[i] == '1' && secondNumber[i] == '1' && i == 7) thirdNumber[i - 1] = '1';
            else if (firstNumber[i] == '1' && secondNumber[i] == '1')thirdNumber[i - 1] = '1';
        }
    } else {//minus
        for (int i = 7; i >= 1; i--) {
            if (!biggest) {
                if (firstNumber[i] < secondNumber[i]) {
                    thirdNumber[i] = '1';
                    for (int j = i - 1; j >= 1; j--) {
                        if (firstNumber[j] >= secondNumber[j] && firstNumber[j] == '1') {
                            firstNumber[j] = '0';
                            for (int k = i - 1; k >= j + 1; k--) {
                                firstNumber[k] = '1';
                                thirdNumber[k] = '0';
                            }
                            break;
                        } else {
                            thirdNumber[j] = '1';
                        }
                    }
                } else if (firstNumber[i] != secondNumber[i]) {
                    thirdNumber[i] = '1';
                } else {
                    thirdNumber[i] = '0';
                }
            }
        }
    }
    codeReverse(thirdNumber);
    cout << thirdNumber << endl;
    return 0;
}