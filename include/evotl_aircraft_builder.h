//
// Created by Dhara Balaji on 8/30/21.
//

#ifndef JOBY_EVOTL_AIRCRAFT_BUILDER_H
#define JOBY_EVOTL_AIRCRAFT_BUILDER_H

#include <unordered_map>
#include "evotl_aircraft.h"

namespace dharas
{
/** I wanted to use a config file to load EvotlAircraft but since it was taking time
 *  moving towards easy approach of using builder & abstract factory, but I still think it would be
 *  so much better to use a Loader class which loads config from the file (yaml may be). */
 // Yikes I can make this Static
class EvotlAircraftBuilder
{
public:
    EvotlAircraftBuilder();
    EvotlAirCraftPtr BuildAircraft(AircraftType t);
private:
    void buildAlpha();
    void buildBeta();
    void buildCharlie();
    void buildDelta();
    void buildEcho();
    std::unordered_map<AircraftType, EvotlAirCraftPtr> aircraft;
};
}
#endif //JOBY_EVOTL_AIRCRAFT_BUILDER_H
