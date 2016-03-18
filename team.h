/*Lisa Carter
  Justin Rice
  Section 1*/

#include <string>
#include <time.h>
#include <llist.h>
#ifndef TEAM_H_
#define TEAM_H_

class Team{
    public:
        team(string n);
        ~team();
        string getName();
        void addTime(int time);
        int getStops();
        void print();
        int getRandomTime();
        string getTime();
    private:
        string name;
        llist raceTimes;

}

using namespace std;

Team::team(string n){
    name = n;
    llist<int> raceTimes;
}

Team::~team(){
    delete llist;
}

Team::
