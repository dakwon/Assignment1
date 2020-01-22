#include <iostream>
using namespace std;

int main() {
  int maxRoomCapacity;
  int numAttendPeople;
  int needMore;
  int needLess;

  cout << "Enter the maximum number of room capacity: ";
  cin >> maxRoomCapacity;
  cout << "Enter the number of people attending the meeting: ";
  cin >> numAttendPeople;

  needMore = maxRoomCapacity - numAttendPeople;
  needLess = numAttendPeople - maxRoomCapacity;

  if (numAttendPeople <= maxRoomCapacity)
  {
    cout << "It is legal to hold the meeting and the room can hold "
    << needMore << " more people." << endl;
  }
  else if (numAttendPeople > maxRoomCapacity)
  {
    cout << "The numeber of people exceeds the maximum room capacity which is illegal! " << endl;
    cout << "The meeting cannot be held as planned due to fire regulations. You need to exclude "
    << needLess << " people to hold the meeting." << endl;
  }

  return 0;
}
