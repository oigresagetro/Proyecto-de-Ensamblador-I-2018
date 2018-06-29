#ifndef EVALUADOR_H
#define EVALUADOR_H
#include<bits/stdc++.h>
#include<stack>
#include <math.h>
#include <vector>
#include<stdio.h>

using namespace std;

class evaluador{
public:

//Function to return precedence of operators
int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
bool IsOperator(char c){
    if (c=='-' || c=='+' ||c=='*' || c=='/' || c=='^')
        return true;
    return false;
}
inline float Resolve(stack<float> &st,char c){
    float operando1=st.top();
    st.pop();
    float operando2=st.top();
    st.pop();
    float res=0;

    //vector *vec = malloc(sizeof(vector)*size);
    if(c=='+'){
        //res=operando2+operando1;
        float res;
        __asm__ ( "fld %1;"
                  "fld %2;"
                  "fadd;"
                  "fstp %0;" : "=m" (res) : "m" (operando2), "m" (operando1) ) ;
        if(operando1>operando2){
            res*-1;
        }
       return res;


    }else if(c=='-'){
        __asm__ ( "fld %1;"
                  "fld %2;"
                  "fsub;"
                  "fstp %0;" : "=m" (res) : "m" (operando2), "m" (operando1) ) ;
       return res;

    }else if(c=='*'){
        __asm__ ( "fld %1;"
                  "fld %2;"
                  "fmul;"
                  "fstp %0;" : "=m" (res) : "m" (operando2), "m" (operando1) ) ;
       return res;

    }else if(c=='/'){
        __asm__ ( "fld %1;"
                  "fld %2;"
                  "fdiv;"
                  "fstp %0;" : "=m" (res) : "m" (operando1), "m" (operando2) ) ;
       return res;

    }else if(c=='^'){
        res=pow(operando2,operando1);

    }
    return res;
}


float posfixToRes(string exp){
    string op1;
    string op2;
    stack<float>st;
    bool reading=false;
    float operador1;
    float operador2;
    int pos=0;
    while(pos<exp.size()){

        while(exp[pos]!=',' && !IsOperator(exp[pos])){
            reading=true;
            op1+=exp[pos];
            ++pos;
        }
        if((!IsOperator(exp[pos])|| reading==true)){
            operador1=stof(op1);
            st.push(operador1);
            reading=false;
        }
        if(exp[pos]==',')
            ++pos;
        if(IsOperator(exp[pos])){
          float res=Resolve(st,exp[pos]);

          st.push(res);
          cout<<"pusheando "<<res<<endl;
          ++pos;

        }
        if(exp[pos]==',' && IsOperator(exp[pos-1]))
            ++pos;
        op1.clear();


    }
    std::cout<<st.top()<<endl;
    return st.top();
}

// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {
        // If the scanned character is an operand, add it to output string.
        if((s[i] >= '0' && s[i] <= '9' )|| s[i]=='.')
        ns+=s[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if(s[i] == '(')

        st.push('(');

        // If the scanned character is an ‘)’, pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        //If an operator is scanned
        else{
            ns += ',';
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }

       // ns += ',';'

    }
    //Pop all the remaining elements from the stack
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }

    cout << ns << endl;
    return ns;

}
evaluador(){

}

};
float suma(float &op1,float &op2){


}

#endif // EVALUADOR_H
