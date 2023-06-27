#include <iostream>

using namespace std;

typedef struct {
    int p, l;
    int Luas(){
        return p * l;
    }
} LuasPersegiPanjang;

typedef struct {
    int r;
    float phi = 3.14;
    float Luas(){
        return phi * r * r;
    }
} LuasLingkaran;

typedef struct {
    int r, t;
    float phi;
    float Volume(){
        return 0.3 * phi * r * r * t;
    }
} VolumeKerucut;

typedef struct {
    int r;
    float phi;
    float Volume(){
        return 1.3 * phi * r * r;
    }
} VolumeBola;

int main()
{
    LuasPersegiPanjang lpj;
    lpj.p = 5;
    lpj.l = 6;
    cout << lpj.Luas() << endl;

    LuasLingkaran ll;
    ll.r = 10;
    cout << ll.Luas() << endl;

    VolumeKerucut vk;
    vk.r = 10;
    vk.t = 6;
    vk.phi = 3.14;
    cout << vk.Volume() << endl;

    VolumeBola vb;
    vb.r = 10;
    vb.phi = 3.14;
    cout << vb.Volume() << endl;

    return 0;
}
