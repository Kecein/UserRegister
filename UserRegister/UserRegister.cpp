#include <iostream>
#include <string>
using namespace std;;
struct UserAccount
{
    string firstName;
    string lastName;
    int age;
    int phoneNumber;
    int value;
    int cardNumber;
};
int main(UserAccount)
{
    setlocale(LC_ALL, "");
    UserAccount user;
    cout << "Добро пожаловать, на наш сайт, по продаже игровой валюты.\nДля начала пройдите регистрацию." << endl;
    cout << "Введите имя:" << endl;
    cin >> user.firstName;
    cout << "Введите фамилию:" << endl;
    cin >> user.lastName;
    cout << "Введите возраст:" << endl;
    cin >> user.age;
    cout << "Введите номер:" << endl;
    cin >> user.phoneNumber;
    cout << "Введите количество валюты которую желаете приобрести:" << endl;
    cin >> user.value;
    cout << "Введите номер карты:" << endl;
    cin >> user.cardNumber;
    cout << "Поздравляю вас обманули на деньги!!!!"

}