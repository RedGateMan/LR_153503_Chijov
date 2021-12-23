#include <iostream>
#include <string>
#include "E:\LR's\LR_7\functions.h"

using namespace std;

int task_2() {
    string s;
    cin >> s;
    int max = -1000;
    if (s[0] == '1') {
        for (int i = 1; i < 8; i++) {
            if (s[i] == '1') s[i] = '0';
            else if (s[i] == '0') s[i] = '1';
            if(s[i] == '0' && i > max){
                max = i;
            }
        }
        if (s[7] == '0') s[7] = '1';
        else if (s[7] == '1') {
            s[max] = '1';
            for(int i = max+1; i < 8; i++){
                s[i] = '0';
            }
        }
    }
    cout << s;
    return 0;
}