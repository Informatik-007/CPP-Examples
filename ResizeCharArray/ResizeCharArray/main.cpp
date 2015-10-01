/*
 https://stepic.org/lesson/Динамическая-память-542/step/9?course=Программирование-на-языке-C  &unit=865
 
 В этой задаче вам нужно реализовать функцию resize. Функция resize принимает на вход три аргумента: указатель на область памяти, выделенную с помощью оператора new[], размер области (size) и новый размер (new_size). Функция должна выделить память размера new_size, скопировать в нее данные из переданной области памяти, освободить старую область памяти и вернуть выделенную область памяти нового размера со скопированными данными.
 
 Обратите внимание, что память, возвращенная из функции, будет освобождена с помощью оператора delete[]. Не смотря на то, что входной тип данных — это const char *, не стоит рассчитывать, что там хранится C-style строка. При выполнении задания также учтите, что new_size может быть меньше size.
 
 Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные функции. Вводить или выводить что-либо не нужно. Определять функцию main не нужно.
 */

#include <iostream>

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *newStr = new char[new_size];
    unsigned i;
    for (i = 0; i < size && i < new_size; i++) {
        newStr[i] = str[i];
    }
    delete[] str;
    for (; i < new_size; i++) {
        newStr[i] = 0;
    }
    return newStr;
}

int main(int argc, const char * argv[]) {
    
    char *a = new char[5];
    a[0] = '0'; a[1] = '1'; a[2] = '2'; a[3] = '3'; a[4] = '\0';
    char *b = resize(a, 5, 2);
    printf("%s\n", b);
    delete[] b;

    return 0;
}
