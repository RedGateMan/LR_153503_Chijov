#include <iostream>
#include <cstring>
#include <cstdio>
#include <fstream>

using namespace std;

int sizeOfArray3;

class Employee1 {
private:
    char FIO[80];
    int tableNumber;
    int workedHours;
    double hourRate;
    double salary = workedHours * hourRate * 0.88;
public:
    void setFIO(char *FIO) {
        for (int i = 0; i < 100 & FIO[i] != ';'; i++) {
            this->FIO[i] = FIO[i];
        }
    }

    void setTableNumber(int tableNumber) { this->tableNumber = tableNumber; }

    void setWorkedHours(int workedHours) { this->workedHours = workedHours; }

    void setHourRate(double hourRate) { this->hourRate = hourRate; }

    void setSalary(int salary) { this->salary = salary; }

    char *getFIO() { return this->FIO; }

    int getTableNumber() { return this->tableNumber; }

    int getWorkedHours() { return this->workedHours; }

    double getHourRate() { return this->hourRate; }

    double getSalary() { return this->salary; }
};


void print(Employee1 *company);

void consoleAdd(Employee1 *company);

Employee1 *setCompany();

void fileAdd(Employee1 *company);

void filePrint(Employee1 *company);

void edit(Employee1 *company, int position);

void pop(Employee1 *company, int position);

void quickSort(Employee1 *company, int last);

void printOne(Employee1 *company, int position);

void search(Employee1 *company);

int task_3() {
    //system("chcp 1251 > nul");
    sizeOfArray3 = 2;
    Employee1 *company = (Employee1 *) calloc(sizeOfArray3 + 1, sizeof(Employee1));
    fileAdd(company); //Говно, залупа, пенис, хер, давалка, хуй, блядина, Головка, ШЛЮХА, жопа, член, еблан, петух, мудила, Рукоблуд, ссанина, очко, блядун
    //company = setCompany();
    string s;
    while (true) {
        quickSort(company, sizeOfArray3 - 1);
        cout << "1) Print whole company." << endl//OK
             << "2) Add new Employee1 (until meet hour rate under 0.5)." << endl//OK
             << "3) Add new Employee1(s)." << endl//OK
             << "4) Edit existing Employee1 information." << endl//OK
             << "5) Delete existing Employee1." << endl//OK
             << "6) Find Employee1(s)." << endl//OK
             << "7) Exit." << endl;//OK
        char Choose;
        cin >> Choose;
        getline(cin, s);
        if (Choose == '1') {
            print(company);
        } else if (Choose == '2') {
            while (company[sizeOfArray3 - 1].getHourRate() > 0.5) {
                sizeOfArray3++;
                (Employee1 *) realloc(company, sizeOfArray3 * sizeof(typeof(Employee1)));
                consoleAdd(company);
            }
        } else if (Choose == '3') {
            int additionalEmployee1s;
            cout << "How much Employee1s do you want to add?\n";
            cin >> additionalEmployee1s;
            while (additionalEmployee1s--) {
                sizeOfArray3++;
                (Employee1 *) realloc(company, sizeOfArray3 * sizeof(typeof(Employee1)));
                consoleAdd(company);
            }
        } else if (Choose == '4') {
            cout << "Choose number of Employee1 to edit (1-" << sizeOfArray3 << "): ";
            int position;
            cin >> position;
            edit(company, position - 1);
        } else if (Choose == '5') {
            cout << "Choose number of Employee1 to delete (1-" << sizeOfArray3 << "): ";
            int position;
            cin >> position;
            pop(company, position);
            sizeOfArray3--;
            (Employee1 *) realloc(company, sizeOfArray3 * sizeof(typeof(Employee1)));
        } else if (Choose == '6') {
            search(company);
        } else if (Choose == '7') {
            break;
        } else {
            cout << "Incorrect input!\nChoose existing function!\n";
        }
        for (int position = 0; position < sizeOfArray3 + 1; position++) {
            if (company[position].getWorkedHours() > 144)
                company[position].setSalary(144 * company[position].getHourRate() * 0.88 +
                                            2 *
                                            (company[position].getWorkedHours() - 144) *
                                            company[position].getHourRate() *
                                            0.88);
            else
                company[position].setSalary(
                        company[position].getWorkedHours() * company[position].getHourRate() * 0.88);
        }
    }
    print(company);
    filePrint(company);
    free(company);
    return 0;
}

