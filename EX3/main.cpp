#include <iostream>
#include <fstream>
using namespace std;

/*
    ��� ��������� ����. � ������� ����������� ������.
    ����� ������ ���� �����, � ������� ����������� ������ ���������.
*/

int main()
{
    const int maxsym = 50;
    char str[maxsym];
    int i = 0;
    int pos;
    string instr;
    string tempstr;
    cout << "Enter the gungeon: ";
    cin >> instr;
    ifstream file;
    file.open("file.txt");

    while (!file.eof())
    {
        file.getline(str, maxsym); // ������� ������ �� �����
        tempstr = str;
        pos = tempstr.find(instr);
        i++;
        if (pos != -1)
        {
            cout << i << endl;
        }
    }
    file.close(); // ��������� ����

    return 0;
}
