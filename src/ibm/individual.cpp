#include "parameters.hpp"
#include "individual.hpp"

// standard constructure
Individual::Individual(Parameters const &par) :
    // learning rates for low and high quality (refl
    learning_rate{par.init_learning,par.init_learning};
{

} // end Individual::Individual
