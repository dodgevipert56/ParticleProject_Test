#ifndef VEC3_H_
#define VEC3_H_

struct Vec3
{

    Vec3() = default; // default ctor
    Vec3(const Vec3 &) = default; // default copy ctor
    Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z){} //user defined ctor


    void operator += (const Vec3 &_rhs)
    {
        x+=_rhs.x;
        y+=_rhs.y;
        z+=_rhs.z;
    }

#define Epsilon 0.001f
#define FCompare( a, b ) \
    (((a)-Epsilon)<(b) && ((a)+Epsilon>(b)))

    bool operator == (const Vec3 &_rhs)
    {
        return FCompare(x, _rhs.x) && FCompare(y, _rhs.y) && FCompare(z, _rhs.z);
    }

    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

};

#endif
