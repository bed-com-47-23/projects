#pragma once
#include <iostream>
using namespace std;
namespace shapes {
    class square {
        private:
        double length;
        public:
        square();
        square(double newlength);
        ~square();
        double GetArea();
        void SetLength(double len);
        
        
    };
}