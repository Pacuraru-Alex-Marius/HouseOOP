#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED
#include "Room.h"
class House
{
private:
    vector <IRoom*> rooms;
public:
    void addRoom(IRoom* r)
    {
        r->createRoom();
        rooms.push_back(r);
    }
    void removeRoom(int n)
    {
        rooms[n]->deleteRoom();
        rooms.erase(rooms.begin()+n);
    }
    void collectRoomData()
    {
        for(int i=0;i<rooms.size();i++)
            rooms[i]->updateRoom();
    }
    void viewRoomData()
    {
        for(int i=0;i<rooms.size();i++)
            rooms[i]->readRoom();
    }
};
#endif
