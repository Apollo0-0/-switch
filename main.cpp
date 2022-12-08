/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;

int main()
{
    int count;
    cout << "1. Понелельник" << endl;
    cout << "2. Вторник" << endl;
    cout << "3. Среда" << endl;
    cout << "4. Четверг" << endl;
    cout << "5. Пятница" << endl;
    cout << "6. Суббота" << endl;
    cout << "7. Воскресенье" << endl;
    cout << "Введите номер: ";
    cin >> count;
    switch (count)
    {
        case 1: 
        {
        cout << "Понелельник" << endl;
        break;
    } 
    case 2:
        {
        cout << "Вторник" << endl;
        break;
        }
        case 3:
        {
        cout << "Среда" << endl;
        break;
        }
        case 4:
        {
        cout << "Четверг" << endl;
        break;
        }
        case 5:
        {
        cout << "Пятница" << endl;
        break;
        }
        case 6:
        {
        cout << "Суббота" << endl;
        break;
        }
        case 7:
        {
        cout << "Воскресенье" << endl;
        break;
        }
        default :
        cout << "Такого варианта не существует";
    }

    return 0;
}
