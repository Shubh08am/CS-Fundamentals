#include<bits/stdc++.h>
using namespace std;

class A{
public:
int a;
void func1(){
   cout<<"1\n";
}
};

class B : virtual public A{
public:
int b;
void func2(){
   cout<<"2\n";
}
};

class C:  public virtual A{
public:
int c;
void func3(){
   cout<<"3\n";
}
};

class D : public B , public C{
public:
int d;
void func4(){
   cout<<"4\n";
}
};

int main(){
    D obj ; 
    obj.func4();
    obj.func3(); 
    obj.func2();
   // obj.func1(); // -> Ambiguous 

    obj.B::func1(); 
    obj.C::func1();

    obj.d;
    obj.c; 
    obj.b;
 //   obj.a; //-> Ambiguous 

    cout << sizeof(obj) <<"\n" ;//20 without virtual  //24 with  virtual

    cout << sizeof(A)<<"\n" ;//4 without virtual  //4 with  virtual

    cout << sizeof(B) <<"\n";//8 without virtual  //12 with  virtual

    cout << sizeof(C) <<"\n";//8 without virtual  //12 with  virtual

    cout << sizeof(D) <<"\n";//20 without virtual  //24 with  virtual
    return 0;
}
