#include <iostream>
#include <cstring>
#include <cstdio>
#include <fstream>

using namespace std;

int sizeOfArray2;

struct Employee {
    char FIO[80];
    int tableNumber;
    int workedHours;
    double hourRate;
    double salary = workedHours * hourRate * 0.88;
};


void print(Employee *company);

void consoleAdd(Employee *company);

Employee *setCompany();

void fileAdd(Employee *company);

void filePrint(Employee *company);

void edit(Employee *company, int position);

void pop(Employee *company, int position);

void quickSort(Employee *company, int last);

void printOne(Employee *company, int position);

void search(Employee *company);

int task_2() {
    //system("chcp 1251 > nul");
    sizeOfArray2 = 2;
    Employee *company = (Employee *) calloc(sizeOfArray2 + 1, sizeof(Employee));
    fileAdd(company); //Говно, залупа, пенис, хер, давалка, хуй, блядина, Головка, ШЛЮХА, жопа, член, еблан, петух, мудила, Рукоблуд, ссанина, очко, блядун
    //company = setCompany();
    string s;
    while (true) {
        quickSort(company, sizeOfArray2 - 1);
        cout << "1) Print whole company." << endl//OK
             << "2) Add new Employee (until meet hour rate under 0.5)." << endl//OK
             << "3) Add new Employee(s)." << endl//OK
             << "4) Edit existing Employee information." << endl//OK
             << "5) Delete existing Employee." << endl//OK
             << "6) Find Employee(s)." << endl//OK
             << "7) Exit." << endl;//OK
        char Choose;
        cin >> Choose;
        getline(cin, s);
        if (Choose == '1') {
            print(company);
        } else if (Choose == '2') {
            while (company[sizeOfArray2 - 1].hourRate > 0.5) {
                sizeOfArray2++;
                (Employee *) realloc(company, sizeOfArray2 * sizeof(typeof(Employee)));
                consoleAdd(company);
            }
        } else if (Choose == '3') {
            int additionalEmployees;
            cout << "How much Employees do you want to add?\n";
            cin >> additionalEmployees;
            while (additionalEmployees--) {
                sizeOfArray2++;
                (Employee *) realloc(company, sizeOfArray2 * sizeof(typeof(Employee)));
                consoleAdd(company);
            }
        } else if (Choose == '4') {
            cout << "Choose number of Employee to edit (1-" << sizeOfArray2 << "): ";
            int position;
            cin >> position;
            edit(company, position - 1);
        } else if (Choose == '5') {
            cout << "Choose number of Employee to delete (1-" << sizeOfArray2 << "): ";
            int position;
            cin >> position;
            pop(company, position);
            sizeOfArray2--;
            (Employee *) realloc(company, sizeOfArray2 * sizeof(typeof(Employee)));
        } else if (Choose == '6') {
            search(company);
        } else if (Choose == '7') {
            break;
        } else {
            cout << "Incorrect input!\nChoose existing function!\n";
        }
        for (int position = 0; position < sizeOfArray2 + 1; position++) {
            if (company[position].workedHours > 144)
                company[position].salary = 144 * company[position].hourRate * 0.88 +
                                           2 *
                                           (company[position].workedHours - 144) * company[position].hourRate *
                                           0.88;
            else company[position].salary = company[position].workedHours * company[position].hourRate * 0.88;
        }
    }
    print(company);
    filePrint(company);
    free(company);
    return 0;
}

void print(Employee *company) {
    int temp = 0;
    while (temp < sizeOfArray2) {
        printOne(company, temp);
        temp++;
    }
}

void fileAdd(Employee *company) {
    ifstream fin;
    fin.open("../input.txt", fstream::in | fstream::out | ofstream::app);
    for (int position = 0; position < sizeOfArray2 + 1; position++) {
        int j = 0;
        while (fin >> company[position].FIO[j] && company[position].FIO[j] != ';') {
            j++;
        }
        fin >> company[position].tableNumber;
        fin >> company[position].workedHours;
        fin >> company[position].hourRate;
        if (company[position].workedHours > 144)
            company[position].salary = company[position].workedHours * company[position].hourRate * 0.88 +
                                       2 *
                                       (company[position].workedHours - 144) * company[position].hourRate *
                                       0.88;
        else company[position].salary = company[position].workedHours * company[position].hourRate * 0.88;
    }
    // fin.read((char *) &company[position], sizeof(typeof(Employee)));
    fin.close();
}

void filePrint(Employee *company) {
    ofstream fout;
    int position = 0;
    fout.open("E:/LR's/LR_8/output.txt");
    while (position < sizeOfArray2) {
        fout << "FIO: " << company[position].FIO << endl;
        fout << "Table number: " << company[position].tableNumber << endl;
        fout << "Worked hours: " << company[position].workedHours << endl;
        fout << "Hour rate: " << company[position].hourRate << endl;
        fout << "Salary: " << company[position].salary << endl;
        fout << '\n';
        //fout.write((char *) &(company[position]), sizeof(typeof(Employee)));
        position++;
        fout.clear();
    }
    fout.close();
}

