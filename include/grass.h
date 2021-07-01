#ifndef GRASS
#define GRASS

#include "life.h"

class Grass: public Life {
    private:
        int grassLimit;

    public:
        Grass(std::string name, std::string path);

    private:
        virtual int doAction() override;
        void reproduce();
};

#endif