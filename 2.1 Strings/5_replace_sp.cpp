#include <iostream>
using namespace std;

// void replace_sp(string &s)
// {
//     string temp = "";
//     string ch = "@40";
//     for (int i = 0; i < s.size(); i++)
//     {

//         if (s[i] == ' ')
//         {
//             temp += ch;
//         }
//         else
//         temp += s[i];
//     }
//     s = temp;
// }

void replace_sp(string &s)
{
    string t = "";
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
            t.append("@40");
        else
            t.push_back(s[i]);
    }
    s = t;
}

int main()
{
    string name;
    getline(std::cin, name);
    cout << name << endl;
    replace_sp(name);
    cout << name << " " << endl;

    return 0;
}