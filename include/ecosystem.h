#ifndef ECOSYSTEM
#define ECOSYSTEM

#include "../include/life.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <list>

// Ja tänker att denna klassen har regler för ekosystemet, typ högsta directoryt
// å andra parametrar som påverkar hela systemet. Klassen life ska ha grundstenarna
// för själva livet. Superklass till allt liv.
class EcoSystem {
    private:
        // topDir represents the top of the cage, nothing outside this dir
        std::filesystem::path topDir;
        int time;
        std::list<Life> lifeForms;

    public:
        EcoSystem(std::filesystem::path topDir);

        /**
         * The method for moving the ecosystem forward by one tick (1 time unit).
         */
        void tick();
};

#endif