#pragma once


#include <models/EventType.h>


namespace tiger
{
namespace trains
{
namespace models
{


class EventModel
{
private:
    EventType type;
    int tick;
    int parametrs;

public:

    EventType getType() const;
    int getTick() const;
    int getParametrs() const;

    void setType(const EventType type);
    void setTick(const int tick);
    void setParametrs(const int parametrs);

};


}
}
}
