#pragma once 
#include <iostream>
using namespace std;
namespace shapes {
    class circle {
        private: 
        double radius;
        public:
        circle();
        circle(double newRadius);
        ~circle();
        double GetArea();
        void SetRadius(double rad);
    };
}