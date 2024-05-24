#include <iostream>
using namespace std;
void rev(string &name, int s, int e)
{
    while (s < e)
    {
        swap(name[s], name[e]);
        s++, e--;
    }
}

void word_rev(string &words)
{
    int track = 0;
    int si = 0, len = words.length();

    for (int i = 0; i <= len; i++)
    {
        if (int(words[i]) == 32 || words[i] == '\0')
        {
            rev(words, track, si - 1);
            track = i + 1;
        }
        si++;
    }
}

int main()
{
    string name = "My name is Roshan";

    word_rev(name);
    cout << name << endl;

    return 0;
}