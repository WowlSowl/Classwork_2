/*#ifndef ENGINE_H
#define #ENGINE_H

#include <string>
    using std::string;

class Engine
{
private:
    string model;

public:
    explicit Engine(string model);
    
    string getModel();
    //destructor
    ~Car();
}

#endif
*/
#ifndef ENGINE_H
#define ENGINE_H

#include <string>
    using std::string;

class Engine
{
private:
    string model;

public:
    explicit Engine(string model);
    ~Engine();

    string getModel();

};




#endif