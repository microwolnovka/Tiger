#pragma once


#include <world/World.h>


namespace tiger{
namespace trains{
namespace ai{


class CollisionAllower{

    CollisionAllower();

    bool isCollisionAllow(world::Train* train, world::Train* otherTrain);

private:

    const float ARMOR_WEIGHT = 1;
    const float PRODUCT_WEIGHT = 2;

};


}
}
}
