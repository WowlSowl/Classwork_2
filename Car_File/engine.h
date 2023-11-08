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
    virtual ~Car();
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
    virtual ~Engine();

    string getModel();

};




#endif