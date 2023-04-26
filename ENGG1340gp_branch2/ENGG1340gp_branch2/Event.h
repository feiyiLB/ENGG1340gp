#ifndef EVENT_H
#define EVENT_H

#include "Player.h"
#include "Planet.h"
struct PirateEvent {
    int stolen_goods[5];
};

void execute_pirate_event(Player* player, PirateEvent* pirate_event);
// Add this function declaration to Event.h
void Travel(Player* player, Planet* current_planet, Planet* destination_planet);

#endif // EVENT_H