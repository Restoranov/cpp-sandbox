#pragma once

#include <cstddef>
#include <iostream>

class TrainingArray
{

public:
    struct MinMaxValues
    {
        int min;
        int max;
        std::size_t idxMax;
    };

    template <typename T, std::size_t Size> static void PrintArray(const T (&array)[Size])
    {
        std::cout << "ИСХОДНЫЙ МАССИВ:\n";
        for (int i = 0; const T &element : array)
            {
                std::cout << "[" << i << "]: " << element << "\n";
                ++i;
            }
        std::cout << "---------------\n";
    }

    template <std::size_t Size> static MinMaxValues GetMinMaxValues(const int (&array)[Size])
    {
        int min, max;

        std::size_t idxMax;

        for (std::size_t i = 0; i < Size; i++)
            {
                if (i == 0)
                    {
                        min = array[i];
                        max = array[i];
                        idxMax = i;
                        continue;
                    }

                if (array[i] < min)
                    {
                        min = array[i];
                    }
                if (array[i] > max)
                    {
                        max = array[i];
                        idxMax = i;
                    }
            }
        MinMaxValues result{min, max, idxMax};
        return result;
    }

    template <std::size_t Size> static float GetAverageTemperature(const int (&array)[Size])
    {
        float averageTemperature = 0.f;
        for (const int &element : array)
            {
                averageTemperature += element;
            }
        return averageTemperature / Size;
    }

    template <std::size_t Size>
    static int GetCountDaysAboveAverageTemperature(const int (&array)[Size], float averageTemperature)
    {
        int count = 0;
        for (const int &element : array)
            {
                if (element > averageTemperature)
                    {
                        ++count;
                    }
            }
        return count;
    }
};