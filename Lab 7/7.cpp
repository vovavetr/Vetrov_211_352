#include <iostream>
#include <ctime>

using namespace std;

struct people {
    string surname;
    string name;
    int age = 0;
};

bool modeQuicksortComparison(people& z, people& x, string mode = "") {
    if (mode == "surname") {
        return z.surname < x.surname;
    }
    else if (mode == "name") {
        return z.name < x.name;
    }
    else if (mode == "age") {
        return z.age < x.age;
    }
    return false;
}

template <typename T>
bool modeQuicksortComparison(T z, T x, string mode = "") {
    
    if (mode != "") {
        return false;
    }
    return z < x;
}

template <typename T>
void swapPlaces(T& z, T& x) {
    T tt = z;
    z = x;
    x = tt;
}

template <typename T>
void quicksort(T* arr, int max, string mode = "") {
    T mid;

    int first = 0;
    int last = max - 1;
    mid = arr[max / 2];

    while (last >= first) {
        while (modeQuicksortComparison(arr[first], mid, mode)) {
            first++;
        }

        while (modeQuicksortComparison(mid, arr[last], mode)) {
            last--;
        }

        if (last >= first) {
            swapPlaces(arr[last], arr[first]);

            first++;
            last--;
        }
    }

    if (last > 0) {
        quicksort(arr, last + 1, mode);
    }

    if (first < max) {
        quicksort(&arr[first], max - first, mode);
    }
}

template <typename T>
void print(T* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

ostream& operator<<(ostream& o, const people& people) {
    return o << people.surname << " " << people.name << " " << people.age << endl;
}

int getRandomNumber(int min, int maxim) {

    return min + rand() % (maxim - min + 1);
}

double getRandomNumberDouble(double fMin, double fMax) {
    return fMin + (double)rand() / RAND_MAX * (fMax - fMin);
}

int main() {
    string sortMode;
    int peopleSize;
    srand(time(NULL));

    cout << "People Size: " << endl;
    cin >> peopleSize;

    people* peopleArr = new people[peopleSize];

    cout << "Item (surname name age): " << endl;
    for (int i = 0; i < peopleSize; i++) {
        cin >> peopleArr[i].surname >> peopleArr[i].name >> peopleArr[i].age;
    }
    cout << endl;

    while (true) {
        cout << "Sort surname, name or age" << endl;
        cout << "Break: break" << endl;

        cin >> sortMode;

        if (sortMode == "break") {
            break;
        }

        cout << "No sort: " << endl;
        print(peopleArr, peopleSize);
        cout << endl;

        quicksort(peopleArr, peopleSize, sortMode);

        cout << "Sort: " << endl;
        print(peopleArr, peopleSize);
        cout << endl;
    }

    delete[] peopleArr;

    int arrSize;

    cout << "Arr size: " << endl;
    cin >> arrSize;

    int* intArr = new int[arrSize];
    char* chrArr = new char[arrSize];
    double* doubleArr = new double[arrSize];

    for (int i = 0; i < arrSize; i++) {
        intArr[i] = getRandomNumber(0, 255);
        chrArr[i] = char(getRandomNumber(33, 126));
        doubleArr[i] = getRandomNumberDouble(0, 255.0);
    }

    cout << "No sort: " << endl;
    cout << "Int: ";
    print(intArr, arrSize);

    cout << "Char: ";
    print(chrArr, arrSize);

    cout << "Double: ";
    print(doubleArr, arrSize);

    quicksort(intArr, arrSize);
    quicksort(chrArr, arrSize);
    quicksort(doubleArr, arrSize);
    cout << endl;

    cout << "Sort: " << endl;
    cout << "Int: ";
    print(intArr, arrSize);

    cout << "Char: ";
    print(chrArr, arrSize);

    cout << "Double: ";
    print(doubleArr, arrSize);

        delete[] intArr;
        delete[] chrArr;
        delete[] doubleArr;
}