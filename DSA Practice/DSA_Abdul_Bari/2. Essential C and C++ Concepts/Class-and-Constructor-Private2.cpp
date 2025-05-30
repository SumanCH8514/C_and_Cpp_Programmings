// Code Topic: Class-and-Constructor-Private.2//,
#include <iostream>
using namespace std;
class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic()
    {
        a = 0;
        b = 0;
    }
    Arithmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        return a + b;
    }
    int sub()
    {
        return a - b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    ~Arithmetic()
    {
        cout << "Destroyed !";
    }
};
int main()
{
    int a, b;
    cout << "Enter A and B: " << endl;
    cin >> a >> b;
    Arithmetic ar(a, b);
    system("cls");
    cout << ar.getA() << " + " << ar.getB() << " = " << ar.add() << endl;
    cout << ar.getA() << " - " << ar.getB() << " = " << ar.sub() << endl;

    return 0;
}