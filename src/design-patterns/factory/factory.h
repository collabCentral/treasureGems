#ifndef FACTORY_H
#define FACTORY_H

#include <string>
#include <map>
using std::string;
using std::map;

class Shape;

typedef Shape* (*ShapeGenerator)();

class Factory
{
public:
    static Shape* create(const string& id);
    static bool addToRegistry(const string& id, ShapeGenerator);

private:
    static Factory& instance();

private:
    map<string, ShapeGenerator> m_registry;
};


template<typename T>
Shape* shapeCreator()
{
    T* instance = new T();
    return instance;
}

#define REGISTER_SHAPE(className) \
    bool _id##className = Factory::addToRegistry(#className, shapeCreator<className>)

#endif // FACTORY_H

