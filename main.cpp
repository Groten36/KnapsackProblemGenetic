#include <iostream>
#include <vector>
#include <array>
#include <random>
constexpr int POPULATION_SIZE = 20;
constexpr int NUMBER_OF_THINGS = 10;
constexpr int MAX_WEIGHT = 52;

std::vector<std::vector<bool>> generate_population(){
    std::vector<std::vector<bool>> population;
    population.reserve(POPULATION_SIZE);

    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::bernoulli_distribution dist(0.5);
    for (int i=0; i<POPULATION_SIZE; i++){
         std::vector<bool> chromosome;
         chromosome.reserve(NUMBER_OF_THINGS);

         for (int j=0; j<NUMBER_OF_THINGS; j++){
            chromosome.push_back(dist(gen));
        }
        population.push_back(std::move(chromosome));
    }
    return population;
}
int main(){
    std::vector<std::vector<bool>> population = generate_population();
    std::array<int,NUMBER_OF_THINGS> values={5,	9,	1,	14,	8,	12,	5,	6,	3,	7};
    std::array<int,NUMBER_OF_THINGS> weights={3,	12,	8,	11,	10,	7,	6,	2,	14,	2};
return 0;
}