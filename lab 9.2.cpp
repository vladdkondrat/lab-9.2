#include <iostream>
#include <cmath>

using namespace std;

// Макрос для знаходження абсолютного значення
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Макроси для обчислення мінімуму та максимуму
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Макрос для піднесення до степеня 2
#define POW2(x) ((x) * (x))

// Макрос для піднесення до степеня 3
#define POW3(x) ((x) * (x) * (x))

// Функція обчислення w
double calculate_w(double x, double y, double z) {
    double w;

    if (z > 1 && z < 3) {
        // Для 1 < z < 3
        double sum = ABS(x) + ABS(y) + ABS(z);
        double cube = POW3(x);
        w = MIN(sum, cube); // Мінімум між sum і cube
    }
    else if (z > 3) {
        // Для z > 3
        double linear = 2 * x + y;
        double square = POW2(2 * y - z);
        w = MAX(linear, square); // Максимум між linear і square
    }
    else {
        // Якщо умова не виконується
        w = 0;
    }

    return w;
}

// Функція для виведення результату
void print_result(double w) {
    cout << "w = " << w << std::endl;
}

int main() {
    double x, y, z;

    // Введення значень x, y, z
   cout << "Enter x, y, z: ";
   cin >> x >> y >> z;

    // Обчислення w
    double w = calculate_w(x, y, z);

    // Виведення результату
    print_result(w);

    return 0;
}
