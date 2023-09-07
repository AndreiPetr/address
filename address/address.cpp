
#include <iostream>
#include <string>

using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
    int apartmentNumber;
    int zipcode;
};

void printAddress(const Address& address) {
    cout << "Город: " << address.city << endl;
    cout << "Улица: " << address.street << endl;
    cout << "Номер дома: " << address.houseNumber << endl;
    cout << "Номер квартиры: " << address.apartmentNumber << endl;
    cout << "Индекс: " << address.zipcode << endl;
}

int main() {
    setlocale(LC_ALL, "RUS");

    Address address;

    cout << "Введите название города: ";
    getline(cin, address.city);

    cout << "Введите название улицы: ";
    getline(cin, address.street);

    cout << "Введите номер дома: ";
    cin >> address.houseNumber;

    cout << "Введите номер квартиры: ";
    cin >> address.apartmentNumber;

    cout << "Введите индекс: ";
    cin >> address.zipcode;

    cout << endl << "Введенный адрес:" << endl;
    printAddress(address);

    return 0;
}