//Engine.cpp

#include <string>
    using std::string;

//string modle
Engine::Engine(string model)
:model{model}
{}

string Engine::getModel()
{
    return this->model;
}
Engine::~Engine()
{
    //nothing in here for deconstructor
}
