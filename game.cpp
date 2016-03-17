

using namespace std;

Game::Game(){

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
