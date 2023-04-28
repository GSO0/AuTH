#ifndef VECTOR_H
#define VECTOR_H


class Vector{
    private:
        double x , y;
    public:
    // Constractors
        Vector();
        Vector(double x , double y);

    // Setters - Gettets
        void SetX(double x);
        void SetY(double y);
        double GetX();
        double GetY();

    // Functions
        double magnitude();
        double angle();
        double angleD();
        double multiply(double f);
        double add(Vector v);
        double clone(double);

};

#endif VECTOR_H