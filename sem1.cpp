// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     a = 17;
//     b = 5;
//     cout << "a + b = " << a + b << endl;
//     cout << "a - b = " << a - b << endl;
//     cout << "a * b = " << a * b << endl;
//     cout << "a / b = " << a / b << endl;
//     cout << "a % b = " << a % b << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     double d1, d2;
//     d1 = 7.0;
//     d2 = 2.0;
//     cout << "вещественное деление d1 на d2 равно: " << d1 / d2 << endl;
//     cout << "целочисленное деление d1 на d2 равно: " << (int)7/(int)2 << endl;
//     if ((d1 / d2) >= ((int)7/(int)2) ) {
//         cout << d1 / d2 << " > " << (int)7/(int)2; 
//     }
//         else { 
//             cout << d1 / d2 << " < " << (int)7/(int)2;

//         }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int x;
//     x = 10;
//     x += 5;
//     cout << "x += 5: " << x << endl;
//     x -= 3;
//     cout << "x -= 3: " << x << endl;
//     x *= 2;
//     cout << "x *= 2: "  << x << endl;
//     x /= 4;
//     cout << "x /= 4: " << x << endl;
//     x %= 3;
//     cout << "x %= 3: " << x << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c, d;
//     a = b = 5;
//     c = ++a;
//     d = b++;
//     cout << "c = ++a = " << c << endl;
//     cout << "d = b++ = " << d;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     for (n = 10; n > 0; n --){
//         cout << n << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     a = 8;
//     b = 12;
//     c = 20;
//     cout << "(a < b): " << (a < b) << endl;
//     cout << "(a == c): " << (a == c) << endl;
//     cout << "(b * 2 >= c): " << (b * 2 >= c) << endl;
//     cout << "(c - a != b): " << (c - a != b) << endl;
//     cout << "(a + b <= c): " << (a + b <= c) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     a = 5;
//     b = 10;
//     c = 15;
//     cout << "(a < b) && (b < c): " << ((a < b) && (b < c)) << endl;
//     cout << "(a > b) || (b < c): " << ((a > b) || (b < c)) << endl;
//     cout << "!((a + b) == c): " << !((a + b) == c) << endl;
//     cout << "(a == 5) && (b != 10) || (c == 15): " << ((a == 5) && (b != 10) || (c == 15)) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Введите число a" << endl;
//     cin >> a;
//     cout << "Введите число b" << endl;
//     cin >> b;
//     if (a>b){
//         cout << "Максимальное число: " << a << endl;
//     } else {
//         cout << "Максимальное число: " <<  b << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int age;
//     string status;
//     age = 20;
//     if (age >= 18) {
//         status = "Cовершеннолетний";
//         cout << status << endl;
//     }
//         else {
//             status = "Несовершеннолетний";
//             cout << status << endl;
//         }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     c = (a = 5, b = 7, a + b);
//     cout << a << " "<< b << " " << c;
//     return 0;
// }

//11
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "sizeof(char): "<< sizeof(char) << endl;
//     cout << "sizeof(char16_t): "<< sizeof(char16_t) << endl;
//     cout << "sizeof(char32_t): "<< sizeof(char32_t) << endl;

//     cout << "sizeof(wchar_t): "<< sizeof(wchar_t) << endl;

//     cout << "sizeof(signed char): "<< sizeof(signed char) << endl;
//     cout << "sizeof(signed short int): "<< sizeof(signed short int) << endl;
//     cout << "sizeof(signed int): "<< sizeof(signed int) << endl;
//     cout << "sizeof(signed long int): "<< sizeof(signed long int) << endl;
//     cout << "sizeof(signed long long int): "<< sizeof(signed long long int) << endl;

//     cout << "sizeof(unsigned char): "<< sizeof(unsigned char) << endl;
//     cout << "sizeof(unsigned short int): "<< sizeof(unsigned short int) << endl;
//     cout << "sizeof(unsigned int): "<< sizeof(unsigned int) << endl;
//     cout << "sizeof(unsigned long int): "<< sizeof(unsigned long int) << endl;
//     cout << "sizeof(unsigned long long int): "<< sizeof(unsigned long long int) << endl;

