#pragma once
class rectangle {
    private:
    float length;
    float width;
    public:
    rectangle();
    rectangle(float newLength, float newWidth);
    ~rectangle();
    float GetArea();
    void SetLength(float len);
    void SetWidth(float wid);
};