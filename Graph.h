//
// Created by Mateusz Ciszkiewicz  on 10/12/2019.
//

#ifndef CPM_PERT_GRAPH_H
#define CPM_PERT_GRAPH_H

#include <vector>
#include <iostream>
#include "Activity.h"


class Graph {
private:
    Activity emptyActivity = Activity("EMPTY", 0.0, new std::vector<Activity*>());

public:
    std::vector<Activity*> *activities = new std::vector<Activity*>();

    Graph(std::vector<Activity*> *aActivities) {
        activities = aActivities;
    }

    std::string toString() {
        std::string activityStrings = "";
        for (auto &activity : *activities) {
            activityStrings += activity->toString();
        }
        return activityStrings;
    }


};


#endif //CPM_PERT_GRAPH_H