//     cout << "sizeof(float): "<< sizeof(float) << endl;
//     cout << "sizeof(double): "<< sizeof(double) << endl;
//     cout << "sizeof(long double): "<< sizeof(long double) << endl;
//     return 0;
// }


// 12
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "int a, b" << endl;
//     cout <<"sizeof(a): " << sizeof(a) << endl;
//     cout << "sizeof(b): " << sizeof(b) << endl;
//     cout << "sizeof(a + b): " << sizeof(a + b) << endl;

//     double a1, b1;
//     cout << "double a1, b1" << endl;
//     cout << "sizeof(a1): "<< sizeof(a1) << endl;
//     cout << "sizeof(b1): "<< sizeof(b1) << endl;
//     cout << "sizeof(a1 + b1): " << sizeof(a1 + b1) << endl;

//     char a2, b2;
//     cout << "char a2, b2" << endl;
//     cout << "sizeof(a2): " << sizeof(a2) << endl;
//     cout << "sizeof(b2): "<< sizeof(b2) << endl;
//     cout << "sizeof(a2 + b2): " << sizeof(a2 + b2) << endl;

//     bool a3, b3;
//     cout << "bool a3, b3" << endl;
//     cout << "sizeof(a3): " << sizeof(a3) << endl;
//     cout << "sizeof(b3): " << sizeof(b3) << endl;
//     cout << "sizeof(a3 + b3): " << sizeof(a3 + b3) << endl;
//     return 0;
// }

// 13
// #include <iostream>
// using namespace std;
// int main() {
//     double pi;
//     int pi_int, pi_int2;
//     pi = 3.14159;
//     pi_int = (int)pi;
//     pi_int2 = int(pi);
//     cout << "(int)pi = " << pi_int << endl;
//     cout << "int(pi) = " << pi_int2 << endl;
//     return 0;
// }

//14
// #include <iostream>
// using namespace std;
// int main() {
//     float f;
//     f = 9.99;
//     cout << "float(f) = " << f << endl;
//     cout << "int(f) = " << int(f) << endl;
//     cout << "int(char(f)) = " << int(char(f)) << endl;
//     return 0;
// }

//15
// #include <iostream>
// using namespace std;
// int main() {
//     int var;
//     var = 42;
//     cout << "Значение var: " << var << endl;
//     cout << "Адрес var: " << &var << endl;
//     return 0;
// }


//16, объясните порядок вычислений
// #include <iostream>
// using namespace std;
// int main() {
//     int x, y, z;
//     x = 5;
//     y = 10;
//     z = 0;
//     z = (x += 3) * (y -= 2) + (++x) - (y--);
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     cout << "z = " << z << endl;
//     return 0;
// }

// 17
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c, result;
//     a = 2;
//     b = 3;
//     c = 4;
//     result = (a + (b * c)) - ((a / b) % c);
//     cout << " a + b * c - a / b % c = " << result << endl;
//     return 0;
// }

// 18
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     signed char sc = SCHAR_MAX;
//     short s = SHRT_MAX;
//     int i = INT_MAX;
//     long l = LONG_MAX;
//     long long ll = LLONG_MAX;

//     unsigned char uc = UCHAR_MAX;
//     unsigned short us = USHRT_MAX;
//     unsigned int ui = UINT_MAX;
//     unsigned long ul = ULONG_MAX;
//     unsigned long long ull = ULLONG_MAX;

//     cout << "signed char: " << (int)sc << endl;
//     cout << "short: " << s << endl;
//     cout << "int: " << i << endl;
//     cout << "long: " << l << endl;
//     cout << "long long: " << ll << endl;

//     cout << "unsigned char: " << (int)uc << endl;
//     cout << "unsigned short: " << us << endl;
//     cout << "unsigned int: " << ui << endl;
//     cout << "unsigned long: " << ul << endl;
//     cout << "unsigned long long: " << ull << endl;

//     return 0;

// }

//19
// #include <iostream>
// using namespace std;
// int main() {
//     float a; 
//     a = 1.0 / 3.0;
//     double b;
//     b = 1.0 / 3.0;
//     long double c;
//     c = 1.0 / 3.0;

