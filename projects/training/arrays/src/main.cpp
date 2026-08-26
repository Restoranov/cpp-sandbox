#include <iostream>
#include <windows.h>

#include "TrainingArrays.h"

//    Задание «Статистика температур»:
// 1. Создать обычный C-массив из 7 целых чисел.
// 2. Заполнить его температурами через range-based for и std::cin.
// 3. Написать функцию, выводящую массив на экран.
// 4. Найти минимальную температуру.
// 5. Найти максимальную температуру.
// 6. Вернуть минимум и максимум из одной функции через структуру.
// 7. Найти среднюю температуру.
// 8. Посчитать количество дней с температурой выше средней.
// 9. Найти индекс самого тёплого дня.
// 10. Красиво вывести все результаты.

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    using TA = TrainingArray;

    const std::size_t size = 7;
    int sampleArray[size]{};

    std::cout << "Вводите температуру по очереди за 7 дней: \n";
    for (int &element : sampleArray)
        {
            std::cin >> element;
        }
    std::cout << "\n---------------\n";

    TA::MinMaxValues minMaxValues = TA::GetMinMaxValues(sampleArray);
    std::cout << "Минимальная температура за 7 дней: " << minMaxValues.min << "\n";
    std::cout << "Максимальная температура за 7 дней: " << minMaxValues.max << "\n";
    std::cout << "Индекс самого теплого дня: " << minMaxValues.idxMax << "\n";

    float averageTemperature = TA::GetAverageTemperature(sampleArray);
    std::cout << "Средняя температура за 7 дней: " << averageTemperature << "\n";

    int countDaysAboveAverageTemperature = TA::GetCountDaysAboveAverageTemperature(sampleArray, averageTemperature);
    std::cout << "Дней выше средней температур: " << countDaysAboveAverageTemperature << "\n";

    std::cout << "---------------\n\n";
    TA::PrintArray(sampleArray);

    std::cin.get();

    return 0;
}