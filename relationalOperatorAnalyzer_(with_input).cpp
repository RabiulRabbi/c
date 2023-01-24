#include<bits/stdc++.h>
using namespace std;

void operatorAnalyzer(string input);
bool isRelaOperator(char c);

int main()
{
    string input,token;
    token ="";
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "\n\n\nOperator Token:\n\n";

    operatorAnalyzer(input);
}

void operatorAnalyzer(string input)
{
    for(int i=0;i<input.length();i++)
    {
        if(isRelaOperator(input[i]) == true)
        {
            if(i+1 < input.length() && input[i+1] == '=')
            {
                cout << input[i] << input[i+1] << "is a valid Relational Operator.\n";
                i++;
            }
            else if(input[i] == '=')
                continue;
            else if(i+1 < input.length() && (input[i]=='<' && input[i+1]=='<') || (input[i]=='>' && input[i+1]=='>'))
                i++;
            else
                cout << input[i] << " is a valid Relational Operator.\n";
        }
    }
}

bool isRelaOperator(char c)
{
    char rela[] = {'<', '>', '!'};

    for(int i=0; i<3; i++)
    {
        if(c == rela[i])
            return true;
    }
    return false;
}