//     cout << fixed;
//     cout.precision(15);

//     cout << "float: " << a << endl;
//     cout << "double: " << b << endl;
//     cout << "long double: " << c << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     char ch = 'A';
//     char16_t u16 = u'B';
//     char32_t u32 = U'C';
//     wchar_t w = L'D';
//     bool flag = true;
//     cout << boolalpha;
//     cout << "char: " << ch << endl;
//     cout << "char16_t: " << u16 << endl;
//     cout << "char32_t: " << u32 << endl;
//     cout << "wchar_t: " << w << endl;
//     cout << "bool: " << flag << endl;
//     cout << "Код A: " << (int)ch << endl;
//     cout << "Код B: " << (int)u16 << endl;
//     cout << "Код C: " << (int)u32 << endl;
//     cout << "Код D: " << (int)w << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     double b;
//     char c;

//     cout << "Введите целое число: ";
//     cin >> a;

//     cout << "Введите дробное число: ";
//     cin >> b;

//     cout << "Введите символ: ";
//     cin >> c;

//     int b_int = (int)b;
//     int c_int = (int)c;

//     cout << boolalpha;

//     cout << "Сумма: " << a + b_int << endl;
//     cout << "Разность: " << a - c_int << endl;
//     cout << "Сравнение: " << (a == b_int) << endl;
//     cout << "Логическое выражение: " << (a > 10 && c_int < 100) << endl;

//     cout << "Размер int: " << sizeof(a) << " байт" << endl;
//     cout << "Размер double: " << sizeof(b) << " байт" << endl;
//     cout << "Размер char: " << sizeof(c) << " байт" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int m, n, r;

//     cout << "Введите два числа m и n: ";
//     cin >> m >> n;

//     while (n != 0) {
//         r = m % n;
//         m = n;
//         n = r;
//     }

//     cout << "НОД = " << m << endl;

//     return 0;
// }


// #include <iostream>
// #include <string> // Подключаем библиотеку для работы со строками

// int main() {
//     int number;
//     std::cout << "Введите целое число: ";
//     std::cin >> number;

//     // Переводим число в строку текста (например, 121 станет "121")
//     std::string s = std::to_string(number);

//     // Переменная, которая будет хранить ответ (по умолчанию считаем, что это палиндром)
//     bool isPalindrome = true;

//     // Запускаем цикл от начала строки до её середины
//     for (int i = 0; i < s.length() / 2; i++) {
//         // Сравниваем символ с начала и соответствующий ему символ с конца
//         if (s[i] != s[s.length() - 1 - i]) {
//             isPalindrome = false; // Если нашли несовпадение, это не палиндром
//             break;                // Сразу выходим из цикла, дальше проверять нет смысла
//         }
//     }

//     // Выводим итоговый результат на экран
//     if (isPalindrome) {
//         std::cout << "Число является палиндромом." << std::endl;
//     } else {
//         std::cout << "Число не является палиндромом." << std::endl;
//     }

//     return 0;
// }






// семинар 4
// 1.1
// #include <iostream>
// using namespace std;
 
// int main() {
//     cout << " Числа от 1 до 100 (while):" << endl;
//     int i = 1;
//     while (i <= 100) {
//         cout << i << endl;
//         i++;
//     }
//     cout << " Числа от 1 до 100 (for):" << endl;
//     for (int k = 1; k <= 100; k++) {
//         cout << k << endl;
//     }
    
//     cout << " Числа от 11 до 33 (while):" << endl;
//     i = 11;
//     while (i <= 33) {
//         cout << i << endl;
//         i++;
//     }
//     cout << " Числа от 11 до 33 (for):" << endl;
//     for (int k = 11; k <= 33; k++) {
//         cout << k << endl;
//     }
 
//     cout << " Чётные числа от 0 до 100 (while):" << endl;
//     i = 0;
//     while (i <= 100) {
//         cout << i << endl;
//         i += 2;
//     }
//     cout << " Чётные числа от 0 до 100 (for):" << endl;
//     for (int k = 0; k <= 100; k += 2) {
//         cout << k << endl;
//     }
 
