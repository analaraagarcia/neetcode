#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int len = position.size();
    if (len == 0) {
        return 0;
    }

    vector<pair<int, int>> cars;
    for (int i = 0; i < len; i++) {
        cars.push_back({position[i], speed[i]});
    }
    sort(cars.rbegin(), cars.rend()); // ordena a partir do carro com a menor distância até o target (maior distância do início)

    stack<double> fleets;

    for (int i = 0; i < len; i++) {
        double time = (double)(target - cars[i].first) / cars[i].second; // tempo = (distancia até o target) / (velocidade)

        if (fleets.empty() || time > fleets.top()) {
            fleets.push(time);
        }
    }
    return fleets.size();
}

// sem stack
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int len = position.size();
    if (len == 0) {
        return 0;
    }

    vector<pair<int, int>> cars;
    for (int i = 0; i < len; i++) {
        cars.push_back({position[i], speed[i]});
    }
    sort(cars.rbegin(), cars.rend()); // ordena a partir do carro com a menor distância até o target (maior distância do início)

    int numFleets = 0;
    double curMaxTime = 0.0;

    for (int i = 0; i < len; i++) {
        double time = (double)(target - cars[i].first) / cars[i].second; // tempo = (distancia até o target) / (velocidade)

        if (time > curMaxTime) {
            curMaxTime = time;
            numFleets++;
        }
    }
    return numFleets;
}

int main() {

}