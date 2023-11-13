#ifndef _DADO_H_
#define _DADO_H_

class Dado
{
    private:
    int caras;

    public:
    int girar();
    void set_caras(int n);
    int get_caras();
};

#endif