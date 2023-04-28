#include "Vector.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define PI 3.14

class Vector 
{
    private:
        double x,y;
    public:
        Vector::Vector()
        {
            x = y = 0;
        };
        Vector::Vector(double x , double y)
        {
            this->x = x;
            this->y = y;
        };

         void Vector::SetX(double x){this->x = x;}
         void Vector::SetY(double y){this->y = y;}

         double Vector::GetX(){return x;}
         double Vector::GetY(){return y;}


        double Vector::magnitude()
        {
            double meter = sqrt(pow(x,2) + pow(y,2));
            return meter;
        }

        double Vector::angle(){
            float cos = x / sqrt(pow(x,2) + pow(y,2));
            float angle = acos(cos);
            return angle;
        }

        double Vector::angleD(){
            float cos = x / sqrt(pow(x,2) + pow(y,2));
            float angle = acos(cos);
            float degree = angle * (180.0/PI);
            return degree;
        }

        double Vector::multiply(double f){
            double newX = f * x;
            double newY = f * y;
            return newX , newY;
        }

        Vector Vector::add (Vector v){
            Vector new_vector;
                new_vector.x = x + v.x;
                new_vector.y = y + v.y;
            return new_vector;

        }

        Vector Vector::clone(){
            Vector v2; /*new vector*/
            
        }






};

