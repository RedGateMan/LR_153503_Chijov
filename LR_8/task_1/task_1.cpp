#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int sizeOfArray;

struct student {
    char FIO[100]{};
    char adres[100]{};
    int math = 0;
    int OAIP = 0;
    int OKG = 0;
    double averageScore = (math + OAIP + OKG) / 3.;
};

void print(student *A);

void add(student *A);

void edit(student *A, int position);

void pop(student *A, int position);

void quickSort(student *array, int last);

void printOne(student *A, int position);

void search(student *A);

int task_1() {
    sizeOfArray = 1;
    auto *group = (student *) calloc(2, sizeof(typeof(student)));
    student first;
    strcpy(first.FIO, "Chyzhou Yahor Siarheevich");
    strcpy(first.adres, "Minsk");
    first.math = 7;
    first.OAIP = 10;
    first.OKG = 10;
    first.averageScore = (first.math + first.OAIP + first.OKG) / 3.;
    group[0] = first;
    while (true) {
        quickSort(group, sizeOfArray - 1);
        //cout << endl << endl << sizeOfArray << endl << endl;
        cout << "1) Print whole group." << endl//OK
             << "2) Add new student (until meet average score under 6.0)." << endl//OK
             << "3) Add new student(s)." << endl//OK
             << "4) Edit existing student information." << endl//OK
             << "5) Delete existing student." << endl//OK
             << "6) Find student(s)." << endl
             << "7) Exit." << endl;//OK
        int switcher;
        cin >> switcher;
        if (switcher == 1) {
            print(group);
        } else if (switcher == 2) {
            add(group);
            sizeOfArray++;
            (student *) realloc(group, sizeOfArray * sizeof(typeof(student)));
            while (group[sizeOfArray - 1].averageScore > 6) {
            }
        } else if (switcher == 3) {
            int additionalStudents;
            cout << "How much students do you want to add?\n";
            cin >> additionalStudents;
            while (additionalStudents--) {
                sizeOfArray++;
                (student *) realloc(group, sizeOfArray * sizeof(typeof(student)));
                add(group);
            }
        } else if (switcher == 4) {
            cout << "Choose number of student to edit (1-" << sizeOfArray << "): ";
            int position;
            cin >> position;
            edit(group, position - 1);
        } else if (switcher == 5) {
            cout << "Choose number of student to delete (1-" << sizeOfArray << "): ";
            int position;
            cin >> position;
            pop(group, position);
            sizeOfArray--;
            (student *) realloc(group, sizeOfArray * sizeof(typeof(student)));
        } else if (switcher == 6) {
            search(group);
        } else if (switcher == 7) {
            free(group);
            return 0;
        } else {
            cerr << "Incorrect input!\nChoose existing function!\n";
        }
    }
}

void print(student *A) {
    int temp = 0;
    while (temp < sizeOfArray) {
        printOne(A, temp);
        temp++;
    }
}

void add(student *A) {
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(A[sizeOfArray - 1].FIO, 100, ';');
    cout << "Enter adres (Press ';' to stop input): ";
    cin.getline(A[sizeOfArray - 1].adres, 100, ';');
    cout << "Enter Math score: ";
    cin >> A[sizeOfArray - 1].math;
    cout << "Enter OAIP score: ";
    cin >> A[sizeOfArray - 1].OAIP;
    cin.ignore();
    cout << "Enter OKG score: ";
    cin >> A[sizeOfArray - 1].OKG;
    cin.ignore();
    A[sizeOfArray - 1].averageScore = (A[sizeOfArray - 1].math + A[sizeOfArray - 1].OAIP + A[sizeOfArray - 1].OKG) / 3.;
}

void edit(student *A, int position) {
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(A[position].FIO, 100, ';');
    cin.ignore();
    Sleep(100);
    cout << "Enter adres (Press ';' to stop input): ";
    cin.getline(A[position].adres, 100, ';');
    cin.ignore();
    Sleep(100);
    cout << "Enter Math score: ";
    cin >> A[position].math;
    cin.ignore();
    cout << "Enter OAIP score: ";
    cin >> A[position].OAIP;
    cin.ignore();
    cout << "Enter OKG score: ";
    cin >> A[position].OKG;
    cin.ignore();
    A[position].averageScore = (A[position].math + A[position].OAIP + A[position].OKG) / 3.;
}

void pop(student *A, int position) {
    A[position].averageScore = 1e100;
    quickSort(A, sizeOfArray - 1);
}

