#ifndef _INDIVIDUAL_HPP_
#define _INDIVIDUAL_HPP_

#include <random>
#include <array>
#include "parameters.cpp"


enum Action
{
    nothing = 0,
    make_new_connection = 1,
    delete_latest_connection = 2
};

class Individual
{
    public:
        // evolving learning rates of both low quality
        // and high quality individuals
        std::array learning_rate[2]{0.0,0.0};

        // the value of one action vs the next
        double learned_value{0.0};

        double phenotype_continuing{0.0};
        double phenotype_adding{0.0};

        // whether individual has experienced early life effects
        bool high_quality{true};

        // default c'tor
        Individual(Parameters const &par);

        // birth c'tor
        Individual(
                Individual const mom
                ,Parameters const &par
                ,std::mt19937 random_number_generator);

        // standard copy constructor
        Individual(Individual const &other);

        // assignment operator
        void operator=(Individual const &other);

};


#endif
