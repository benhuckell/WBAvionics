#include "statemachine.h"

/* Constructor for FlightState class definition */
FlightState::FlightState(){
    currentState = test;
}

/* void switchState(FlightStates){}
 * @brief  Switches state machine state.
 * @param  FlightState new_state - State machine state to switch to.
 * @return void.
 */
void FlightState::switchState(FlightStates new_state){
    if(currentState != WINTER_CONTINGENCY) //don't want to switch out of WINTER_CONTINGENCY accidentally
        currentState = new_state;
}

/* FlightStates getState(void){}
 * @brief Returns the current state
 * @return FlightStates enumeration state
 */
FlightStates FlightState::getState(){
    return currentState;
}
