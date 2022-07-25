#include <titansai/card.h>

#include <stdexcept>


Card::Card(Name::Name name) {

    // save passed
    name = name;

    // get card attributes
    switch (name) {

        // forest dwellers
        case Name::MONK:
            ability[Ability::ENERGY] = 1;
            cost = 0;
            element = Element::FOREST;
            power = 0;
            species = Species::DWELLER;
        break;
        case Name::WIZARD:
            cost = 0;
            element = Element::FOREST;
            power = 1;
            species = Species::DWELLER;
        break;
        case Name::TRAVELER:
            ability[Ability::ENERGY] = 2;
            cost = 2;
            element = Element::FOREST;
            power = 1;
            species = Species::DWELLER;
        break;

        // desert dwellers
        case Name::GHOST:
            cost = 1;
            element = Element::DESERT;
            power = -1;
            species = Species::DWELLER;
        break;

        // storm warriors
        case Name::NIKOLAI_THE_CURSED:
            ability[Ability::SUMMON] = 1;
            cost = 1;
            element = Element::STORM;
            power = 0;
            species = Species::WARRIOR;
        break;

        // storm beasts
        case Name::WINDS_HOWL:
            ability[Ability::FLASH] = 2;
            cost = 2;
            element = Element::STORM;
            power = -1;
            species = Species::BEAST;
        break;

        // storm dragons
        case Name::AURORA_DRACO:
            ability[Ability::BOLSTER_FIRE] = 1;
            ability[Ability::HAUNT] = 2;
            cost = 3;
            element = Element::STORM;
            power = 1;
            species = Species::DRAGON;
        break;

        // storm titans
        case Name::MADNESS_OF_A_THOUSAND_STARS:
            ability[Ability::ENERGY_ARC] = 4;
            cost = 4;
            element = Element::STORM;
            power = 1;
            species = Species::TITAN;
        break;

        // fire warriors
        case Name::ZODIAC_THE_ETERNAL:
            ability[Ability::PURIFY] = 1;
            cost = 1;
            element = Element::FIRE;
            power = 2;
            species = Species::WARRIOR;
        break;

        // fire beasts
        case Name::LIVING_VOLCANO:
            ability[Ability::FLASH] = 1;
            ability[Ability::DISCARD] = 2;
            cost = 2;
            element = Element::FIRE;
            power = 0;
            species = Species::BEAST;
        break;

        // fire dragons
        case Name::SMOLDERING_DRAGON:
            ability[Ability::BOLSTER_ICE] = 1;
            ability[Ability::PROTECT] = 1;
            cost = 3;
            element = Element::FIRE;
            power = 3;
            species = Species::DRAGON;
        break;

        // fire titans
        case Name::FINAL_JUDGMENT:
            ability[Ability::DISCARD] = 64;
            cost = 4;
            element = Element::FIRE;
            power = 2;
            species = Species::TITAN;
        break;

        // ice warriors
        case Name::JACE_WINTERS_FIRSTBORN:
            ability[Ability::SUBVERT_HARMLESS] = 1;
            cost = 1;
            element = Element::ICE;
            power = 1;
            species = Species::WARRIOR;
        break;

        // ice beasts
        case Name::RETURN_OF_THE_FROST_GIANTS:
            ability[Ability::FLASH] = 1;
            ability[Ability::SUBSTITUTE] = 1;
            cost = 2;
            element = Element::ICE;
            power = 0;
            species = Species::BEAST;
        break;

        // ice dragons
        case Name::FROSTBREATH:
            ability[Ability::BOLSTER_ROCK] = 1;
            ability[Ability::SUBVERT_MINDLESS] = 1;
            cost = 3;
            element = Element::ICE;
            power = 2;
            species = Species::DRAGON;
        break;

        // ice titans
        case Name::HELL_FROZEN_OVER:
            ability[Ability::SUBVERT_TRAITOROUS] = 1;
            cost = 4;
            element = Element::ICE;
            power = 1;
            species = Species::TITAN;
        break;

        // rock warriors
        case Name::AKARI_TIMELESS_FIGHTER:
            ability[Ability::DRAW] = 2;
            cost = 1;
            element = Element::ROCK;
            power = 2;
            species = Species::WARRIOR;
        break;

        // rock beasts
        case Name::SPINE_SPLITTER:
            ability[Ability::FLASH] = 1;
            ability[Ability::SACRIFICE] = 1;
            cost = 2;
            element = Element::ROCK;
            power = 0;
            species = Species::BEAST;
        break;

        // rock dragons
        case Name::CAVERNS_DEFENDER:
            ability[Ability::BOLSTER_STORM] = 1;
            ability[Ability::SUBVERT_CAVE_IN] = 1;
            cost = 3;
            element = Element::ROCK;
            power = 3;
            species = Species::DRAGON;
        break;

        // rock titans
        case Name::WHAT_LIES_BENEATH:
            ability[Ability::BOLSTER_RIVALS] = 1;
            cost = 4;
            element = Element::ROCK;
            power = 0;
            species = Species::TITAN;
        break;

        // error
        default:
            throw std::runtime_error(
                "Card name "
                + std::to_string(name)
                + " not implemented."
            );
        break;
    }
}
