#include <iostream>
#include <vector>
#include <map>
#include <random>
// #include <string>

#include "rnd.hpp"

using namespace std;

#ifndef LOTTERY_HPP
#define LOTTERY_HPP

namespace trrne
{
    template <class SUBJECT>
    class lottery_pair
    {
    private:
        vector<SUBJECT> subjects;
        vector<float> weights;

    public:
        lottery_pair() {}
        lottery_pair(SUBJECT $subject, float $weight)
        {
            // pairs = $pairs;
            subjects.push_back($subject);
            weights.push_back($weight);
        }

        void push_back(SUBJECT $subject, float $weight)
        {
            subjects.push_back($subject);
            weights.push_back($weight);
        }

        const int size()
        {
            return subjects.size();
        }
    };

    class lottery
    {
    public:
        static int binary_search_tree(vector<float> $weights)
        {
            int size = $weights.size();
            // int size = sizeof($weights);
            if (size <= 0)
                throw exception();

            float totals[size];
            float total = 0.0f;
            for (int i = 0; i < size; i++)
            {
                total += $weights[i];
                totals[i] = total;
            }

            float rnd = rnd::randuniform(0, total - 1);
            int bottom = 0, top = size - 1;
            while (bottom < top)
            {
                int center = (bottom + top) / 2;
                if (rnd > totals[center])
                    bottom = center + 1;
                else
                {
                    if (rnd >= (center > 0 ? totals[center - 1] : 0.0f))
                        return center;
                    top = center;
                }
            }
            return top;
        }

        // static SUBJECT weighted()
        // {
        // }
    };
}

#endif // LOTTERY_HPP