#include <math.h>
#include <string>
#include <sstream>

#include "mathf.hpp"

using namespace std;

#ifndef V2_HPP
#define V2_HPP

#define RAD_TO_DEG (180 / M_PI)
#define DEG_TO_RAD (M_PI / 180)

namespace trrne
{
    class v2
    {
    public:
        float x, y;

        v2() : x(0), y(0) {}
        v2(float $x, float $y) : x($x), y($y) {}

        const v2 operator+(const v2 $a) const
        {
            return v2(x + $a.x, y + $a.y);
        }

        const v2 operator+() const
        {
            return v2(+x, +y);
        }

        const v2 operator+=(const v2 $a)
        {
            x += $a.x;
            y += $a.y;
            return *this;
        }

        const v2 operator-(const v2 $a) const
        {
            return v2(x - $a.x, y - $a.y);
        }

        const v2 operator-() const
        {
            return v2(-x, -y);
        }

        const v2 operator-=(const v2 $a)
        {
            x -= $a.x;
            y -= $a.y;
            return *this;
        }

        const v2 operator*(const v2 $a) const
        {
            return v2(x * $a.x, y * $a.y);
        }

        const v2 operator*(const float $a) const
        {
            return v2(x * $a, y * $a);
        }

        const v2 operator*=(const v2 $a)
        {
            x *= $a.x;
            y *= $a.y;
            return *this;
        }

        const v2 operator/(const v2 $a) const
        {
            return v2(x / $a.x, y / $a.y);
        }

        const v2 operator/(const float $a) const
        {
            return v2(x / $a, y / $a);
        }

        const v2 operator/=(const v2 $a)
        {
            x /= $a.x;
            y /= $a.y;
            return *this;
        }

        const string to_string() const
        {
            stringstream ss;
            ss << "(" << x << "," << y << ")";
            return ss.str();
        }

        const string to_string(int $digit) const
        {
            stringstream ss;
            ss << "(" << mathf::floor(x, $digit) << "," << mathf::floor(y, $digit) << ")";
            return ss.str();
        }

        static float angle(v2 $a, v2 $b)
        {
            float lal = sqrtf($a.x * $a.x + $a.y * $a.y),
                  lbl = sqrtf($b.x * $b.x + $b.y * $b.y);
            float dot = $a.x * $b.x + $a.y * $b.y;
            return acosf(dot / lal / lbl) * RAD_TO_DEG;
        }
    };
}

#endif // V2_HPP