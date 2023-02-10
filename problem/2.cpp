#include <iostream>
using namespace std;
bool isKeyword(string str)
{
    if ((str == "if") || (str == "else") ||
        (str == "while") || (str == "do") ||
        (str == "break") ||
        (str == "continue") || (str == "int") || (str == "double") || (str == "float") || (str == "return") || (str == "char") || (str == "case") || (str == "char") || (str == "sizeof") || (str == "long") || (str == "short") || (str == "typedef") || (str == "switch") || (str == "unsigned") || (str == "void") || (str == "static") || (str == "struct") || (str == "goto"))
        return (true);
    return (false);
}
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=')
        return (true);
    return (false);
}
bool symbol(char ch)
{
    if (ch == ',' || ch == ';' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}

bool isIdentifier(string str)
{
    if (symbol(str[0]))
    {
        return false;
    }
    else if (isOperator(str[0]))
    {
        return false;
    }
    else if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9')
    {
        return false;
    }
    return true;
}

int main()
{
    string s;
    getline(cin,s);
    int len = s.size();
    string str = "";
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            if (isKeyword(str))
            {
                cout << str << " -> keyword" << endl;
            }
            else if (isIdentifier(str))
            {
                if(str!="")
                cout << str << " -> Identifier" << endl;
            }
            else
            {
                cout << str << " -> String constant" << endl;
            }
            str.clear();
        }
        else if (symbol(s[i]) || isOperator(s[i]))
        {
            if (isKeyword(str))
            {
                cout << str << " -> keyword" << endl;
            }
            else if (isIdentifier(str))
            {
                if(str!="")
                cout << str << " -> Identifier" << endl;
            }
            else
            {
                cout << str << " -> String constant" << endl;
            }
            if (symbol(s[i]))
            {
                cout << s[i] << " ->Special Symbols" << endl;
            }
            else if (isOperator(s[i]))
            {
                cout << s[i] << " -> operator" << endl;
            }
            str.clear();
        }
        else if (s[i] != ' ')
        {
            str.push_back(s[i]);
        }
    }
    if (!str.empty())
    {
        if (isKeyword(str))
        {
            cout << str << " -> keyword" << endl;
        }
        else if (isIdentifier(str))
        {
            cout << str << " -> Identifier" << endl;
        }
        else
        {
            cout << str << " -> String constant" << endl;
        }
    }
    return 0;
}