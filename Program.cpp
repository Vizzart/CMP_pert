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

    std::vector<Activity*> actEParents = std::vector<Activity*>();
    actEParents.push_back(&actB);
    Activity actE = Activity("E", 1, &actEParents);

    std::vector<Activity*> actFParents = std::vector<Activity*>();
    actFParents.push_back(&actC);
    Activity actF = Activity("F", 3, &actFParents);

    std::vector<Activity*> actGParents = std::vector<Activity*>();
    actGParents.push_back(&actC);
    Activity actG = Activity("G", 6, &actGParents);

    std::vector<Activity*> actHParents = std::vector<Activity*>();
    actHParents.push_back(&actD);
    Activity actH = Activity("H", 3, &actHParents);

    std::vector<Activity*> actIParents = std::vector<Activity*>();
    actIParents.push_back(&actE);
    Activity actI = Activity("I", 4, &actIParents);

    std::vector<Activity*> actJParents = std::vector<Activity*>();
    actJParents.push_back(&actF);
    Activity actJ = Activity("J", 1, &actJParents);

    std::vector<Activity*> actKParents = std::vector<Activity*>();
    actKParents.push_back(&actG);
    actKParents.push_back(&actH);
    Activity actK = Activity("K", 5, &actKParents);

    std::vector<Activity*> actLParents = std::vector<Activity*>();
    actLParents.push_back(&actG);
    actLParents.push_back(&actH);
    actLParents.push_back(&actI);
    Activity actL = Activity("L", 3, &actLParents);

    std::vector<Activity*> actMParents = std::vector<Activity*>();
    actMParents.push_back(&actJ);
    actMParents.push_back(&actK);
    actMParents.push_back(&actL);
    Activity actM = Activity("M", 2, &actMParents);


    std::vector<Activity*> allActivities = std::vector<Activity*>();
    allActivities.push_back(&actA);
    allActivities.push_back(&actB);
    allActivities.push_back(&actC);
    allActivities.push_back(&actD);
    allActivities.push_back(&actE);
    allActivities.push_back(&actF);
    allActivities.push_back(&actG);
    allActivities.push_back(&actH);
    allActivities.push_back(&actI);
    allActivities.push_back(&actJ);
    allActivities.push_back(&actK);
    allActivities.push_back(&actL);
    allActivities.push_back(&actM);

    /******************************************************************/

    Graph graph = Graph(&allActivities);

//    std::cout<<graph.toString()<<std::endl;

    std::cout<< actM.calcTotalDuration() <<std::endl;

    std::cout<<graph.toString()<<std::endl;


    return 0;
}