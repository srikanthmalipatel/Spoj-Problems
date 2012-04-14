#include<stdio.h>
#include<stack>
#include<stdlib.h>
#include<string>
#include <iostream>


using namespace std;

int main()
{
     //int flag = 0;

     string exp;
     string n1;
     string ch;
     int t;
     cin >> t;

     int i;
     while(t--)
     {
        i = 0;
        n1 = "";
        stack<string>  stck;
        cin >> exp;
        //cout << exp <<endl;                           /**/
        while (i<exp.length())
            {
                //cout << i <<endl;
                ch = exp.at(i);
                //cout << ch <<endl;
            if(ch[0] == '(')
            {
                //cout <<"success" <<endl;
                //flag++;
            }
            else if(ch[0] == '+'||ch[0] == '-'||ch[0] == '*'||ch[0] == '/'||ch[0] == '^')
            {
                //cout <<"pushed" <<endl;
                stck.push(ch);
            }
            else if(ch[0] == ')')
            {
                //cout <<"poped" <<endl;
                if(stck.empty() == 0)
                {
                    n1.append(stck.top());
                    stck.pop();
                }
            }
            else
            {
                //cout <<"appended" <<endl;
                n1.append(ch);
            }
            i++;
        }
        cout << n1 <<endl;
     }

     return 0;
}
