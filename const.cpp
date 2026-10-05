#include <iostream>
using namespace std;
class Copy
{

    int x;
public:
    Copy(int y)
    {
        x = y;
    }
    Copy(const Copy & obj)
    {
        x = obj.x;
    }
    void display()
    {
        cout << "Square="<<x*x<<endl;
    }
};

int main()
{
    int a;
    cout << "Enter value of a"<<endl;
    cin >> a;
    class Copy ict(a);
    Copy obj=ict;
    ict.display();
    obj.display();
}