/*
This program reads in characters from a file and determines if they are a bracket or not.
If so it then adds all closing brackets to a stack and removes them if they are matched
with a closing bracket of the same type. In addition it will also tell you if they are unmatched
and what they are missing.
*/
#include <iostream>
#include <fstream>
//#include <stack>
#include "CharStack.hpp"

using namespace std;


int main ()
{
    //CharStack myStack;
    CharStack cb;
    CharStack sb;
    CharStack p;

    ifstream fin;
    string fName;
    char punct;
    int counter=0;

    cout << "Enter a file name:"<< endl;
    cin >> fName;

    fin.open(fName.c_str());


    if(!fin)
    {
        cout << "NOPE couldn't open that file..." << endl;
    }

     while(fin>>punct)
    {
        //cout << "here\n\n\n";


        if(punct=='{')
        {
            cb.push('}');
        }
        else if(punct=='[')
        {
            sb.push(']');
        }
        else if(punct=='(')
        {   
            p.push(')');
        }
        else if(punct=='}')
        {
            cb.pop();
        }
        else if(punct==']')
        {
            sb.pop();
        }
        else if(punct==')')
        {
            p.pop();
        }
    }

    if(cb.isEmpty())
    {
        cout << "All curly braces are matched!\n"; 
    }
    else
    {
        cout << "You're missing some curly braces\n";
        while(!cb.isEmpty())
        {
            cout << cb.peek() << endl;
            cb.pop();
        }
    }

    if(sb.isEmpty())
    {
        cout << "All square brackets are matched!\n"; 
    }
    else
    {
        cout << "You're missing some square brackets\n";
        while(!sb.isEmpty())
        {
            cout << sb.peek() << endl;
            sb.pop();
        }
    }

    if(p.isEmpty())
    {
        cout << "All parentheses are matched!\n"; 
    }
    else
    {
        cout << "You're missing some paranheses\n";
        while(!p.isEmpty())
        {
            cout << p.peek() << endl;
            p.pop();
        }
    }

    return 0;
}









