#include <iostream>
using namespace std;

int getLen(char ar[])
{
    int cnt = 0, i = 0;
    while (1)
    {
        if (ar[i] == '\0')
            break;
        cnt++;
        i++;
    }
    return cnt;
}

char *rev(char ch[], int len)
{

    int s = 0;
    int e = len - 1;

    while (s < e)
    {
        swap(ch[s], ch[e]);
        s++, e--;
    }
    return ch;
}

char lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }
    return ch;
}

int main()
{
    char name[50];
    cout << "Enter name " << endl;
    cin >> name;

    name[2] = '\n';
    // cout<<name[5]<<endl;
    cout << "Your name is " << name << endl;
    cout << "Length is " << getLen(name) << endl;
    cout << "Revese is " << rev(name, getLen(name)) << endl;
    cout << "main is " << name << endl;

    char a[] = "abcde";
    char *p = a;
    /*
        Note :
            Address of an character array will print all upto '\0'
    */
    cout << p << endl;

    return 0;
}