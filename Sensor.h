#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED
#include <ctime>
class ISensor
{
public:
    virtual double readSensor() {return 0.0;}
};
class Temperature:public ISensor
{
private:
    double generateTemperature()
    {
        /*
        srand(time(NULL));
        double r;
        r=rand()%121-40;
        return r;
        */
        srand(time(NULL));
        double f=(double)rand()/RAND_MAX;
        return -40+f*120;
    }
public:
    double readSensor()
    {
        return generateTemperature();
    }
};
class Humidity:public ISensor
{
private:
    double generateHumidity()
    {
        /*
        srand(time(NULL));
        double r;
        r=rand()%101;
        return r;
        */
        srand(time(NULL));
        double f=(double)rand()/RAND_MAX;
        return f*100;
    }
public:
    double readSensor()
    {
        return generateHumidity();
    }
};
class Pressure:public ISensor
{
private:
    double generatePressure()
    {
        /*
        srand(time(NULL));
        double r;
        r=rand()%801+300;
        return r;
        */
        srand(time(NULL));
        double f=(double)rand()/RAND_MAX;
        return 300+f*500;
    }
public:
    double readSensor()
    {
        return generatePressure();
    }
};
#endif
