#include "factory.h"
#include "shape.h"

Factory& Factory::instance()
{
    static Factory inst;
    return inst;
}

Shape* Factory::create(const string& id)
{
    Shape* shape = NULL;

    Factory& inst = Factory::instance();

    map<string, ShapeGenerator>::iterator value = inst.m_registry.find(id);
    if (value != inst.m_registry.end()) {
        ShapeGenerator generator = value->second;
        if (generator)
            shape = (*generator)();
    }

    return shape;
}

bool Factory::addToRegistry(const string& id, ShapeGenerator shapeGenerator)
{
    Factory& inst = Factory::instance();
    inst.m_registry[id] = shapeGenerator;
    return true;
}