//     int sum = 0;
//     i = 1;
//     while (i <= 100) {
//         sum += i;
//         i++;
//     }
//     cout << " Сумма чисел от 1 до 100 (while): " << sum << endl;
 
//     sum = 0;
//     for (int k = 1; k <= 100; k++) {
//         sum += k;
//     }
//     cout << " Сумма чисел от 1 до 100 (for): " << sum << endl;
 
//     return 0;
// }


// 1.2
// #include <iostream>
// using namespace std;
 
// int main() {
//     cout << "Дюймы в сантиметры" << endl;
//     for (int inch = 1; inch <= 20; inch++) {
//         cout << inch << " дюйм = " << inch * 2.5 << " см" << endl;
//     }
 
//     double rate;
//     cout << "Введите курс евро:" << endl;
//     cin >> rate;
//     cout << "Евро в рубли" << endl;
//     for (int eur = 5; eur <= 25; eur++) {
//         cout << eur << " EUR = " << eur * rate << " руб" << endl;
//     }
 
//     return 0;
// }

// 1.3
// #include <iostream>
// using namespace std;
// int main() {
//     int sum = 0;
//     for (int i = 10; i <= 99; i++) {
//         sum += i;
//     }
//     cout << " Сумма двузначных чисел: " << sum << endl;
//     sum = 0;
//     int n = 1;
//     while (n <= 200) {
//         sum += n;
//         n += 2;
//     }
//     cout << " Сумма нечётных от 1 до 200: " << sum << endl;
 
//     sum = 0;
//     for (int i = 1; i <= 50; i++) {
//         if (i % 5 == 0 || i % 7 == 0) {
//             sum += i;
//         }
//     }
//     cout << " Сумма чисел, кратных 5 или 7: " << sum << endl;
 
//     cout << " Кратны 3 и не кратны 5:";
//     for (int i = 20; i <= 50; i++) {
//         if (i % 3 == 0 && i % 5 != 0) {
//             cout << " " << i;
//         }
//     }
//     cout << endl;
 
//     return 0;
// }

// 1.4
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Введите количество чисел N:" << endl;
//     cin >> n;
//     int negative = 0, positive = 0, zeros = 0;
//     cout << "Введите " << n << " чисел:" << endl;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         if (x < 0) {
//             negative++;
//         } else if (x > 0) {
//             positive++;
//         } else {
//             zeros++;
//         }
//     }
//     cout << "Отрицательных: " << negative << endl;
//     cout << "Положительных: " << positive << endl;
//     cout << "Нулей: " << zeros << endl;
 
//     int a[10];
//     cout << "Введите 10 чисел:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cin >> a[i];
//         if (a[i] > 15) {
//             a[i] = 15;
//         }
//     }
//     cout << "Результат:";
//     for (int i = 0; i < 10; i++) {
//         cout << " " << a[i];
//     }
//     cout << endl;
//     return 0;
// }

// 1.5
// #include <iostream>
// using namespace std;
 
// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};
//     int size = sizeof(numbers) / sizeof(numbers[0]);  
//     cout << "for с индексом: ";
//     for (int i = 0; i < size; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;
//     cout << "for с диапазоном: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

//2.1
// #include <iostream>
// using namespace std;
 
// int main() {
//     int n;
//     cout << "Введите количество элементов n:" << endl;
//     cin >> n;
//     int* a = new int[n];  
//     cout << "Введите " << n << " элементов:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     cout << "Массив:";
//     for (int i = 0; i < n; i++) {
//         cout << " " << a[i];
//     }
//     cout << endl;

//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//     }
//     cout << "Сумма: " << sum << endl;
//     cout << "Среднее арифметическое: " << (double)sum / n << endl;
 
