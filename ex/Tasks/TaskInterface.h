/* Generated by Together */
struct AIRCRAFT_STATE;
class TaskPoint;

#ifndef TASKINTERFACE_H
#define TASKINTERFACE_H
class TaskInterface {
public:    

    virtual double get_leg_bearing(const AIRCRAFT_STATE &) =0;

    virtual double get_leg_remaining(const AIRCRAFT_STATE &) =0;

    virtual void setActiveTaskPoint(unsigned) = 0;

    virtual TaskPoint* getActiveTaskPoint() = 0;
};
#endif //TASKINTERFACE_H