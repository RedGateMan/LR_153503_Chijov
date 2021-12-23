#include <iostream>
#include "E:\LR's\LR_7\functions.h"
#include <cmath>
#include <algorithm>

#define ll long long

using namespace std;

int fourteenToDec(string st)
{
    int i,s,k,p;
    s = 0;
    p = st.length()-1;
    for (i = 0; st[i] != '\0'; i++)
    {
        switch (toupper(st[i]))
        {
            case 'A': k=10; break;
            case 'B': k=11; break;
            case 'C': k=12; break;
            case 'D': k=13; break;
            case '1': k=1; break;
            case '2': k=2; break;
            case '3': k=3; break;
            case '4': k=4; break;
            case '5': k=5; break;
            case '6': k=6; break;
            case '7': k=7; break;
            case '8': k=8; break;
            case '9': k=9; break;
            case '0': k=0; break;
        }
        s=s+k*pow(14,p);
        p--;
    }
    return s;
}

int task_1() {
    cout << "Enter your number in 14's system of counting: ";
    string fourteen;
    cin >> fourteen;
    cout << "1) Without array\n2) Using array\n";
    int switcher;
    switcher = getInt(1,2);
    switch(switcher){
        case 1: {
            ll dec = fourteenToDec(fourteen);
            ll counter = 0;
            while(true){
                if(dec < pow(6,counter)){
                    break;
                }
                counter++;
            }
            ll temp = 0;
            ll ans = 0;
            while(temp != counter){
                ans+=dec%6*pow(10,temp);
                dec/=6;
                temp++;
            }
            cout << ans;
            break;
        }
        case 2: {
            ll dec = fourteenToDec(fourteen);
            ll counter = 0;
            while(true){
                if(dec < pow(6,counter)){
                    break;
                }
                counter++;
            }
            ll temp = counter;
            int ans[counter];
            while(counter){
                ans[counter] = dec%6;
                dec/=6;
                counter--;
            }
            for(int i = 1; i <=temp;i++){
                cout << ans[i];
            }
            break;
        }
        default:
            break;
    }
    return 0;
}
