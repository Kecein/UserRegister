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
    cout << "����� ����������, �� ��� ����, �� ������� ������� ������.\n��� ������ �������� �����������." << endl;
    cout << "������� ���:" << endl;
    cin >> user.firstName;
    cout << "������� �������:" << endl;
    cin >> user.lastName;
    cout << "������� �������:" << endl;
    cin >> user.age;
    cout << "������� �����:" << endl;
    cin >> user.phoneNumber;
    cout << "������� ���������� ������ ������� ������� ����������:" << endl;
    cin >> user.value;
    cout << "������� ����� �����:" << endl;
    cin >> user.cardNumber;
    cout << "���������� ��� �������� �� ������!!!!"

}