void quickSort(student *array, int last) {
    int middle = last / 2;
    int i = 0, j = last;
    while (i <= j) {
        while (array[i].averageScore < array[middle].averageScore)
            i++;
        while (array[j].averageScore > array[middle].averageScore)
            j--;

        if (i <= j) {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    if (j > 0)
        quickSort(array, j);
    if (last > i)
        quickSort(array + i, last - i);
}

void printOne(student *A, int position) {
    cout << "Student №" << position + 1 << endl;
    cout << "FIO: " << A[position].FIO << endl;
    cout << "Adress: " << A[position].adres << endl;
    cout << "Math: " << A[position].math << endl;
    cout << "OAIP: " << A[position].OAIP << endl;
    cout << "OKG: " << A[position].OKG << endl;
    cout << "Average score: " << A[position].averageScore << endl << endl;
}

void search(student *A) {
    cout << "1) Search by FIO." << endl
         << "2) Search by Adres" << endl
         << "3) Search by Math score." << endl
         << "4) Search by OAIP score." << endl
         << "5) Search by OKG score." << endl
         << "6) Search by Average score." << endl;
    int switcher;
    cin >> switcher;
    if (switcher == 1) {
        cout << "Enter FIO (Press ';' to stop input): ";
        char FIO[100];
        cin.getline(FIO, 100, ';');
        cin.ignore();
        for (int i = 0; i < sizeOfArray; i++) {
            if (strcmp(FIO, A[i].FIO)) printOne(A, i);

        }
    } else if (switcher == 2) {
        cout << "Enter Adres (Press ';' to stop input): ";
        char adres[100];
        cin.getline(adres, 100, ';');
        cin.ignore();
        for (int i = 0; i < sizeOfArray; i++) {
            if (strcmp(adres, A[i].adres)) printOne(A, i);
        }
    } else if (switcher == 3) {
        cout << "Enter Math score: ";
        int math;
        cin >> math;
        cout << "1) Equal." << endl
             << "2) Over" << endl
             << "3) Under." << endl;
        int additionalSwitcher;
        cin >> additionalSwitcher;
        if (additionalSwitcher == 1) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (math == A[i].math) printOne(A, i);
            }
        } else if (additionalSwitcher == 2) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (math > A[i].math) printOne(A, i);
            }
        } else if (additionalSwitcher == 3) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (math < A[i].math) printOne(A, i);
            }
        } else {
            cerr << "Incorrect input!\nChoose existing function!\n";
        }
    } else if (switcher == 4) {
        cout << "Enter Math score: ";
        int OAIP;
        cin >> OAIP;
        cout << "1) Equal." << endl
             << "2) Over" << endl
             << "3) Under." << endl;
        int additionalSwitcher;
        cin >> additionalSwitcher;
        if (additionalSwitcher == 1) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (OAIP == A[i].OAIP) printOne(A, i);
            }
        } else if (additionalSwitcher == 2) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (OAIP > A[i].OAIP) printOne(A, i);
            }
        } else if (additionalSwitcher == 3) {
            for (int i = 0; i < sizeOfArray; i++) {
                if (OAIP < A[i].OAIP) printOne(A, i);
            }
        } else if (switcher == 5) {
            cout << "Enter Average score: ";
            int OKG;
            cin >> OKG;
            cout << "1) Equal." << endl
                 << "2) Over" << endl
                 << "3) Under." << endl;
            int additionalSwitcher;
            cin >> additionalSwitcher;
            if (additionalSwitcher == 1) {
                for (int i = 0; i < sizeOfArray; i++) {
                    if (OKG == A[i].OKG) printOne(A, i);
                }
            } else if (additionalSwitcher == 2) {
                for (int i = 0; i < sizeOfArray; i++) {
                    if (OKG > A[i].OKG) printOne(A, i);
                }
            } else if (additionalSwitcher == 3) {
                for (int i = 0; i < sizeOfArray; i++) {
                    if (OKG < A[i].OKG) printOne(A, i);
                }
            } else if (switcher == 6) {
                cout << "Enter Average score: ";
                int averageScore;
                cin >> averageScore;
                cout << "1) Equal." << endl
                     << "2) Over" << endl
                     << "3) Under." << endl;
                int additionalSwitcher;
                cin >> additionalSwitcher;
                if (additionalSwitcher == 1) {
                    for (int i = 0; i < sizeOfArray; i++) {
                        if (averageScore == A[i].averageScore) printOne(A, i);
                    }
                } else if (additionalSwitcher == 2) {
                    for (int i = 0; i < sizeOfArray; i++) {
                        if (averageScore > A[i].averageScore) printOne(A, i);
                    }
                } else if (additionalSwitcher == 3) {
                    for (int i = 0; i < sizeOfArray; i++) {
                        if (averageScore < A[i].averageScore) printOne(A, i);
                    }
                } else {
                    cerr << "Incorrect input!\nChoose existing function!\n";
                    return;
                }
            }
        }
    }
}

/*
123;
 123;
 123
 123
 123
 * */