#include "Station.h"
int main()
{
    Station mystation;
    int carID;
    int choice_num = 0;
    string choices[] = {
        "1. Add a car to the station",
        "2. Remove a car from the station",
        "3. Add a car from the station to a storage facility",
        "4. Remove a car from a storage facility and add it to the station",
        "5. Display the cars currently accessible in the station and storage facilities",
        "6. Quit"
    };
    const int NUM_CHOICES = 6;
    
    string storage[4] = {
        "1. Add a car to the stack",
        "2. Add a car to the queue",
        "3. Add a car to the dequeue left",
        "4. Add a car to the dequeue right"
    };
    string outstorage[4] = {
        "1. Remove a car from the stack",
        "2. Remove a car from the queue",
        "3. Remove a car from the dequeue left",
        "4. Remove a car from the dequeue right"
    };
    const int NUM_STORAGE = 4;
  // Test list
    list <int> testlist;
    testlist.insertHead(55);
    testlist.insertHead(5);
    cout << "Should be 5 was "<<testlist.front()<<endl;
    testlist.pop_front();
    cout << "Should be 55 was "<<testlist.front()<<endl;
  // Perform all operations selected by user.
  while (choice_num < NUM_CHOICES) {
    // Select the next operation.
    cout << "Select an operation on the station\n";
    for (int i = 0; i < NUM_CHOICES; i++) {
      cout << choices[i] << endl;
    }
    cin >> choice_num;
    switch (choice_num) {
        case 1:
            cout << "Enter the ID of the car\n";
            cin >> carID;
            if(mystation.addToStation(carID)) {
              cout << "addToStation was successful"<<endl;
            };
            break;
        case 2:
            if(mystation.removeFromStation()) {
              cout << "removeFromStation was successful"<<endl;
            };
            break;
        case 3:
            // Add a car from the station to a storage facility
             
            int storage_num;
            
            for (int i = 0; i < NUM_STORAGE; i++) {
                cout << storage[i] << endl;
            }
            
            cin >> storage_num;
            
            switch(storage_num) {
                case 1:
                    mystation.addToStack();
                    break;
                case 2:
                    mystation.addToQueue();
                    break;
                case 3:
                    mystation.addToDequeLeft();
                    break;
                case 4:
                    mystation.addToDequeRight();
                    break;
                default:
                    break;
            }
            
            break;
                    // Add a car from the station to a storage facility
         case 4:    
            int outstorage_num;
            
            for (int i = 0; i < NUM_STORAGE; i++) {
                cout << outstorage[i] << endl;
            }
            
            cin >> outstorage_num;
            
            switch(outstorage_num) {
                case 1:
                    mystation.removeFromStack();
                    break;
                case 2:
                    mystation.removeFromQueue();
                    break;
                case 3:
                    mystation.removeFromDequeLeft();
                    break;
                case 4:
                    mystation.removeFromDequeRight();
                    break;
                default:
                    break;
            }
            
            break;
        case 5:
            mystation.showCurrentCar();
            mystation.showTopOfStack();
            break;
        case 6:
            cout << "Choo choo ciao!"<<endl;
            return(0);
        default:
            cout << "Invalid selection\n";
            break;
    } // End switch
  } // End while.
  return(0);
}