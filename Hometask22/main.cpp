#include<iostream>


void power(int* address, int num) {
        int result = 1;
        for (int i = 0; i < num; i++) {
            result *= *address;
        }
        *address = result;
    }



int main() {
	setlocale(LC_ALL, "RU");


    std::cout << "Задача 1\n";
    std::cout << " 1 2 3 4 5 6 7 8 9 10\n";
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr = arr;
    for (int i = 0; i < 10; i += 2) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
    }
    for (int i = 0; i < 10; i++) {
        std::cout <<" " <<arr[i];
        
    }
    std::cout << std::endl;

    std::cout << "Задача 2\n";
    int num = 9;
    int degree = 3;
    std::cout << "Начальное число: " << num << std::endl;
    power(&num, degree);
    std::cout << "Число возведенное в степень^3: " << num << std::endl;


















	return 0;

}