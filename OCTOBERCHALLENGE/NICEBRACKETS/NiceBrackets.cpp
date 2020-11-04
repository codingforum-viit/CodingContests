#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{  
   string s1;
   cin>>s1;
   stack<char>s;
   stack<int>p;
   char top;
   for(size_t i = 0; i < s1.size(); i++)
   {
     
     if(s1[i] == '{' || s1[i] == '[' || s1[i] == '(')
     {   
       s.push(s1[i]);
       p.push(i+1);
     }
     else if(s1[i] != ']' && s1[i] != '}' && s1[i] != ')')
     {
       continue;
     }   
     else
     {
       if(s.empty())
       {   
         cout << i+1 << "\n";
         return 0;
       }
       top=s.top();
       s.pop();
       p.pop();
       if((top == '[' && s1[i] != ']') || (top == '{' && s1[i] != '}') || (top == '(' && s1[i] != ')'))
       {
         cout << i+1 << "\n";
         return 0;
       }
     }
   }


    if(s.empty())
      cout<<"NICE\n";
    else
    {
      int t;
      t=p.top();
      cout<<t<<"\n";
    }
    return 0;
}
