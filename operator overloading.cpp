// CPP program to illustrate
// operators that can be overloaded
#include <iostream>
using namespace std;

class integer {
private:
	int x;

public:
    void set(int i){
        x=i;
    }
	
	integer operator++() {
	    integer i1;
	    i1.x = ++x;
	    return i1;
	}
	void show() { cout << x; }
};

int main()
{
    integer i1,i2;
    i1.set(3);
    i2=++i1;
    i2.show(); i1.show();
	return 0;
}
