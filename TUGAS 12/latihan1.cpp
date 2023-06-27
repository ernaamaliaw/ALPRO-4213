#include <iostream>

using namespace std;

struct luaspersegipanjang{
    int p, l;
    int Luas(){
        return p * l;
    };
};

struct luaslingkaran{
    int r;
    float phi = 3.14;
    float Luas(){
        return phi * r * r;
    };
};

struct vkerucut{
    int r, t;
    float phi;
    float Volume(){
        return 0.3 * phi * r * r * t;
    };
};

struct vbola{
    int r;
    float phi;
    float Volume(){
        return 1.3 * phi * r * r;
    };
};

struct luaspersegipanjang lpj;
struct luaslingkaran ll;
struct vkerucut vk;
struct vbola vb;

int main()
{
    lpj.p = 5;
    lpj.l = 6;
    cout << lpj.Luas() << endl;

    ll.r = 10;
    cout << ll.Luas() << endl;

    vk.r = 10;
    vk.t = 6;
    vk.phi = 3.14;
    cout << vk.Volume() << endl;

    vb.r = 10;
    vb.phi = 3.14;
    cout << vb.Volume() << endl;

    return 0;
}
