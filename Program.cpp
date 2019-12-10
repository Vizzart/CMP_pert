#include <iostream>
#include <vector>
#include "Activity.h"
#include "Graph.h"


int main() {

    std::vector<Activity*> EMPTY_ACTIVITY = std::vector<Activity*>();

    Activity actA = Activity("A", 2, &EMPTY_ACTIVITY);
    Activity actB = Activity("B", 4, &EMPTY_ACTIVITY);

    std::vector<Activity*> actCParents = std::vector<Activity*>();
    actCParents.push_back(&actA);
    Activity actC = Activity("C", 3, &actCParents);

    std::vector<Activity*> actDParents = std::vector<Activity*>();
    actDParents.push_back(&actA);
    Activity actD = Activity("D", 5, &actDParents);

//    std::cout<<actA.toString();
//    std::cout<<actB.toString();
//    std::cout<<actC.toString();
//    std::cout<<actD.toString();

    std::vector<Activity*> allActivities = std::vector<Activity*>();
    allActivities.push_back(&actA);
    allActivities.push_back(&actB);
    allActivities.push_back(&actC);
    allActivities.push_back(&actD);

    /******************************************************************/

    Graph graph = Graph(&allActivities);

    std::cout<<actB.getLongestParentsDuration()<<std::endl;
    std::cout<<actC.getLongestParentsDuration()<<std::endl;
    std::cout<<actD.getLongestParentsDuration()<<std::endl;

    std::cout<<graph.toString()<<std::endl;


    return 0;
}