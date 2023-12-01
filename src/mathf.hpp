#include <math.h>

using namespace std;
// using namespace trrne;

#ifndef MATHF_HPP
#define MATHF_HPP

namespace trrne
{
    class mathf
    {
    public:
        static float round(float $a, int $digit)
        {
            return floorf((powf($a * 10, $digit) * 2 + 1) / 2) / powf(10, $digit);
        }

        static float clamp(float $a, int $min, int $max)
        {
            // return $a < $min ? $min : $a > $max ? $max : $a;
            if ($a < $min)
                return $min;
            else if ($a > $max)
                return $max;
            return $a;
        }

        static float floor(float $a, int $digit)
        {
            float mul = powf(10, $digit);
            return floorf($a * mul) / mul;
        }
    };
}

#endif // MATHF_HPP