#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

class Box
{
private:
    int l_, w_, h_;

public:
    Box(int l = 0, int w = 0, int h = 0) : l_(l), w_(w), h_(h) {}
    Box(Box &B) : l_(B.l_), w_(B.w_), h_(B.h_) {}
    int getLength() { return l_; }
    int getBreadth() { return w_; }
    int getHeight() { return h_; }
    long long CalculateVolume() { return (long long)l_ * (long long)w_ * (long long)h_; }
    bool operator<(Box &B)
    {
        if (l_ > B.l_)
            return false;
        if (l_ < B.l_)
            return true;
        if (w_ > B.w_)
            return false;
        if (w_ < B.w_)
            return true;
        return h_ < B.h_;
    }
    friend ostream &operator<<(ostream &out, Box &B)
    {
        out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();
        return out;
    }
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}