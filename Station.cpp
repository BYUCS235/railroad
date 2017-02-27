#include "Station.h"


//Part 1--------------------------------------------------------------
/**
 * Let another car arrive at the station and become the current car.
 * Do not allow a new car to arrive if any of the following conditions apply:
 * 1.	There is already a current car
 * 2.	The new car's ID already exists in any structure
 * 3.	The new car's ID is negative
 *
 * @param car the ID of the car arriving at the station
 * @return true if the car successfully arrived; false otherwise
 */
bool Station::addToStation(int car)
{
    cout << "addToStation "<<car<<endl;
    turntable = car;
    return(true);
}

/**
 * Returns the ID of the current car.
 * Return -1 if there is no current car.
 *
 * @return the ID of the current car; -1 if there is no current car
 */
int Station::showCurrentCar()
{
    cout << "showCurrentCar "<<turntable<<endl;
}

/**
 * Removes the current car from the station.
 * Does nothing if there is no current car.
 *
 * @return true if the current car successfully left; false otherwise
 */
bool Station::removeFromStation()
{
    cout << "removeFromStation "<<turntable<<endl;
    turntable = -1;
    return(true);
}

//Part 2--------------------------------------------------------------
/**
 * Adds the current car to the stack.  After this operation, there should be no current car.
 * Does nothing if there is no current car or if the stack is already full.
 *
 * @return true if the car is successfully added to the stack; false otherwise
 */
bool Station::addToStack()
{
    cout << "addToStack "<<turntable<<endl;
    thestack.push(turntable);
}

/**
 * Removes the first car in the stack and makes it the current car.
 * Does nothing if there is already a current car or if the stack already empty.
 *
 * @return true if the car is successfully removed from the stack; false otherwise
 */
bool Station::removeFromStack()
{
    cout << "removeFromStack "<<thestack.top()<<endl;
    turntable = thestack.top();
    thestack.pop();
}

/**
 * Returns the ID of the first car in the stack.
 *
 * @return the ID of the first car in the stack; -1 if the stack is empty
 */
int Station::showTopOfStack()
{
    cout << "showTopOfStack "<<thestack.top()<<endl;
    return(thestack.top());
}
/**
 * Returns the number of cars in the stack.
 *
 * @return the number of cars in the stack
 */
int Station::showSizeOfStack()
{
    cout << "showSizeOfStack "<<endl;
}

//Part 3--------------------------------------------------------------
/**
 * Adds the current car to the queue.  After this operation, there should be no current car.
 * Does nothing if there is no current car or if the queue is already full.
 *
 * @return true if the car is successfully added to the queue; false otherwise
 */
bool Station::addToQueue()
{
    cout << "addToQueue "<<endl;
}

/**
 * Removes the first car in the queue and makes it the current car.
 * Does nothing if there is already a current car or if the queue already empty.
 *
 * @return true if the car is successfully removed from the queue; false otherwise
 */
bool Station::removeFromQueue()
{
    cout << "removeFromQueue "<<endl;
}

/**
 * Returns the ID of the first car in the queue.
 *
 * @return the ID of the first car in the queue; -1 if the queue is empty
 */
int Station::showTopOfQueue()
{
    cout << "showTopOfQueue "<<endl;
}

/**
 * Returns the number of cars in the queue.
 *
 * @return the number of cars in the queue
 */
int Station::showSizeOfQueue()
{
    cout << "showSizeOfQueue "<<endl;
}

//Part 4--------------------------------------------------------------
/**
 * Adds the current car to the deque on the left side.  After this operation, there should be no current car.
 * Does nothing if there is no current car or if the deque is already full.
 *
 * @return true if the car is successfully added to the deque; false otherwise
 */
bool Station::addToDequeLeft()
{
    cout << "addToDequeLeft "<<endl;
}

/**
 * Adds the current car to the deque on the right side.  After this operation, there should be no current car.
 * Does nothing if there is no current car or if the deque is already full.
 *
 * @return true if the car is successfully added to the deque; false otherwise
 */
bool Station::addToDequeRight()
{
    cout << "addToDequeRight "<<endl;
}

/**
 * Removes the leftmost car in the deque and makes it the current car.
 * Does nothing if there is already a current car or if the deque already empty.
 *
 * @return true if the car is successfully removed from the deque; false otherwise
 */
bool Station::removeFromDequeLeft()
{
    cout << "removeFromDequeLeft "<<endl;
}

/**
 * Removes the rightmost car in the deque and makes it the current car.
 * Does nothing if there is already a current car or if the deque already empty.
 *
 * @return true if the car is successfully removed from the deque; false otherwise
 */
bool Station::removeFromDequeRight()
{
    cout << "removeFromDequeRight "<<endl;
}

/**
 * Returns the ID of the leftmost car in the deque.
 *
 * @return the ID of the leftmost car in the deque; -1 if the deque is empty
 */
int Station::showTopOfDequeLeft()
{
    cout << "showTopOfDequeLeft"<<endl;
}

/**
 * Returns the ID of the rightmost car in the deque.
 *
 * @return the ID of the rightmost car in the deque; -1 if the deque is empty
 */
int Station::showTopOfDequeRight()
{
    cout <<"showTopOfDequeRight"<<endl;
}

/**
 * Returns the number of cars in the deque.
 *
 * @return the number of cars in the deque
 */
int Station::showSizeOfDeque()
{
    cout <<"showSizeOfDeque"<<endl;
}
