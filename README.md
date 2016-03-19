# cpsc340lab4

Amazing Race Program


Class docs:
* * * * 
llist.h - A templated linked list.
    add(T)       - add element T to the space to the right of the current element
    advance()    - move pointer to next element
    remove()     - remove current element
    is_empty()   - returns true if list is empty, else false
    getsize()    - returns int current size of list
    moveToHead() - go to head of list
    moveToTail() - go to tail of list

* * * *
queue.h - A templated queue.
    enqueue(T)   - add element T to the back of the queue
    print()      - print all elements in a queue, for testing 
    dequeue()    - return first element of a queue
    forward()    - moves current pointer forward (towards back/tail of queue)
    backward()   - moves current pointer backward (towards front/head of queue)
    getNode()    - returns data contained in node at current pointer
    get_size()   - return size of queue
    is_empty()   - returns true if queue is empty, else false


* * * *
team.h - A class representing a team in The Amazing Race.
    Note: the constructor takes the name of team as string
    getName()    - returns the name of team as string
    addTime()    - adds a randomly generated time to the team's linkedlist of times for each round, returns that time as an int of minutes  
    getStops()   - returns the number of stops the team has made (the number of rounds it has participated in)
    print()      - prints out a formatted string with the team's name and times for each round (in hours and minutes)
    getRandomTime() - helper method that returns a randomly generated int between 300 and 1440 (5 and 24 hours)
    getTimeString() - helper method that returns the formatted string of hours and minutes that the team completed each round in
