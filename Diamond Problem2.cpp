#include<bits/stdc++.h>
using namespace std;

class A{
public:
int a;
void func1(int x){
    a=x;
}
void print(){
    cout<<a<<"\n";
}
};

class B : virtual public A{
public:
int b;
void func2(int x){
    b=x;
}
void print(){
    cout<<b<<"\n";
}
};

class C: virtual public A{
public:
int c;
void func3(int x){
    c=x;
}
void print(){
    cout<<c<<"\n";
}
};

class D : public B , public C{
public:
int d;
void func4(int x){
    d=x;
}
void print(){
    cout<<d<<"\n";
}
};

int main(){
    D obj ; 
    obj.func4(4);
    obj.print();

    obj.func1(1);  
    obj.print();
   
    obj.func2(2);  
    obj.print();

    return 0;
}
