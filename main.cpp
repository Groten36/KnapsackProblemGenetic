#include <iostream>
#include <vector>
#include <random>
int POPULATION_SIZE=20;
int NUMBER_OF_THINGS=10;

std::vector<std::vector<bool>> generate_population(int population_size, int number_of_things){
    std::vector<std::vector<bool>> population;
    for (auto i=0;i<population_size;i++){
         std::vector<bool> chromosome;
         for (auto i=0;i<number_of_things;i++){
            static std::random_device rd;
            static std::mt19937 gen(rd());
            static std::bernoulli_distribution dist(0.5);
            chromosome.push_back(dist(gen));
        }
        population.push_back(chromosome);
    };
    return population;
}
int main(){
    std::vector<std::vector<bool>> population=generate_population(POPULATION_SIZE,NUMBER_OF_THINGS);
    int values[10]={5,	9,	1,	14,	8,	12,	5,	6,	3,	7};
    int weights[10]={3,	12,	8,	11,	10,	7,	6,	2,	14,	2};
return 0;
}