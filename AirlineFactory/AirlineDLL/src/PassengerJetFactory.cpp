#include "../include/PassengerJetFactory.h"

PassengerJetFactory::PassengerJetFactory(std::string model, double speed, double alt, int pass, double range)
    : _model(model), _speed(speed), _alt(alt), _pass(pass), _range(range) {
}

// Реализация фабричного метода: создаёт конкретный пассажирский самолёт и возвращает его
AbstractAircraft* PassengerJetFactory::Create() {
    return new PassengerJet(_model, _speed, _alt, _pass, _range);
}
