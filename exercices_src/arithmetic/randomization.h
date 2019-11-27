#include <cstdlib>
#include <vector>
#include <functional>
// TODO: how to initialize the seed?
const int CI1 = (rand() % 5) - 2;
const int CI2 = (rand() % 5) - 2;
const int CI3 = (rand() % 5) - 2;
const int CI4 = rand() % 4;
const int CI5 = rand() % 2;

#define PLUSOUMOINS +

#define CONST const auto

#define X x
#define Y y
#define Z z


int RANDOM_INT(int min, int max) {
    return min;
}

//template<class T>
//typedef int T;
template<typename ... Args>
//std::vector<int> RANDOM_VECTOR(int N, std::function<int(Args...)> f, Args... args) {
std::vector<int> RANDOM_VECTOR(int N, std::function<int(int, int)> f, Args... args) {
    std::vector<int> v(N);
    for (auto &value: v)
        value = f(args...);
    return v;
}
/*
std::vector<std::vector<int>> RANDOM_VECTOR(int N, std::function<std::vector<int>(int, std::function<int(int,int)>, int, int)> f, int M, std::function<int(int, int)> g, int i, int j) {
    std::vector<std::vector<int>> v(N);
    for (auto &value: v)
        value = RANDOM_VECTOR(M, g, i, j);
    return v;
}
*/

// TODO Randomize me
template<typename T, typename ... Args>
T RANDOM_CHOICE(T t, Args... args) {
    return t;
}
