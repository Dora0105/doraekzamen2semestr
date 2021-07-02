// src.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Реализовать шаблон класса "полином", для которого будут доступны
операции сложения и умножения, а также вычисления значения полинома в
точке. В качестве параметра шаблона использовать тип коэффициентов
полинома.*/

#include <iostream>
using namespace std;


template<class T>
class Polynom {
    T* p;
    int i;
public:
    Polynom() {}
    Polynom(T a[]) {
        i = sizeof(a);
        p = new T[i];
        for (int m = 0; m < i; m++) {
            p[m] = a[m];
        }
    }
    void output() {
        for (int m = 0; m < (i - 1); m++) {
            cout << p[m] << " ";
        }
    }
    /*void summ(Polynom p1, Polynom p2) {
        Polynom sum;
        if (sizeof(p1) > sizeof(p2)) sum.i = sizeof(p1);
        else sum.i = sizeof(p2);
        int vr = i;
        if (sizeof(p1) > sizeof(p2)) {
            for (int k = sizeof(p2) - 1; k < sizeof(p1) - 1; k++) {
                p2.p[vr] = p2.p[k];
                vr = vr - 1;
            }
        }
        else {
            for (int k = sizeof(p1) - 1; k < sizeof(p2) - 1; k++) {
                p1.p[vr] = p1.p[k];
                vr = vr - 1;
            }
        }
        for (int m = 0; m < vr; m++) {
            sum.p[m] = p1.p[m] + p2.p[m];
            cout << sum.p[m] << " ";
        }*/
    void point(T a[]){

    };


    int main()
    {
        int a[3] = { 1, 2, 3 };
        Polynom<int> p(a);
        p.output();
        int b[5] = { 4, 0, -1, -2, 3 };
        Polynom<int> p1(b);

    }
}