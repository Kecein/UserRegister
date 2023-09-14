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
    cout << "Äîáðî ïîæàëîâàòü, íà íàø ñàéò, ïî ïðîäàæå èãðîâîé âàëþòû.\nÄëÿ íà÷àëà ïðîéäèòå ðåãèñòðàöèþ." << endl;
    cout << "Ââåäèòå èìÿ:" << endl;
    cin >> user.firstName;
    cout << "Ââåäèòå ôàìèëèþ:" << endl;
    cin >> user.lastName;
    cout << "Ââåäèòå âîçðàñò:" << endl;
    cin >> user.age;
    cout << "Ââåäèòå íîìåð:" << endl;
    cin >> user.phoneNumber;
    cout << "Ââåäèòå êîëè÷åñòâî âàëþòû êîòîðóþ æåëàåòå ïðèîáðåñòè:" << endl;
    cin >> user.value;
    cout << "Ââåäèòå íîìåð êàðòû:" << endl;
    cin >> user.cardNumber;
    cout << "Ïîçäðàâëÿþ âàñ îáìàíóëè íà äåíüãè!!!!";

}
