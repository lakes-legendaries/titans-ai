#ifndef TITANSAI_CARD_H
#define TITANSAI_CARD_H
#pragma once

#include <string>
#include <vector>

#include <titansai/enum.h>

using std::string;
using std::vector;

class Card {
    public:
        // Constructor
        Card(Name::Name);

        // Card attributes
        vector <size_t> ability = vector <size_t>(Ability::NUM, 0);
        size_t cost;
        Element::Element element;
        Name::Name name;
        int power;
        Species::Species species;
};

#endif
