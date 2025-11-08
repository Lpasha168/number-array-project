
//Пример для 2 вопроса
// void modify(int& a) { a += 10; }
//void print(const int& a) { std::cout << a; }
//
//int x = 5;
//modify(x);  x станет 15
//print(x);   просто вывод

//Примеры для вопроса номер 3
// 1)void f(int x) { x += 5; } Копия создаётся, оригинал не меняется
// int a = 10;
// f(a); a не изменится
// 
//2)void f(int& x) { x += 5; } Без копий. Можно изменять исходные данные.
// int a = 10;
// f(a); a == 15
// 
//3)void f(int* x) { (*x) += 5; } Нужно передавать &a.
//int a = 10;
//f(&a);  a == 15 

//Примеры для вопроса номер 6
//int& bad() {
//    int x = 10;
//    return x;  x уничтожен
//}
//int main() {
//    int& ref = bad();  UB
//    std::cout << ref;  undefined behavior
//}

//Примеры для вопроса номер 7
//int add(int a, int b) { return a + b; }
//int (*funcPtr)(int, int); Объявление указателя

//Примеры для вопроса номер 8
//int add(int a, int b) { return a + b; }
//
//int (*f)(int, int) = add; присваиваем
//
//int result = f(2, 3);     вызываем через указатель
//std::cout << result;      5

//Примеры для вопроса номер 9
//bool desc(int a, int b) { return a > b; }
// сортировка
//std::vector<int> v = { 1, 4, 2 };
//std::sort(v.begin(), v.end(), desc); передаём функцию
// обработка массива
//void apply(int* arr, int n, void (*f)(int&)) {
//    for (int i = 0; i < n; ++i) f(arr[i]);
//}
//void inc(int& x) { x++; }
//int main() {
//    int a[] = { 1, 2, 3 };
//    apply(a, 3, inc);
//}


//Примеры для вопроса номер 10
// [capture](параметры) -> тип_возврата {
//тело;
//};
//auto add = [](int a, int b) { return a + b; };
//std::cout << add(2, 3); 5


//Примеры для вопроса номер 11
//int x = 10;
//auto byValue = [=]() { std::cout << x; }; копия
//auto byRef = [&]() { x++; };             изменяет оригинал


//Примеры для вопроса номер 13
//void print(char* s);
//const char* msg = "Hello";
//print(const_cast<char*>(msg)); снимаем const


//Примеры для вопроса номер 14
//void process(int a, int b, int (*callback)(int, int)) {
//    std::cout << callback(a, b);
//}
//int add(int x, int y) { return x + y; }
//int main() {
//    process(2, 3, add);  передаём функцию
//}
