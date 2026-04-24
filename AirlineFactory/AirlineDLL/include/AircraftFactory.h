#pragma once
#include "AbstractAircraft.h"
#include "dll_export.h"

class AIRLINE_API AircraftFactory {
public:
    virtual ~AircraftFactory() = default; // Виртуальный деструктор, обеспечивает корректное освобождение памяти подклассами
    virtual AbstractAircraft* Create() = 0; // Чисто виртуальный метод: создаёт объект самолёта, обязательно реализуется в подклассах
};
