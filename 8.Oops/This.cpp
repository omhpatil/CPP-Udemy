#include <iostream>
using namespace std;

class MyClass {
private:
    int num;
public:
    void setNum(int num) {
        this->num = num;
    }
    int getNum() {
        return this->num;
    }
};

int main() {
    MyClass obj;
    obj.setNum(10);
    cout << "Number: " << obj.getNum() << endl;
    return 0;
}
