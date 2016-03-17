
#ifndef GAME_H_
#define GAME_H_



#endif

using namespace std;

class Game{
    public:
        Game();
        void init();
        void advanceTeams(); // Move active teams to next city
        void printResults(); // Print final results
        int teamsLeft(); // Returns number of teams remaining
        void deactivateTeam(Team); // moves a team from running to finished queue

    private:
        queue * finished<Team>;   // Teams that have finished.
        queue * running<Team>;    // Teams that are still running.
        llist * teams<Team>;      // List of teams
        llist * cities<string>;     // List of cities

};