void print(Employee1 *company) {
    int temp = 0;
    while (temp < sizeOfArray3) {
        printOne(company, temp);
        temp++;
    }
}

void fileAdd(Employee1 *company) {
    char FIO[100];
    int tableNumber, workedHours;
    double hourRate;
    ifstream fin;
    fin.open("../input.txt", fstream::in | fstream::out | ofstream::app);
    for (int position = 0; position < sizeOfArray3 + 1; position++) {
        int j = 0;
        while (fin >> FIO[j] && FIO[j] != ';') {
            j++;
        }
        fin >> tableNumber;
        fin >> workedHours;
        fin >> hourRate;
        company[position].setFIO(FIO);
        company[position].setTableNumber(tableNumber);
        company[position].setWorkedHours(workedHours);
        company[position].setHourRate(hourRate);
        if (company[position].getWorkedHours() > 144) {
            company[position].setSalary(company[position].getWorkedHours() * company[position].getHourRate() * 0.88 +
                                        2 *
                                        (company[position].getWorkedHours() - 144) * company[position].getHourRate() *
                                        0.88);
        } else company[position].setSalary(company[position].getWorkedHours() * company[position].getHourRate() * 0.88);
    }
    // fin.read((char *) &company[position], sizeof(typeof(Employee1)));
    fin.close();
}

void filePrint(Employee1 *company) {
    ofstream fout;
    int position = 0;
    fout.open("E:/LR's/LR_8/output.txt");
    while (position < sizeOfArray3) {
        fout << "FIO: " << company[position].getFIO() << endl;
        fout << "Table number: " << company[position].getTableNumber() << endl;
        fout << "Worked hours: " << company[position].getWorkedHours() << endl;
        fout << "Hour rate: " << company[position].getHourRate() << endl;
        fout << "Salary: " << company[position].getSalary() << endl;
        fout << '\n';
        //fout.write((char *) &(company[position]), sizeof(typeof(Employee1)));
        position++;
        fout.clear();
    }
    fout.close();
}

void consoleAdd(Employee1 *company) {
    char FIO[100];
    int tableNumber, workedHours;
    double hourRate;
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(FIO, 80, ';');
    company[sizeOfArray3 - 1].setFIO(FIO);
    cout << "Enter table number: ";
    cin >> tableNumber;
    company[sizeOfArray3 - 1].setTableNumber(tableNumber);
    cout << "Enter worked hours: ";
    cin >> workedHours;
    company[sizeOfArray3 - 1].setWorkedHours(workedHours);
    cout << "Enter hour rate: ";
    cin >> hourRate;
    company[sizeOfArray3 - 1].setHourRate(hourRate);
}

void edit(Employee1 *company, int position) {
    char FIO[100];
    int tableNumber, workedHours;
    double hourRate;
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(FIO, 80, ';');
    company[position].setFIO(FIO);
    cout << "Enter table number: ";
    cin >> tableNumber;
    company[position].setTableNumber(tableNumber);
    cout << "Enter worked hours: ";
    cin >> workedHours;
    company[position].setWorkedHours(workedHours);
    cout << "Enter hour rate: ";
    cin >> hourRate;
    company[position].setHourRate(hourRate);
}

void pop(Employee1 *company, int position) {
    company[position].setTableNumber(-1);
    quickSort(company, sizeOfArray3 - 1);
}