//     int max = a[0], min = a[0];
//     for (int i = 1; i < n; i++) {
//         if (a[i] > max) max = a[i];
//         if (a[i] < min) min = a[i];
//     }
//     cout << "Максимум: " << max << ", минимум: " << min << endl;
//     delete[] a;  
//     double c[5];
//     cout << "Введите 5 элементов c1..c5:" << endl;
//     double sumSq = 0;
//     for (int i = 0; i < 5; i++) {
//         cin >> c[i];
//         sumSq += c[i] * c[i];
//     }
//     cout << "Сумма квадратов: " << sumSq << endl;
//     double d[7], A, B;
//     cout << "Введите 7 элементов c1..c7:" << endl;
//     for (int i = 0; i < 7; i++) {
//         cin >> d[i];
//     }
//     cout << "Введите границы A и B:" << endl;
//     cin >> A >> B;
//     int count = 0;
//     for (int i = 0; i < 7; i++) {
//         if (d[i] >= A && d[i] <= B) {
//             count++;
//         }
//     }
//     cout << "В промежутке [" << A << ", " << B << "] элементов: " << count << endl;
 
//     return 0;
// }


//2.2
// #include <iostream>
// using namespace std;
// int main() {
//     int r, c;
//     cout << "Введите число строк r и столбцов c:" << endl;
//     cin >> r >> c;
//     int** A = new int*[r];
//     int** B = new int*[r];
//     int** S = new int*[r];
//     for (int i = 0; i < r; i++) {
//         A[i] = new int[c];
//         B[i] = new int[c];
//         S[i] = new int[c];
//     }
//     cout << "Введите матрицу A (" << r << "x" << c << "):" << endl;
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> A[i][j];
 
//     cout << "Введите матрицу B (" << r << "x" << c << "):" << endl;
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> B[i][j];
 
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             S[i][j] = A[i][j] + B[i][j];
 
//     cout << "Матрица A:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) cout << A[i][j] << "\t";
//         cout << endl;
//     }
//     cout << "Матрица A + B:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) cout << S[i][j] << "\t";
//         cout << endl;
//     }
 
//     for (int i = 0; i < r; i++) {
//         delete[] A[i];
//         delete[] B[i];
//         delete[] S[i];
//     }
//     delete[] A;
//     delete[] B;
//     delete[] S;
//     return 0;}

// 2.3
// #include <iostream>
// using namespace std;
// int main() {
//     int test[2][3][2];
//     int value = 1;
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             for (int k = 0; k < 2; k++)
//                 test[i][j][k] = value++;
 
    
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             for (int k = 0; k < 2; k++)
//                 cout << "test[" << i << "][" << j << "][" << k << "]="
//                      << test[i][j][k] << endl;
 
//     return 0;
// }

// 3.1
// #include <iostream>
// using namespace std;
// int main() {
//     int var1 = 3, var2 = 24, var3 = 17;
//     cout << "Адрес var1: " << &var1 << endl;
//     cout << "Адрес var2: " << &var2 << endl;
//     cout << "Адрес var3: " << &var3 << endl;

//     int var = 7;
//     int* point_var = &var;
//     cout << "Значение var: " << var << endl;
//     cout << "Адрес var (&var): " << &var << endl;
//     cout << "Значение указателя point_var: " << point_var << endl;
//     cout << "Значение по адресу (*point_var): " << *point_var << endl;
 
//     *point_var = 16;
//     cout << "После *point_var = 16: var = " << var << endl;
 
//     return 0;
// }

//3.2
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     int* ptr = arr;
//     for (int i = 0; i < 5; i++) {
//         cout << "&arr[" << i << "] = " << &arr[i]
//              << ",  ptr + " << i << " = " << (ptr + i) << endl;
//     }
 
//     cout << "Введите 5 чисел:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> *(arr + i);
//     }
//     cout << "Массив:";
//     for (int i = 0; i < 5; i++) {
//         cout << " " << *(arr + i);
//     }
//     cout << endl;
 
