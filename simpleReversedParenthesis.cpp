#include<bits/stdc++.h>
int solve(std::string expr){
    int len = expr.length(); 
    if (len%2) 
       return -1; 
    std::stack<char> s; 
    for (int i=0; i<len; i++) 
    { 
        if (expr[i]==')' && !s.empty()) 
        { 
            if (s.top()=='(') 
                s.pop(); 
            else
                s.push(expr[i]); 
        } 
        else
            s.push(expr[i]); 
    } 
    int red_len = s.size(); 
    int n = 0; 
    while (!s.empty() && s.top() == '(') 
    { 
        s.pop(); 
        n++; 
    } 
    return (red_len/2 + n%2); 
}
