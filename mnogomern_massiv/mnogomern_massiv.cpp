#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print(string word) {
    cout << word;
}

int main() {
    setlocale(LC_ALL, "ru");
    
    const int size = 12;
    int arr[size];
    srand(time(0));
    arr[0] = rand() % 100 +  10;
   /* int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        
        cout << arr[i] << " ";
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];


    }
    cout << "\n max digit: " << max;
    cout << "\n min digit: " << min;*/
   
    // 2
    /*
    int sum = 0, a;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << "\nВведите пороговое значение: ";
    cin >> a;

    for (int i = 0; i < size; i++) {
        if (arr[i] < a) {
            sum += arr[i];
        }
    }

    cout << "Сумма элементов массива, меньших " << a << ": " << sum << endl;
    */

    //3

    /*for (int i = 0; i < size; i++)
    {
        cout << "введите прибыль за " << i + 1 << " месяц: ";
        cin >> arr[i];
    }
    int startMonth, endMonth;
    cout << "Введите начальный месяц: ";
    cin >> startMonth;
    cout << "Введите конечный месяц: ";
    cin >> endMonth;

    int maxProfit = arr[startMonth - 1];
    int minProfit = arr[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    for (int i = startMonth; i <= endMonth; i++) {
        if (arr[i - 1] > maxProfit) {
            maxProfit = arr[i - 1];
            maxMonth = i;
        }
        if (arr[i - 1] < minProfit) {
            minProfit = arr[i - 1];
            minMonth = i;
        }
    }
    cout << "Месяц с максимальной прибылью: " << maxMonth << endl;
    cout << "Максимальная прибыль: " << maxProfit << endl;
    cout << "Месяц с минимальной прибылью: " << minMonth << endl;
    cout << "Минимальная прибыль: " << minProfit << endl;
    */

    //4

    /*for (int i = 0; i < size; ++i) {
        arr[i] = (double)rand() / RAND_MAX * 20 - 10; // Числа от -10 до 10
    }

    // Вывод массива
    cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 1. Сумма отрицательных элементов
    double sumNeg = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            sumNeg += arr[i];
        }
    }
    cout << "Сумма отрицательных элементов: " << sumNeg << endl;

    // 2. Произведение элементов между min и max
    double minval = arr[0];
    double maxval = arr[0];
    int minIn = 0;
    int maxIn = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minval) {
            minval = arr[i];
            minIn = i;
        }
        if (arr[i] > maxval) {
            maxval = arr[i];
            maxIn = i;
        }
    }

    double prodMinMax = 1;
    if (minIn < maxIn) {
        for (int i = minIn + 1; i < maxIn; ++i) {
            prodMinMax *= arr[i];
        }
    }
    else {
        for (int i = maxIn + 1; i < minIn; ++i) {
            prodMinMax *= arr[i];
        }
    }
    cout << "Произведение элементов между min и max: " << prodMinMax << endl;

    // 3. Произведение элементов с четными номерами
    double prodEven = 1;
    for (int i = 0; i < size; i += 2) {
        prodEven *= arr[i];
    }
    cout << "Произведение элементов с четными номерами: " << prodEven << endl;

    // 4. Сумма элементов между первым и последним отрицательными
    int fstind = -1;
    int lstind = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (fstind == -1) {
                fstind = i;
            }
            lstind = i;
        }
    }

    double sumBetweenNeg = 0;
    if (fstind != -1 && lstind != -1) {
        for (int i = fstind + 1; i < lstind; ++i) {
            sumBetweenNeg += arr[i];
        }
    }
    cout << "Сумма элементов между первым и последним отрицательными: " << sumBetweenNeg << endl;
    */


    return 0;
}