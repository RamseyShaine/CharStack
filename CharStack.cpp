#include <iostream>
#include <cassert>
#include <string>
#include "CharStack.hpp"

using namespace std;
CharStack::CharStack(){}
/*
push:Adds elements from a file into a stack.
characters: The elements read in.
*/
void CharStack::push (char characters)
{
    assert (!isFull());
    stackString += characters;
   // cout << stackString << "\n";
}
/*
pop:removes top element from the stack
*/
void CharStack::pop()
{
    int sStr = (stackString.size())-1;
    assert (!isEmpty());
    stackString.erase(sStr);
}
/*
peek: reads top character from stack
returns the top character
*/
char CharStack::peek()
{
    //char sStr=(stackString.size())-1;
    char sStr = stackString.back();
    //cout << "inside of PEEKFUNCTION\n AND this is sstr: "<< sStr << endl;
    return sStr;
}
/*
isFull: finds if stack is full
returns true if it is full and false otherwise
*/
bool CharStack::isFull () const
{
  if (stackString.length()==300)
  return true;
  else return false;  
}
/*
isEmpty: finds if stack is empty
returns true if it is empty and false otherwise
*/
bool CharStack::isEmpty () const
{
   if (stackString.length() == 0)
       return true;
   else
       return false;
}
