//
// Created by Mateusz Ciszkiewicz  on 10/12/2019.
//

#ifndef CPM_PERT_ACTIVITY_H
#define CPM_PERT_ACTIVITY_H

#include <vector>
#include <string>
#include <iostream>

class Activity {
private:

    double duration = 0.0;
    std::vector<Activity*> *parents = new std::vector<Activity*>();

    double left = 0.0;
    double right = 0.0;

public:
    std::string name = "";

    Activity(std::string aName, double aDuration, std::vector<Activity*> *aParents) {
        name = aName;
        duration = aDuration;
        parents = aParents;
    };

    double getLongestParentsDuration() {
        if (parents->empty()) {
            double totalValue = this->duration;
            this->left = totalValue;

            return totalValue;
        }
        else {
            std::vector<double> results = std::vector<double>(parents->size());
            // Tak wygląda for each w C++. Po prostu idziesz po wszystkich elementach w kolekcji
            for (auto &parent : *parents) {
                results.push_back(parent->getLongestParentsDuration());
            }

            double maxValue = *std::max_element(results.begin(), results.end());

            double totalValue = maxValue + this->duration;
            this->left = totalValue;

            return totalValue;
        }
    }

    std::string toString() {
        std::string parentsNames = "";
        for (auto &parent : *parents) {
            parentsNames += (" " + parent->name);
        }

        return "\n\nname: " + name + "\nduration: " + std::to_string(duration) + "\nleft: " + std::to_string(left) + "\nright: " + std::to_string(right) + "\nparents: " + parentsNames;
    }
};


#endif //CPM_PERT_ACTIVITY_H
