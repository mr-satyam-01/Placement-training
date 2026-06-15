#include <iostream>
#include <algorithm>
using namespace std;

// 1: print the no of words
void noofwords(string str)
{
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "The no of words are: " << count << endl;
}
// 2: print no of spaces
void spaces(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "The no of spaces are: " << count << endl;
}

// 3: print each word on new line
void newline(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            cout << endl;
        }
        else
        {
            cout << str[i];
        }
    }
}

// 4: print no of alphabets
void alphabets(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count;
        }
        else
        {
            count++;
        }
    }
    cout << "The no of alphabets are: " << count << endl;
}

// 5: accept the alphabet and print index of its 2nd occurance in the sentence
void secondoccurance(string str)
{
    char alpha;
    cout << "Enter your alphabet" << endl;
    cin >> alpha;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == alpha)
        {
            count++;
            if (count == 2)
            {
                cout << "The index of the 2nd occurance: " << i << endl;
            }
        }
    }
}

// 6: print each letter of each word in capital case
void capitalcase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
}

// 7: print reverse of a string and change string
void reverse(string str)
{
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    cout << "The reverse is: " << rev << endl;
}

// 8:print the toggle for upper and lower case
void toggle(string str)
{
    string toggle;
    cout << "Enter your toggle as on or off: " << endl;
    cin >> toggle;
    if (toggle == "on")
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
    }
    else
    {
        cout << str << endl;
    }
}

// 9: check the string is anagram or not:
void anagramm()
{
    string defaulter = "silent";
    string input;
    cout << "Enter your string" << endl;
    cin >> input;
    sort(defaulter.begin(), defaulter.end());
    sort(input.begin(), input.end());
    if (defaulter == input)
    {
        cout << "It is anagram" << endl;
    }
    else
    {
        cout << "It is not anagram" << endl;
    }
}

// 10: print the index of that vowel form that string
void vowelindex(string str)
{
    char vowel;
    cout << "Enter your vowel" << endl;
    cin >> vowel;
    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == vowel)
            {
                cout << "The index of your vowel is: " << i << endl;
            }
        }
    }
}

void cases(int choice, string str)
{
    switch (choice)
    {
    case 1:
        noofwords(str);
        break;

    case 2:
        newline(str);
        break;

    case 3:
        spaces(str);
        break;

    case 4:
        alphabets(str);
        break;

    case 5:
        secondoccurance(str);
        break;

    case 6:
        capitalcase(str);
        break;

    case 7:
        reverse(str);
        break;

    case 8:
        anagramm();
        break;

    case 9:
        toggle(str);
        break;

    case 10:
        vowelindex(str);
        break;

    default:
        cout << "Invalid choice" << endl;
    }
}

int main()
{
    string str = "Have a nice day";
    int choice;
    cout << "1. No of words" << endl;
    cout << "2. Print each word on new line" << endl;
    cout << "3. No of spaces" << endl;
    cout << "4. No of alphabets" << endl;
    cout << "5. Index of 2nd occurrence" << endl;
    cout << "6. Capital case" << endl;
    cout << "7. Reverse string" << endl;
    cout << "8. Check anagram" << endl;
    cout << "9. Toggle" << endl;
    cout << "10. Vowel index" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cases(choice, str);
    return 0;
}