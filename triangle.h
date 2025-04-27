#pragma once
using namespace std;
namespace shapes {
    class triangle {
        private:
        double height;
        double base;
        public:
        triangle();
        triangle(double newHeight, double newBase);
        ~triangle();
        double GetArea();
        void SetHeight(double hei);
        void SetBase(double bas);
        
    };
}