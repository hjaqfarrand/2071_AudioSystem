// put into processing stm
// for integration - please start new t2 file using copy of t1!
// code to add to stm code for trigger pulse

// set up the trig pin
HAL_GPIO_WritePin(TRIG_GPIO_Port, TRIG_Pin, GPIO_PIN_SET);

// restart counter
__HAL_TIM_SET_COUNTER(&htim16, 0);

while(__HAL_TIM_GET_COUNTER(&htim16) < 10);

HAL_GPIO_WritePin(TRIG_GPIO_Port, TRIG_Pin, GPIO_PIN_RESET);


// logic

if(distance < threshold)
{
    recordingEnabled = 1;
}
else
{
    recordingEnabled = 0;
}