// тут что-то не так
void quickSort(Employee1 *company, int last) {
    int middle = last / 2;
    int i = 0, j = last;
    while (i <= j) {
        while (company[i].getTableNumber() < company[middle].getTableNumber())
            i++;
        while (company[j].getTableNumber() > company[middle].getTableNumber())
            j--;

        if (i <= j) {
            swap(company[i], company[j]);
            i++;
            j--;
        }
    }

    if (j > 0)
        quickSort(company, j);
    if (last > i)
        quickSort(company + i, last - i);
}

void printOne(Employee1 *company, int position) {
    cout << "FIO: " << company[position].getFIO() << endl;
    cout << "Table number: " << company[position].getTableNumber() << endl;
    cout << "Worked hours: " << company[position].getWorkedHours() << endl;
    cout << "Hour rate: " << company[position].getHourRate() << endl;
    cout << "Salary: " << company[position].getSalary() << endl;
    cout << '\n';

}

// здесб говно
void search(Employee1 *company) {
    cout << "1) Search by FIO." << endl
         << "2) Search by table number" << endl
         << "3) Search by worked hours." << endl
         << "4) Search by hour rate." << endl
         << "5) Search by salary." << endl;
    string s;
    int Choose;
    cin >> Choose;
    getline(cin, s);
    if (Choose == '1') {
        cout << "Enter FIO (Press ';' to stop input): ";
        char FIO[80];
        cin.getline(FIO, 80, ';');
        cin.ignore();
        for (int i = 0; i < sizeOfArray3; i++) {
            if (strcmp(FIO, company[i].getFIO())) printOne(company, i);

        }
    } else if (Choose == '2') {
        cout << "Enter Table Number";
        int table;
        for (int i = 0; i < sizeOfArray3; i++) {
            if (table == company[i].getTableNumber()) printOne(company, i);
        }
        //Robert Martin Clean Code
    } else if (Choose == '3') {
        cout << "Enter Worked Hours";
        int hours;
        cin >> hours;
        cout << "1) Equal." << endl
             << "2) Over" << endl
             << "3) Under." << endl;
        int additionalChoose;
        cin >> additionalChoose;
        getline(cin, s);
        if (additionalChoose == '1') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (hours == company[i].getWorkedHours()) printOne(company, i);
            }
        } else if (additionalChoose == '2') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (hours > company[i].getWorkedHours()) printOne(company, i);
            }
        } else if (additionalChoose == '3') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (hours < company[i].getWorkedHours()) printOne(company, i);
            }
        } else {
            cout << "Incorrect input!\nChoose existing function!\n";
        }
    } else if (Choose == '4') {
        cout << "Enter Hour Rate: ";
        int rate;
        cin >> rate;
        cout << "1) Equal." << endl
             << "2) Over" << endl
             << "3) Under." << endl;
        int additionalChoose;
        cin >> additionalChoose;
        getline(cin, s);
        if (additionalChoose == '1') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (rate == company[i].getHourRate()) printOne(company, i);
            }
        } else if (additionalChoose == '2') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (rate > company[i].getHourRate()) printOne(company, i);
            }
        } else if (additionalChoose == '3') {
            for (int i = 0; i < sizeOfArray3; i++) {
                if (rate < company[i].getHourRate()) printOne(company, i);
            }
        } else if (Choose == '5') {
            cout << "Enter salary: ";
            int salary;
            cin >> salary;
            cout << "1) Equal." << endl
                 << "2) Over" << endl
                 << "3) Under." << endl;
            int additionalChoose;
            cin >> additionalChoose;
            getline(cin, s);
            if (additionalChoose == '1') {
                for (int i = 0; i < sizeOfArray3; i++) {
                    if (salary == company[i].getSalary()) printOne(company, i);
                }
            } else if (additionalChoose == '2') {
                for (int i = 0; i < sizeOfArray3; i++) {
                    if (salary > company[i].getSalary()) printOne(company, i);
                }
            } else if (additionalChoose == '3') {
                for (int i = 0; i < sizeOfArray3; i++) {
                    if (salary < company[i].getSalary()) printOne(company, i);
                }
            } else {
                cout << "Incorrect input!\nChoose existing function!\n";
                return;
            }
        }
    }
}
