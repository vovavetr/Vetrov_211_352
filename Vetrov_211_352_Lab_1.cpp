#include <iostream>

using namespace std;

int main() {
    
//    Zadanie_1
    
    cout<<"Vetrov Vladimir Vladimirovich 211-352"<<endl;
    
//    Zadanie_2
    
    int x1 = int(0b10000000000000000000000000000000);
    int y1 = int(0b01111111111111111111111111111111);
    cout<<"Min= "<<x1<<" Max= "<<y1<<" Size of Int: "<<sizeof(int)<<endl;
    
    unsigned int x2 = unsigned(0b0);
    unsigned int y2 = unsigned(0b0111111111111111111111111111111111111111111111111111111111111111);
    cout<<"Min= "<<x2<<" Max= "<<y2<<" Size of Unsigned Int: "<<sizeof(unsigned int)<<endl;
    
    
    short x3 = short(0b1000000000000000);
    short y3 = short(0b0111111111111111);
    cout<<"Min= "<<x3<<" Max= "<<y3<<" Size of Short: "<<sizeof(short)<<endl;
    
    unsigned short x4 = unsigned(0b0);
    unsigned short y4 = unsigned(0b1111111111111111);
    cout<<"Min= "<<x4<<" Max= "<<y4<<" Size of Unsigned Short: "<<sizeof(unsigned short)<<endl;
    
    long x5 = long(0b10000000000000000000000000000000);
    long y5 = long(0b01111111111111111111111111111111);
    cout<<"Min= "<<x5<<" Max= "<<y5<<" Size of Long: "<<sizeof(long)<<endl;
    
    long long x6 = long(0b1000000000000000000000000000000000000000000000000000000000000000);
    long long y6 = long(0b0111111111111111111111111111111111111111111111111111111111111111);
    cout<<"Min= "<<x6<<" Max= "<<y6<<" Size of Long Long: "<<sizeof(long long)<<endl;
    
    double x7 = double(0b1000000000000000000000000000000000000000000000000000000000000000);
    double y7 = double(0b0111111111111111111111111111111111111111111111111111111111111111);
    cout<<"Min= "<<x7<<" Max= "<<y7<<" Size of Double: "<<sizeof(double)<<endl;
    
    cout<<"Min= "<<CHAR_MIN<<" Max= "<<CHAR_MAX<<" Size of Char: "<<sizeof(char)<<endl;
    
    bool x9 = bool(0b0);
    bool y9 = bool(0b01111111);
    cout<<"Min= "<<x9<<" Max= "<<y9<<" Size of Bool: "<<sizeof(bool)<<endl;
    
//    Zadanie_3
    
    int innum;
    cout<<"Input number: ";
    cin>>innum;
    cout<<"Binary representation: "<<bitset<16>(innum)<<endl;
    cout<<"Hex representation: "<<hex<<innum<<endl;
    cout<<"Bool representation: "<<bool(innum)<<endl;
    cout<<"Double representation: "<<double(innum)<<endl;
    cout<<"Char representation: "<<char(innum)<<endl;
    
//    Zadanie_4
    
    int a, x, b;
    cout<<"Input ratio a*x=b: ";
    cin>>a>>b;
    cout<<a<<"*x="<<b<<endl;
    cout<<"x="<<b<<"/"<<a<<endl;
    cout<<"x="<<(double)(b/a)<<endl;
    x = b/a;
    cout<<"Answer:"<<x<<endl;
    
//    Zadanie_5
    
    double c, d;
    cout<<"Input segments lines coordinates: ";
    cin>>c>>d;
    cout<<"Middle of the lines segment locates at coordinates: "<<(c+d)/2<<endl;
}