void consoleAdd(Employee *company) {
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(company[sizeOfArray2 - 1].FIO, 80, ';');
    cout << "Enter table number: ";
    cin >> company[sizeOfArray2 - 1].tableNumber;
    cout << "Enter worked hours: ";
    cin >> company[sizeOfArray2 - 1].workedHours;
    cout << "Enter hour rate: ";
    cin >> company[sizeOfArray2 - 1].hourRate;
}

void edit(Employee *company, int position) {
    cout << "Enter FIO (Press ';' to stop input): ";
    cin.getline(company[position].FIO, 80, ';');
    cin.ignore();
    cout << "Enter table number: ";
    cin >> company[position].tableNumber;
    cin.ignore();
    cout << "Enter worked hours: ";
    cin >> company[position].workedHours;
    cin.ignore();
    cout << "Enter hour rate: ";
    cin >> company[position].hourRate;
    cin.ignore();
}

void pop(Employee *company, int position) {
    company[position].tableNumber = -1;
    quickSort(company, sizeOfArray2 - 1);
}

// тут что-то не так
void quickSort(Employee *company, int last) {
    int middle = last / 2;
    int i = 0, j = last;
    while (i <= j) {
        while (company[i].tableNumber < company[middle].tableNumber)
            i++;
        while (company[j].tableNumber > company[middle].tableNumber)
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

void printOne(Employee *company, int position) {
    cout << "FIO: " << company[position].FIO << endl;
    cout << "Table number: " << company[position].tableNumber << endl;
    cout << "Worked hours: " << company[position].workedHours << endl;
    cout << "Hour rate: " << company[position].hourRate << endl;
    cout << "Salary: " << company[position].salary << endl;
    cout << '\n';

}

// здесб говно
void search(Employee *company) {
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
        for (int i = 0; i < sizeOfArray2; i++) {
            if (strcmp(FIO, company[i].FIO)) printOne(company, i);

        }
    } else if (Choose == '2') {
        cout << "Enter Table Number";
        int table;
        for (int i = 0; i < sizeOfArray2; i++) {
            if (table == company[i].tableNumber) printOne(company, i);
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
            for (int i = 0; i < sizeOfArray2; i++) {
                if (hours == company[i].workedHours) printOne(company, i);
            }
        } else if (additionalChoose == '2') {
            for (int i = 0; i < sizeOfArray2; i++) {
                if (hours > company[i].workedHours) printOne(company, i);
            }
        } else if (additionalChoose == '3') {
            for (int i = 0; i < sizeOfArray2; i++) {
                if (hours < company[i].workedHours) printOne(company, i);
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
            for (int i = 0; i < sizeOfArray2; i++) {
                if (rate == company[i].hourRate) printOne(company, i);
            }
        } else if (additionalChoose == '2') {
            for (int i = 0; i < sizeOfArray2; i++) {
                if (rate > company[i].hourRate) printOne(company, i);
            }
        } else if (additionalChoose == '3') {
            for (int i = 0; i < sizeOfArray2; i++) {
                if (rate < company[i].hourRate) printOne(company, i);
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
                for (int i = 0; i < sizeOfArray2; i++) {
                    if (salary == company[i].salary) printOne(company, i);
                }
            } else if (additionalChoose == '2') {
                for (int i = 0; i < sizeOfArray2; i++) {
                    if (salary > company[i].salary) printOne(company, i);
                }
            } else if (additionalChoose == '3') {
                for (int i = 0; i < sizeOfArray2; i++) {
                    if (salary < company[i].salary) printOne(company, i);
                }
            } else {
                cout << "Incorrect input!\nChoose existing function!\n";
                return;
            }
        }
    }
}

/*
Я регулярно захожу сдать лабы в 308-5, и каждый раз спрашиваю, примет ли Вадим их.
Каждый раз он мне отвечает, нет. Я спрашивал уже раз 150 и 150 раз Вадим мне ответил нет.
А я каждый раз с неизменной интонацией спрашиваю:
— Лабы примете?
— Нет.
— Есть возможность лабы сдать?
— Лабы сегодня не принимаю.
— Проверите лабы, я сделал?
— Нет, не сегодня.
— Я бы хотел сдать лабу, какие критерии вообще?
— Извините, не приму, критерии все в лабе описаны.
И ведь Вадим, зараза, знает меня идеально в лицо, знает, что я спрошу и знает, что он мне ответит.
Но ещё ни разу ни один из нас ни жестом, ни словом не показал, что каждый из нас знает сценарий.
Бывает, Вадим стоит у входа, когда я захожу в аудиторию, тогда я подсматриваю за ним с места, он равнодушно заходит, садится на стул и начинает пару:
— Что вы хотели?
— Сдать лабу.
— У вас ошибка, не приму
— Жаль.
Иногда он общается с другим студентом, тогда, стоя рядом, я терпеливо жду, когда они закончат:
— А допуск поставите?
— Нет, сначала сдайте лабы.
Иногда он просто скучает за столом, когда в аудитории никого нет, и только я расхаживаю вокруг.
Конечно, он знает, что будет дальше, но не подаёт виду и равнодушно открывает «Успеваемость 2021.
— Что–то я допуск не вижу, не можете его поставить?
— Нет, не могу, мы ими не торгуем.
Это очень суровое, по–настоящему мужское противостояние, исход которого неясен.
Очевидно, что каждая сторона рассчитывает на победу. Впрочем, я уже согласен на пятерку.
*/