//     char letters[2] = {'a', 'b'};
//     char* cptr = letters;
//     cout << "sizeof(int) = " << sizeof(int)
//          << ", sizeof(char) = " << sizeof(char) << endl;
//     cout << "int*:  ptr  = " << ptr << ", ptr + 1  = " << (ptr + 1) << endl;
//     cout << "char*: cptr = " << (void*)cptr << ", cptr + 1 = " << (void*)(cptr + 1) << endl;
//     cout << "Сдвиг int*  на 1: "
//          << (reinterpret_cast<char*>(ptr + 1) - reinterpret_cast<char*>(ptr)) << " байт" << endl;
//     cout << "Сдвиг char* на 1: "
//          << (reinterpret_cast<char*>(cptr + 1) - reinterpret_cast<char*>(cptr)) << " байт" << endl;
 
//     return 0;
// }

//3.3
// #include <iostream>
// using namespace std;
 
// int main() {
//     int var = 5;
//     int* point_var = &var;   
//     // *point_var = &var;    
//     point_var = &var;            
//     *point_var = var;        
//     *point_var = 10;         
//     cout << "var = " << var << endl;
//     cout << "*point_var = " << *point_var << endl;
//     cout << "point_var == &var: " << (point_var == &var ? "да" : "нет") << endl;
 
//     return 0;
// }

//4.1
// #include <iostream>
// #include <vector>
// using namespace std;
// void print(const vector<int>& v) {
//     for (int x : v) {
//         cout << x << " ";
//     }
//     cout << endl;
// }
// int main() {
// vector<int> num;
//     for (int i = 1; i <= 5; i++) {
//         num.push_back(i);
//     }
//     cout << "num: ";
//     print(num);
//     vector<int> v1 = {1, 2, 3, 4, 5};
//     vector<int> v2 {6, 7, 8, 9, 10};
//     vector<int> v3(5, 12);
//     cout << "v1: ";
//     print(v1);
//     cout << "v2: ";
//     print(v2);
//     cout << "v3: ";
//     print(v3);
 
//     return 0;
// }

//4.2
// #include <iostream>
// #include <vector>
// using namespace std;
// void print(const vector<int>& v) {
//     for (int x : v) {
//         cout << x << " ";
//     }
//     cout << endl;
// }
 
// int main() {
//     vector<int> num = {1, 2, 3, 4, 5};

//     num.push_back(6);
//     num.push_back(7);
//     cout << "После push_back: ";
//     print(num);
 
//     cout << "at(0) = " << num.at(0) << ", at(2) = " << num.at(2)
//          << ", at(4) = " << num.at(4) << endl;
 
//     num.at(1) = 20;
//     num.at(4) = 50;
//     cout << "После изменения: ";
//     print(num);
 
//     num.pop_back();
//     cout << "После pop_back: ";
//     print(num);
//     vector<int> p = {2, 3, 5, 7};
//     cout << "size() = " << p.size() << endl;
//     cout << "front() = " << p.front() << endl;
//     cout << "back() = " << p.back() << endl;
//     cout << "empty() = " << (p.empty() ? "true" : "false") << endl;
//     cout << "capacity() = " << p.capacity() << endl;
 
//     try {
//         cout << num.at(100) << endl;
//     } catch (const out_of_range& e) {
//         cout << "Ошибка: индекс вне диапазона" << endl;
//     }
 
//     return 0;
// }

//4.3
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
 
// int main() {
//     int n;
//     cout << "Введите количество элементов:" << endl;
//     cin >> n;
//     vector<int> numbers(n);
//     cout << "Введите " << n << " элементов:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
 
//     // 1) Сумма
//     int sum = 0;
//     for (int x : numbers) {
//         sum += x;
//     }
//     cout << "Сумма: " << sum << endl;
 
//     // 2) Среднее арифметическое
//     cout << "Среднее арифметическое: " << (double)sum / numbers.size() << endl;
 
//     // 3) Максимум и минимум
//     cout << "Максимум: " << *max_element(numbers.begin(), numbers.end())
//          << ", минимум: " << *min_element(numbers.begin(), numbers.end()) << endl;
 
//     // 4) Удаление чётных элементов
//     numbers.erase(remove_if(numbers.begin(), numbers.end(),
//                             [](int x) { return x % 2 == 0; }),
//                   numbers.end());
 
//     // 5) Результат
//     cout << "Без чётных:";
//     for (int x : numbers) {
//         cout << " " << x;
//     }
//     cout << endl;
 
//     return 0;
// }
