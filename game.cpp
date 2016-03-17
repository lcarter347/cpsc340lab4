

using namespace std;

Game::Game(){

}

Game::init(){
    cout << "##################################" << endl;
    cout << "## WELCOME TO THE AMAZING RACE! ##" << endl;
    cout << "##################################" << endl;

    string teamFileName, cityFileName;
    ifstream teamFile, cityFile;
    while(!teamFile.is_open()){
        cout << "Enter team list file name: ";
        getline(cin, teamFileName);
        teamFile.open(teamFileName.c_str());
        if (!teamFile.is_open())
            cout << "Invalid file name." << endl;
    }
    while(!cityFile.is_open()){
        cout << endl << "Enter city list file name: ";
        getline(cin, cityFileName);
        cityFile.open(cityFileName.c_str());
        if (!cityFile.is_open())
            cout << "Invalid file name." << endl;
    }
    bool done = false;
    while (!done){
        string nextCity;
        if (getline(cityFile, nextCity))
            cities.add(nextCity);
        else
            done = true;
    }
    done = false;
    while (!done){
        string nextTeam;
        if (getline(teamFile, nextTeam)){
            Team newTeam = new Team(nextTeam);
            teams.add(newTeam);
            running.add(newTeam);
        }
    }
    teamFile.close();
    cityFile.close();
}

void Game::advanceTeams(){
    
}

void Game:deactivateTeam(Team t){
   queue tempRun = new queue;
   queue tempFinish = new queue;
   tempFinish.enqueue(t);
   while (!finished.is_empty())
        tempFinish.enque(finished.dequeue());
   while (!running.is_empty()){
        Team tempT = running.dequeue();
        if (tempT != t)
            tempRun.queue(tempT)
   } 
   delete finished;
   delete running;
   finished = * tempFinish;
   running = * tempRun; 
}
      


}

void Game::printResults(){
    cout << "This will need to be the header for the table of results" << endl;
    while (!finished.is_empty){
        finished.dequeue().printResults(); // call each team's print results function
    }

}
