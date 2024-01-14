#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void func1(){
        cout<<"inside base class\n";
    }
    //this called if not using virtual 
    virtual void func2(){
        cout<<"chill life\n";
    }
};

class derived : public base{
public:
    //this called 
    void func1(){
        cout<<"inside derived class\n";
    }
    void func2(){
        cout<<"dekho jara\n";
    }
    void func3(){
        cout<<"jhaand life\n";
    }
};
int main(){
/*
   derived d ; 
    d.func1();
    d.func2();
    d.func3();
*/
    derived d ; 
    base *p = &d; 
    //base *p = new derived (); 
    p->func1();
    p->func2();
    return 0;
}
