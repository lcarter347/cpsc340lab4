
#ifndef GAME_H_
#define GAME_H_



#endif

using namespace std;

class Game{
    public:
        Game();
        void advanceTeams(); // Move active teams to next city
        void printResults(); // Print final results
        int teamsLeft(); // Returns number of teams remaining
        void deactivateTeam(Team); // moves a team from running to finished queue

    private:
        queue * finished;   // Teams that have finished.
        queue * running;    // Teams that are still running.
        llist * teams;      // List of teams
        llist * cities;     // List of cities

};
