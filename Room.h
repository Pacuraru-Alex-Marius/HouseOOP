#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include <vector>
#include <fstream>
#include <iomanip>
#include "Sensor.h"
using namespace std;
class IRoom
{
public:
    virtual void createRoom() =0;
    virtual void readRoom() =0;
    virtual void updateRoom() =0;
    virtual void deleteRoom() =0;
};
class Living:public IRoom
{
private:
    vector <ISensor*> sensors;
    string s;
    int update=0;
public:
    void createRoom()
    {
        int n=2;
        fstream f;
        s="LivingRoom1.txt";
        f.open(s,ios::in);
        while(f)
        {
            f.close();
            s[10]='0'+n;
            n++;
            f.open(s,ios::in);
        }
        f.close();
        f.open(s,ios::app);
        f.close();
    }
    void readRoom()
    {
        ifstream f;
        double t,h,p;
        f.open(s);
        cout<<endl<<"Datele din fisierul "<<s<<endl;
        for(int i=1;i<=update*2;i++)
        {
            f>>t>>h>>p;
            cout<<"Temperatura"<<i<<": "<<t<<" grade Celsius"<<endl;
            cout<<"Umiditatea"<<i<<": "<<h<<"%"<<endl;
            cout<<"Presiunea"<<i<<": "<<p<<" hPa"<<endl;
        }
        f.close();
    }
    void updateRoom()
    {
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        fstream f;
        f.open(s,ios::app);
        f<<fixed<<setprecision(2);
        for(int i=0;i<6;i++)
        {
            if(i==3)
            {
                system("pause");
                f<<endl<<sensors[update*6+i]->readSensor()<<' ';
            }
            else
               f<<sensors[update*6+i]->readSensor()<<' ';
        }
        f<<endl;
        update++;
        system("pause");
        f.close();
    }
    void deleteRoom()
    {
        int r=remove(s.c_str());
        if(!r)
            cout<<endl<<"Fisierul "<<s<<" a fost sters."<<endl;
    }
};
class Bedroom:public IRoom
{
private:
    vector <ISensor*> sensors;
    string s;
    int update=0;
public:
    void createRoom()
    {
        int n=2;
        fstream f;
        s="Bedroom1.txt";
        f.open(s,ios::in);
        while(f)
        {
            f.close();
            s[7]='0'+n;
            n++;
            f.open(s,ios::in);
        }
        f.close();
        f.open(s,ios::app);
        f.close();
    }
    void readRoom()
    {
        ifstream f;
        double t,h,p;
        f.open(s);
        cout<<endl<<"Datele din fisierul "<<s<<endl;
        for(int i=1;i<=update*2;i++)
        {
            f>>t>>h>>p;
            cout<<"Temperatura"<<i<<": "<<t<<" grade Celsius"<<endl;
            cout<<"Umiditatea"<<i<<": "<<h<<"%"<<endl;
            cout<<"Presiunea"<<i<<": "<<p<<" hPa"<<endl;
        }
        f.close();
    }
    void updateRoom()
    {
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        fstream f;
        f.open(s,ios::app);
        f<<fixed<<setprecision(2);
        for(int i=0;i<6;i++)
        {
            if(i==3)
            {
                system("pause");
                f<<endl<<sensors[update*6+i]->readSensor()<<' ';
            }
            else
               f<<sensors[update*6+i]->readSensor()<<' ';
        }
        f<<endl;
        update++;
        system("pause");
        f.close();
    }
    void deleteRoom()
    {
        int r=remove(s.c_str());
        if(!r)
            cout<<endl<<"Fisierul "<<s<<" a fost sters."<<endl;
    }
};
class Bathroom:public IRoom
{
private:
    vector <ISensor*> sensors;
    string s;
    int update=0;
public:
    void createRoom()
    {
        int n=2;
        fstream f;
        s="Bathroom1.txt";
        f.open(s,ios::in);
        while(f)
        {
            f.close();
            s[8]='0'+n;
            n++;
            f.open(s,ios::in);
        }
        f.close();
        f.open(s,ios::app);
        f.close();
    }
    void readRoom()
    {
        ifstream f;
        double t,h,p;
        f.open(s);
        cout<<endl<<"Datele din fisierul "<<s<<endl;
        for(int i=1;i<=update*2;i++)
        {
            f>>t>>h>>p;
            cout<<"Temperatura"<<i<<": "<<t<<" grade Celsius"<<endl;
            cout<<"Umiditatea"<<i<<": "<<h<<"%"<<endl;
            cout<<"Presiunea"<<i<<": "<<p<<" hPa"<<endl;
        }
        f.close();
    }
    void updateRoom()
    {
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        fstream f;
        f.open(s,ios::app);
        f<<fixed<<setprecision(2);
        for(int i=0;i<6;i++)
        {
            if(i==3)
            {
                system("pause");
                f<<endl<<sensors[update*6+i]->readSensor()<<' ';
            }
            else
               f<<sensors[update*6+i]->readSensor()<<' ';
        }
        f<<endl;
        update++;
        system("pause");
        f.close();
    }
    void deleteRoom()
    {
        int r=remove(s.c_str());
        if(!r)
            cout<<endl<<"Fisierul "<<s<<" a fost sters."<<endl;
    }
};
class Kitchen:public IRoom
{
private:
    vector <ISensor*> sensors;
    string s;
    int update=0;
public:
    void createRoom()
    {
        int n=2;
        fstream f;
        s="Kitchen1.txt";
        f.open(s,ios::in);
        while(f)
        {
            f.close();
            s[7]='0'+n;
            n++;
            f.open(s,ios::in);
        }
        f.close();
        f.open(s,ios::app);
        f.close();
    }
    void readRoom()
    {
        ifstream f;
        double t,h,p;
        f.open(s);
        cout<<endl<<"Datele din fisierul "<<s<<endl;
        for(int i=1;i<=update*2;i++)
        {
            f>>t>>h>>p;
            cout<<"Temperatura"<<i<<": "<<t<<" grade Celsius"<<endl;
            cout<<"Umiditatea"<<i<<": "<<h<<"%"<<endl;
            cout<<"Presiunea"<<i<<": "<<p<<" hPa"<<endl;
        }
        f.close();
    }
    void updateRoom()
    {
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        sensors.push_back(new Temperature());
        sensors.push_back(new Humidity());
        sensors.push_back(new Pressure());
        fstream f;
        f.open(s,ios::app);
        f<<fixed<<setprecision(2);
        for(int i=0;i<6;i++)
        {
            if(i==3)
            {
                system("pause");
                f<<endl<<sensors[update*6+i]->readSensor()<<' ';
            }
            else
               f<<sensors[update*6+i]->readSensor()<<' ';
        }
        f<<endl;
        update++;
        system("pause");
        f.close();
    }
    void deleteRoom()
    {
        int r=remove(s.c_str());
        if(!r)
            cout<<endl<<"Fisierul "<<s<<" a fost sters."<<endl;
    }
};
#endif
